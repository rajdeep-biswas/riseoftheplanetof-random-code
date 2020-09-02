import time;

tImE = time.localtime(time.time())

print(str(tImE.tm_year) + " | " + str(tImE.tm_mon) + " | " + str(tImE.tm_mday) + " | " + str(tImE.tm_hour) + ":" + str(tImE.tm_min) + ":" + str(tImE.tm_sec));