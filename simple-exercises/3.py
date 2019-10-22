# Modify the previous program such that only the users Alice and Bob are greeted by their names

name = input("What is your name?")

if (name =="Bob") or (name=="Alice"):
	print("Hello %s, How are you?" %(name))
else: 
	print("Hello peasant!")