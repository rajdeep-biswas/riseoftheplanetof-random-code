from math import sqrt

n = int(input("enter number: "))

f = 1
for i in range(2, int(sqrt(n))):
	if n % i == 0:
		f = 0
		break

if f == 1:
	print("Prime")
else:
	print("Not Prime")
