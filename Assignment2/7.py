# 7. Sum of Digits - Given a whole, number such as 23, return the sum of the digits in the number i.e. 2 + 3 = 5. For this would be useful to convert the number to a string then break it apart into digits.

# define a function
def get_sum(n):
    # if n is equal to zero return 0 - base case to stop the recursion
    if n == 0: 
        return 0
    # recursion to keep the sum of n
    return (n % 10 + get_sum(int(n / 10))) 
  
if __name__ == '__main__':

  # define a variable a which is the number to sum
  a = 1789

  # call the function passing in variable a
  ans = get_sum(a) 

  # print the output
  print(ans)