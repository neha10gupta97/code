str = input('Enter the string to be reversed: ');

str += '/n';

length = len(str);
outputString= "";
for i in range(0,length):
    outputString+=str[length-1-i];
    
print ('Reversed string: ', outputString);