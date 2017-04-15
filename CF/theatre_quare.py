a = [int(x) for x in input().split()]

if a[0] % a[2] == 0:
    sa = int(a[0] / a[2])
else:
    sa = int(a[0] / a[2]) + 1

if a[1] % a[2] == 0:
    sb = int(a[1] / a[2])
else:
    sb = int(a[1] / a[2]) + 1

print(sa * sb)
