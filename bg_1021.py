import math


data = float(input()) * 100

h = int(data / 10000)
ft = int((data % 10000) / 5000)
tt = int(((data % 10000) % 5000) / 2000)
t = int((((data % 10000) % 5000) % 2000) / 1000)
f = int(((((data % 10000) % 5000) % 2000) % 1000) / 500)
tw = int((((((data % 10000) % 5000) % 2000) % 1000) % 500) / 200)

m_o = int(((((((data % 10000) % 5000) % 2000) % 1000) % 500) % 200) / 100)
m_ft = int((((((((data % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) / 50)
m_tf = int(((((((((data % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) / 25)
m_t = int((((((((((data % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) % 25) / 10)
m_f = int(((((((((((data % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) % 25) % 10) / 5)
m_oo = int((((((((((((data % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) % 25) % 10) % 5) / 1)


print ("NOTAS:\n"
	"%i nota(s) de R$ 100.00\n"% (h) +
	"%i nota(s) de R$ 50.00\n" % (ft) +
	"%i nota(s) de R$ 20.00\n" % (tt) +
	"%i nota(s) de R$ 10.00\n" % (t) +
	"%i nota(s) de R$ 5.00\n" % (f) +
	"%i nota(s) de R$ 2.00\n" % (tw) + 
	"MOEDAS:\n" + 
	"%i moeda(s) de R$ 1.00\n" % (m_o) + 
	"%i moeda(s) de R$ 0.50\n" % (m_ft) +
	"%i moeda(s) de R$ 0.25\n" % (m_tf) +
	"%i moeda(s) de R$ 0.10\n" % (m_t) +
	"%i moeda(s) de R$ 0.05\n" % (m_f) +
	"%i moeda(s) de R$ 0.01" % (m_oo))