# Author: Nguyễn Ngọc Phú Tỷ (tynnp)
# GitHub: https://github.com/tynnpdhsp/cp-practice

s = input()
x = ''.join(c if c.isdigit() else ' ' for c in s)
num = map(int, x.split())
ans = sum(num)
print(ans)