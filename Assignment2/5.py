# 5. Replace a given character with ’*’ - Given a string, and a character to replace, return a string where each occurance of the character is replaced with ’*’.

# create a variable new_string
new_string = ''

# define a function
def replace_char(my_string, old_char, new_char):
  global new_string
  # if my_string has no characters return newString
  if my_string == '':
      return new_string
  # else if my_string equal to old_char
  elif my_string[0] == old_char:
      # then add new_char to new_string
      new_string += new_char
  # else add my_string[0] to new_string
  else:
      new_string += my_string[0]

  # slice the first character off myString
  my_string = my_string[1:]

  # call the function replace_char and pass in my_string (the string of text), old_char (character wanting to replace)
  # and new_char (the replacing character)
  return replace_char(my_string, old_char, new_char)

if __name__ == '__main__':
  
  # create a string
  string = 'Rebecca is going to France'

  # call the recursive function passing in the string
  ans = replace_char(string, 'e', '*')

  # print the output
  print(ans)