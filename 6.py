# Write a program that asks the user for a number n and gives them the possibility to choose between computing the sum and computing the product of 1,....,n.

n = input("Enter a number: ")
kind = raw_input("Do you want to do sum or product? ")

sum = 0
product = 1

if (kind == "sum"):
    for i in range(1, n+1):
	sum = sum + i 
    print("The sum of 1 to %d, was %d" % (n, sum))
elif (kind == "product"):
    for i in range(1, n+1):
	product = product * i
    print("The product of 1 to %d, was %d" % (n, product))
else:
    print("I did not understand your request")