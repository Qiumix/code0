Len = eval(input())
t = list(map(int, input().split()))


def tt(pre, L, Len):
    if Len == 1:
        return pre * 2 + pre ^ L[0]
    return pre * 2 * (3**(Len - 1)) + pre ^ tt(L[0] ^ pre, L[1:], Len - 1)


print(tt(t[0], t[1:], Len - 1) % (10**9 + 7), end="")
