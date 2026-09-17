# Author: Nguyễn Ngọc Phú Tỷ (tynnp)
# GitHub: https://github.com/tynnpdhsp/cp-practice

n = int(input())
res = n * n * (n - 1) * (n + 1) // 12
print(res % (1000000007))