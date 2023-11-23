# #! python3
# # pw.py - An insecure password locker program.
# PASSWORDS = {'email': 'F7minlBDDuvMJuxESSKHFhTxFtjVB6',
#  'blog': 'VmALvQyKAxiVH5G8v01if1MLZF3sdt',
#  'luggage': '12345'}
# import sys, pyperclip
# if len(sys.argv) < 2:
#  print('Usage: py pw.py [account] - copy account password')
#  sys.exit()
# account = sys.argv[1] # first command line arg is the account name
# if account in PASSWORDS:
#  pyperclip.copy(PASSWORDS[account])
#  print('Password for ' + account + ' copied to clipboard.')
# else:
#  print('There is no account named ' + account)
password = {'facebook':'facebook123','twitter':'twitter123','reddit':'reddit123'}
import sys,pyperclip
if len(sys.argv)<2:
    print('two arguments required : scripting name followed by account name ')
    sys.exit()
account = sys.argv[1]
if account in password:
    pyperclip.copy(password[account])
    print('password for the'+account+' copied to clipboard')
else:
    print('there is no account named '+account)