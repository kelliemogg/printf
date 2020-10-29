#_printf 
##SYNTAX
###(int _printf(const char *format, ...) 

##Motivation
###This function is meant to take in at least one argument using the stdin, keyboard, and based on what other arguments are passed in, the first argument will be printed to the stdout. The output will be dependent on the arguments being passed in at the time it is called, as well as any specifiers being passed in as well. The function will return the amount of character bytes that get printed to the standard output. If error occurs, the function will return (-1).

##Build status: 
Our _printf function is currently a work in progress. We have successfully developed a program that will print single characters and strings that are passed into it using conversion specifiers (%c and %s). Our _printf will also give a return value that tells us the space to be used to output what is passed to our program. 

These simple features represent the foundation of a well-working printing program, but theres more to come! Currently, we are developing more versatile functionality; soon, any number of elements will be able to be successfully printed using our program. The next level of features to be released involve printing: integers, binary numbers, and hexadecimals. The update of features following this one will include even more specific conversion specifiers and special flags to account for all sorts of data. 

##Tests
The following test file when compiled with our program will show the successful functionality of our program compared to the standard printf function.
 
int main(void)
{
        int len;
        int len2;
 
        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        _printf("Character:[%c]\n", 'H'));
        printf("Character:[%c]\n", 'H'));
        _printf("String:[%s]\n", "I am a string !"));
        printf("String:[%s]\n", "I am a string !"));
}

##Code Example
printf$cat _printf_examples.c
#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

int main(char c)
{
        char *str = "i there!";

        c = 'H';

        _printf("%c%s\n", c, str);
        return(0);
}
printf$./example
Hi there!
printf$

Resources 
####https://www.man7.org/linux/man-pages/man2/write.2.html
####https://linux.die.net/man/3/va_copy
####https://www.cypress.com/file/54761/download
####SAMS Teach Yourself C Tony Zhang
####https://github.com/holbertonschool/Betty/blob/master/betty-style.pl
####https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl
####https://www.geeksforgeeks.org/print-long-int-number-c-using-putchar/
####http://codewiki.wikidot.com/c:system-calls:write#:~:text=Function%20Definition&text=The%20number%20of%20bytes%20to,system%20call%20returned%20an%20error.
####https://medium.com/@meakaakka/a-beginners-guide-to-writing-a-kickass-readme-7ac01da88a