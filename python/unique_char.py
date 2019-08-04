
def isUnique(str):
    dic ={};
    for char in str:
        if char in dic:
            return False;
        dic[char]= True;
    return True;

str = input('enter the string: ');

if isUnique(str):
     print('input string has unique characters') 
else:
     print('noooo! this string has duplicates');




