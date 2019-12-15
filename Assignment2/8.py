# 8. Print an array - Given an array of integers prints all the elements one per line. This is a little bit diﬀerent as there is no need for a ’return’ statement just to print and recurse.

# define a function
def print_array(n):

# if the length of array n is equal to 1 print the element in position zero - base case to stop the recursion
    if len(n) == 1:
        print(n[0])

# else print the first element of the array (position zero), continue to call the function from position 1 to end
    else:
        print(n[0])
        print_array(n[1:])

if __name__ == '__main__':

    # create an array
    a = (7, 9, 11, 13, 15)

    # call the function passing in array a
    ans = print_array(a) 

    # print the output
    print(ans)