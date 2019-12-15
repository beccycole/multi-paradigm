# 10. Verify the parentheses Given a string, return true if it is a nesting of zero or more pairs of parenthesis, like “(())” or “((()))”.

# define the function, string n with (), i start at 0, counter start at 0
def check_balance(n, i=0, counter=0):
    # if there is nothing in the string it is balanced so return true
    if i == len(n):
        return counter == 0
    # if the counter is less than 0, not balanced return false
    if counter < 0:
        return False
    # starting at positon 0 as per i's value, if this is "("
    if n[i] == "(":
        # call the function on the next position, increase i and increase the counter
        return  check_balance(n, i + 1, counter + 1)
    # else if the positon 0 as per i's value, if this is ")"
    elif n[i] == ")":
        # call the function on the next position, increase i and reduce the counter
        return  check_balance(n, i + 1, counter - 1)
    # return the boolean answer whether the string is balanced or not
    return check_balance(n, i + 1, counter)


if __name__ == '__main__':

    # create a string
    a = "(((())"

    # call the function passing in string a
    ans = check_balance(a)

    # print the output
    print(ans)

    # create a string
    b = "(())"

    # call the function passing in string a
    ans2 = check_balance(b)

    # print the output
    print(ans2)