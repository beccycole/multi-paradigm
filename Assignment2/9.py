# 9. Find the minimum element in an array of integers. You can carry some extra information through method arguments such as minimum value.

# define a function
def min_element(A, n):
    # if the length of array n is equal to 1 print the element in position zero - base case to stop the recursion
    if (n == 1): 
      return A[0]
    # else return either the last element in array or value returned by recursive call for n-1 elements
    min_val = min(A[n - 1], min_element(A, n - 1))
    return min_val

if __name__ == '__main__':

    # create an array
    A = [1, 7, 11, 2, -1, 8]

    # create a variable called n which is the length of array A
    n = len(A)

    # call the function passing in array A and length of array n
    ans = min_element(A, n)

    # print the output
    print(ans)