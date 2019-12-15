# 3. Remove all odd numbers - Given an array of numbers return an array with all the odd numbers removed.

# define a function
def remove_odd(n):
  # if no numbers are passed in return an empty list - base case to stop the recursion
  if not n: 
    return []
  # if when the number in the list is divided by 2 and has no remainder pop on the 
  # stack and call the function again for each position in the list until the end
  if n[0] % 2 == 0:
    return [n[0]] + remove_odd(n[1:])

  return remove_odd(n[1:])


if __name__ == '__main__':

  # create an array
  a = [1, 2, 3, 4, 5, 6, 7, 8]

  # call the recursive function on the array a
  ans = remove_odd(a)

  # print the output
  print(ans)