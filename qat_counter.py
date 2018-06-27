#!/usr/bin/env python
import os
import re

with open('/sys/kernel/debug/qat_dh895xcc_06:00.0/fw_counters','r') as f:

    #print(f.read())
    file = f.readlines()
    pattern  = "Firmware"
    for line in file:
        line = line.rstrip()
        m = re.findall('\S*\s+([0-9.]+)]:\s+([0-9.]+)',line)
        if m:
	    for i in m:
		print("AE %s thread:  %s Requests/Responses" % (i[0],i[1])) 




