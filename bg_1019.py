total_s = int(input())

h = int(total_s / 3600)
m = int((total_s % 3600) / 60)
s = (total_s % 3600) % 60

print("%i:%i:%i" % (h, m, s))