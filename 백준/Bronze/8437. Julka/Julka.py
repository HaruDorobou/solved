import sys
input = sys.stdin.readline
print = sys.stdout.write

total = int(sys.stdin.readline().strip())
diff = int(sys.stdin.readline().strip())

x = (total + diff) // 2 
y = total - x

sys.stdout.write(str(x) + '\n')
sys.stdout.write(str(y))