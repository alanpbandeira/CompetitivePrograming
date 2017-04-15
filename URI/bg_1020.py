data = int(input())

y = int(data / 365)
m = int((data % 365) / 30)
d = int((data % 365) % 30)

print ("%i ano(s)\n%i mes(es)\n%i dia(s)" % (y, m, d))