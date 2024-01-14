# Integer Overflow

to get this flag you need to insert a correct input, if you insert the correct input the code will return a shell for you,but its not possible with conventional form because the program has a x - 1 operation and a verify.

basically, the program verify the number that you insert is less than 8 because the program just has eight users,if it's less than eight the function return this number and if isn't the program just exit.

after the function return the number, the code decrease one and pass as an argument to the user list,but as you can't insert a number higher than seven, you couldn't get the admin user and spawn a shell.

i put a negative number to test and what i got was a segmentation fault, so i needed to understand more better about two complements because i forgot the most of this. After a some read about numbers and twos complements i understand.

i add a second code with some printf to show the numbers before and after the "operation", if you type -1 on the insert, the code will return 65535 because the code got your input as an signed int and saves after as an UNSIGNED int, 

so if you insert -65529, the code will save this as an int and change to unsigned int after and when the number is change to unsigned he becomes to eight that means the admin user ;)
