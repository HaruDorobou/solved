from decimal import Decimal, getcontext

getcontext().prec = 1000

a, b = map(int, input().split())
a, b = Decimal(a), Decimal(b)

print(int(a // b))
print(a % b)