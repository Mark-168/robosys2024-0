#!/usr/bin/python3
# SPDX-FileCopyrightText: 2024 Koara168 <itkmark7@gmail.com>

import  sys

ans = 0
for line in sys.stdin:
    try:
        ans += int(line)
    except:
        ans += float(line)

print(ans)
