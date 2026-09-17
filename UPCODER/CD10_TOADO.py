# Author: Nguyễn Ngọc Phú Tỷ (tynnp)
# GitHub: https://github.com/tynnpdhsp/cp-practice

s = input()
x = s.count('E') - s.count('W')
y = s.count('N') - s.count('S')
print("({0}; {1})".format(x, y))