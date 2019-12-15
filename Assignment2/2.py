# 2. Product of an array - Given an array of numbers return it’s product (all the numbers multiplied together).

# define a function
def product(n):
    # if length of the array is equal to 1 return that number - base case to stop the recursion
    if len(n) == 1:
        return n[0]
    # else return the first element in the array multiplied by the element in position 1 in the array - repeat 
    # the call to the function until the end of the array
    else:
        return n[0] * product(n[1:])

if __name__ == '__main__':

  # create an array
  a = [1, 2, 3, 4]

  # call the recursive function on the array a
  ans = product(a)

  # print the output
  print(ans)