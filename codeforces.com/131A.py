word = input()
char = word[0]
if len(word) > 1:
    if word[1:].isupper() or (word[1:].isupper() and not char.isupper()):
       print(word.swapcase())

    else:
        print(word)
else:
     print('{}'.format(str.swapcase(char)))
