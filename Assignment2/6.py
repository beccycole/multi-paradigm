# 6. Find index in array for item - Given an array, and an element to search for return the index of the element in the array or -1 if the element is not present in the array.

# define a function
def find_index(L, v):
    # if element is not in array return -1
    if v not in L: 
      return -1
    # if a match was found at zero poistion return zero, otherwise iterate until a match is found.  
    # Once a match is found return the postion. 
    return 0 if L[0] == v else 1 + find_index(L[1:], v)

if __name__ == '__main__':
  
  # array to test
  a = [1, 7, 9, 11, 15]

  # number to find
  b = 15

  # call the function passing in array a and number to find
  ans = find_index(a, b)

  # print the output
  print(ans)