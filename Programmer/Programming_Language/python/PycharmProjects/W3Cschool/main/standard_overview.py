import glob
import sys
import re
import math
from urllib.request import urlopen
from datetime import date
import zlib

result = glob.glob('*.py')
print(result)

print(sys.argv)

print(math.cos(math.pi / 4))

# for line in urlopen('http://tycho.usno.navy.mil/cgi-bin/timer.pl'):
#     line = line.decode('utf-8')  # Decoding the binary data to text.
#     if 'EST' in line or 'EDT' in line:  # look for Eastern Time
#         print(line)

print(date.today())

s = b'witch which has which witches wrist watch'
print(len(s))
t = zlib.compress(s)
print(len(t))
print(s)
print(zlib.decompress(t))
print(zlib.crc32(s))