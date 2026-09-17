# Author: Nguyễn Ngọc Phú Tỷ (tynnp)
# GitHub: https://github.com/tynnpdhsp/cp-practice

T = float(input())

for y in range(1, 11):
    T *= 1.05
    print("{0:.2f}".format(T))
