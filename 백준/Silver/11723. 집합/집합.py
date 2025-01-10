import sys
input = sys.stdin.readline

def operation_A(S_set, q):
    if q == 'all':
        S_set.clear()
        S_set.update(range(1, 21))
    else:
        S_set.clear()

def operation_B(S_set, q, n):
    if q == 'add':
        S_set.add(n)
    elif q == 'remove':
        S_set.discard(n)
    elif q == 'check':
        sys.stdout.write('1\n' if n in S_set else '0\n')
    elif q == 'toggle':
        if n in S_set:
            S_set.remove(n)
        else:
            S_set.add(n)

S = set()
for _ in range(int(input())):
    command = input().strip()
    if command == "all" or command == "empty":
        operation_A(S, command)
    else:
        q, n = command.split()
        operation_B(S, q, int(n))