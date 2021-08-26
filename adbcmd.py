import os
adb = 'adb devices'
d = os.system(adb)
print(d)
print('----------')
swipe = 'adb -s f868d292 shell input swipe 0 0 500 500'
e = os.system(swipe)
print(e)
print('----------')
tap = 'adb -s f868d292 shell input tap 500 500'
f = os.system(tap)
print(f)