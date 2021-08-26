import os
adb = 'adb devices'
d = os.system(adb)
print(d)
//print('----------')
//swipe = 'adb -s f868d292 shell input swipe 0 0 500 500'
//e = os.system(swipe)
//print(e)
//print('----------')
//tap = 'adb -s f868d292 shell input tap 500 500'
//f = os.system(tap)
//print(f)

start_we_chat = 'adb -s f868d292 shell am start -n com.tencent.mm/.ui.LauncherUI'
os.system(start_we_chat)

get_xml = 'adb -s f868d292 shell uiautomator dump /sdcard/wechat_main.xml'
os.system(get_xml)

pull_xml = 'adb -s f868d292 shell pull sdcard/wechat_main.xml C:/'
os.system(pull_xml)

print('----------')
tap_me = 'adb -s f868d292 shell input tap 810 1747'
g = os.system(tap_me)
print(g)

pull_xml1 = 'adb -s f868d292 shell pull sdcard/wechat_main1.xml C:/'
os.system(pull_xml1)

tap_pay = 'adb -s f868d292 shell input tap 100 721'
os.system(tap_pay)

roll = 'adb -s f868d292 shell input roll 100 200'
os.system(roll)

tap_receive_pay = 'adb -s f868d292 shell input tap 25 900'
os.system(tap_receive_pay)

