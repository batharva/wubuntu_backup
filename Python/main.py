t = int(input())
for _ in range(t):
    A, C = map(int, input().split())
    if (A + C) % 2 == 0:
        B = (A + C) // 2
        print(B)
    else:
        print(-1)
