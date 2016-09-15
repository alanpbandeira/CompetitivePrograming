import math

data = [float(x) for x in input().split(".")]

h = int(data[0] / 100)
ft = int((data[0] % 100) / 50)
tt = int(((data[0] % 100) % 50) / 20)
t = int((((data[0] % 100) % 50) % 20) / 10)
f = int(((((data[0] % 100) % 50) % 20) % 10) / 5)
tw = int((((((data[0] % 100) % 50) % 20) % 10) % 5) / 2)

data[1] = data[1] / 100 + int((((((data[0] % 100) % 50) % 20) % 10) % 5) % 2)

m_o = int(data[1] / 1.00)
m_ft = int((data[1] % 1.00) / 0.50)
m_tf = int(((data[1] % 1.00) % 0.50) / 0.25)
m_t = int((((data[1] % 1.00) % 0.50) % 0.25) / 0.10)
m_f = int(((((data[1] % 1.00) % 0.50) % 0.25) % 0.10) / 0.05)
#m_oo = math.ceil((((((data[1] % 1.00) % 0.50) % 0.25) % 10) % 0.05) / 0.01)
m_oo = int((((((data[1] % 1.00) % 0.50) % 0.25) % 10) % 0.05) / 0.01)
print (((((data[1] % 1.00) % 0.50) % 0.25) % 10))

print ("NOTAS:\n"
	"%i nota(s) de 100\n"% (h) +
	"%i nota(s) de 50\n" % (ft) +
	"%i nota(s) de 20\n" % (tt) +
	"%i nota(s) de 10\n" % (t) +
	"%i nota(s) de 5\n" % (f) +
	"%i nota(s) de 2\n" % (tw) + 
	"MOEDAS:\n" + 
	"%i moeda(s) de 1.00\n" % (m_o) + 
	"%i moeda(s) de 0.50\n" % (m_ft) +
	"%i moeda(s) de 0.25\n" % (m_tf) +
	"%i moeda(s) de 0.10\n" % (m_t) +
	"%i moeda(s) de 0.05\n" % (m_f) +
	"%i moeda(s) de 0.01" % (m_oo))