#!/usr/bin/env python
# -*-coding: utf-8 -*-
# author:lmj
import re
import os
import re,time
try:
    import json
except:
    import simplejson as json


from itertools import cycle

ENDPOINT = os.uname()[1]
TS = int(time.time())

class calc_counter(object):
    def __init__(self, devices):
        self.devices = self._devices(devices)
        self.device1 = "/sys/kernel/debug/%s/fw_counters" % self.devices[0]
        self.device2 = "/sys/kernel/debug/%s/fw_counters" % self.devices[1]


    @staticmethod
    def _devices(devices):
        if type(devices) == str:
            devices = devices.split(',')
        return [x.strip() for x in devices]

    def exec_calc(self,step=60):
        ret = []
        with open('%s' % self.device1, 'r') as f:
            flag = 1
            file = f.readlines()
            for line in file:
                #print(line)
                line = line.strip()
                m = re.findall('\S*\s+([0-9.]+)]:\s+([0-9.]+)',line)
                if m:
                    flag += 1
                    if (flag % 2 == 0):
                        qat_count_status = {
                            "endpoint": ENDPOINT,
                            "metric": "qat.counter.total",
                            "tags": "request AE=%s" % m[0][0],
                            "timestamp": TS,
                            "value":  m[0][1],
                            "step": step,
                            "counterType": "COUNTER"
                            }
                        ret.append(qat_count_status)
                    else:
                        qat_count_status = {
                            "endpoint": ENDPOINT,
                            "metric": "qat.counter.total",
                            "tags": "response AE=%s" % m[0][0],
                            "timestamp": TS,
                            "value":  m[0][1],
                            "step": step,
                            "counterType": "COUNTER"
                            }

                        ret.append(qat_count_status)
                else:
                    pass
        return ret
                
if __name__ == '__main__':
    device = calc_counter("qat_dh895xcc_06:00.0, qat_dh895xcc_83:00.0")
    print(json.dumps(device.exec_calc(), indent=4))
