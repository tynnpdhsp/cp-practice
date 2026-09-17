# Author: Nguyễn Ngọc Phú Tỷ (tynnp)
# GitHub: https://github.com/tynnpdhsp/cp-practice

def pow(n, x):
    res = 1
    for i in range(x):
        res = res * n
    return res
    
x = int(input())
print("f(x)=", pow(x, 10) + pow(x, 5) + 1)