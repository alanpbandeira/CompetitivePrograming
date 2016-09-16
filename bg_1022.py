n = [int(x) for x in input().split()]


if n[1] > n[2] and n[3] > n[0] and (n[2] + n[3]) > (n[0] + n[1]) and n[2] >= 0 and n[3] >= 0 and n[0] % 2 is 0:
	print ("Valores aceitos")
else:
	print ("Valores nao aceitos")