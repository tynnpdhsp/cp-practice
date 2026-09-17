# Author: Nguyễn Ngọc Phú Tỷ (tynnp)
# GitHub: https://github.com/tynnpdhsp/cp-practice

n = int(input())
a, b = 0, 1

for i in range(n):
    b, a = a + b, b
    
print(a)