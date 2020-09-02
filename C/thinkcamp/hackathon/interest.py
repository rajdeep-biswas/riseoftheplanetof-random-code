def DisplayMenu():
	print("1. Simple interest\n2. Compound interest")

def ChoiceExec():
	global ch
	ch=int(input("Enter choice of operation: "))
	if ch!=1 and ch!=2:
		print("Wrong choice!")
		exit()

def InputNumbers():
	global a,p,r,t,n,i
	if ch==1:
		p=int(input("Principal: "))
		r=int(input("Rate: "))
		t=int(input("Time: "))
	elif ch==2:
		p=int(input("Principal: "))
		r=int(input("Rate: "))/100
		t=int(input("Time: "))
		n=int(input("Number of compounding periods per year: "))

def main():
	DisplayMenu()
	ChoiceExec()
	InputNumbers()
	if ch==1:
		i=(p*r*t)/100
		a=p+i
	elif ch==2:
		a=p*((1+(r/n))**(n*t))
		i=a-p
	print("Interest = ",i)
	print("Amount = ",a)

main()