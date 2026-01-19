import math

def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        m = min(arr)
        # Compute gcd of all (a_i - m) for a_i > m
        g = 0
        for v in arr:
            if v > m:
                g = math.gcd(g, v - m)
        if g == 0:
            # all equal already
            print(0)
        else:
            print(g)

if __name__ == "__main__":
    solve()