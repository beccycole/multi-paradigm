# 3. Remove all even numbers - Given an array of numbers return an array with all the even numbers removed.

# define a function
def remove_even(n):
  # if no numbers are passed in return an empty list
  if not n: 
    return []
  # if when the number in the list is divided by 2 there is a remainder of 1 pop on the 
  # stack and call the function again for each position in the list until the end
  if n[0] % 2 == 1:
    return [n[0]] + remove_even(n[1:])

  return remove_even(n[1:])


if __name__ == '__main__':

  # create an array
  a = [1, 2, 3, 4, 5, 6, 7, 8]

  # call the recursive function on the array a
  ans = remove_even(a)

  # print the output
  print(ans)