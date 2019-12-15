# 1. Sum of an array - Given an array of numbers return it’s sum (all the numbers added together).

# define a function
def sum(n):
    # if length of the array is equal to 1 number return that number - base case to stop the recursion
    if len(n)==1:
        return n[0]
    # else return the first element in the array plus call the function on the rest of the array
    else:
        return n[0] + sum(n[1:])

if __name__ == '__main__':

  # create an array
  a = [3, 4, 9, 5, 7]

  # call the recursive function on the array a
  ans = sum(a)

  # print the output
  print(ans)