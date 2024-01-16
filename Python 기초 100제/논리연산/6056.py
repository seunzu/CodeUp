a, b = map(int, input().split())
a2 = bool(a)
b2 = bool(b)

print((a2 and (not b2)) or ((not a2) and b2))