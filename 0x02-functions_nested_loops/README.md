#  # C - Functions, nested loops

### General

-   What are nested loops and how to use them
-   What is a function and how do you use functions
-   What is the difference between a declaration and a definition of a function
-   What is a prototype
-   Scope of variables
-   What are the  `gcc`  flags  `-Wall -Werror -pedantic -Wextra`
-   What are header files and how to to use them with  `#include`


## Requirements

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your programs and functions will be compiled with  `gcc 4.8.4`  using the flags  `-Wall`  `-Werror`  `-Wextra`  `and -pedantic`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   You are not allowed to use the standard library. Any use of functions like  `printf`,  `puts`, etc is forbidden
-   You are allowed to use  [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You dont have to push  `_putchar.c`, we will use our file. If you do it wont be taken into account
-   In the following examples, the  `main.c`  files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own  `main.c`  files at compilation. Our  `main.c`  files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function  `_putchar`  should be included in your header file called  -   `holberton.h`
-   Dont forget to push your header file

## Proyect:


0. Write a program that prints `Holberton`, followed by a new line.
-   The program should return  `0`
1. Write a function that prints the alphabet, in lowercase, followed by a new line.

-   Prototype:  `void print_alphabet(void);`
-   You can only use  `_putchar`  twice in your code
2. Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

-   Prototype:  `void print_alphabet_x10(void);`
-   You can only use  `_putchar`  twice in your code
3. Write a function that checks for lowercase character.

-   Prototype:  `int _islower(int c);`
-   Returns  `1`  if  `c`  is lowercase
-   Returns  `0`  otherwise

4. Write a function that checks for alphabetic character.

-   Prototype:  `int _isalpha(int c);`
-   Returns  `1`  if  `c`  is a letter, lowercase or uppercase
-   Returns  `0`  otherwise
5. Write a function that prints the sign of a number.

-   Prototype:  `int print_sign(int n);`
-   Returns  `1`  and prints  `+`  if  `n`  is greater than zero
-   Returns  `0`  and prints  `0`  if  `n`  is zero
-   Returns  `-1`  and prints  `-`  if  `n`  is less than zero
6. Write a function that computes the absolute value of an integer.

-   Prototype:  `int _abs(int);`
7.  Write a function that prints the last digit of a number.

-   Prototype:  `int print_last_digit(int);`
-   Returns the value of the last digit
8.  Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

-   Prototype:  `void jack_bauer(void);`
-   You can listen to  [this soundtrack](https://intranet.hbtn.io/rltoken/CF-MAQgUTibmVPRfQF3VkQ "this soundtrack")  while coding :)
9.  Write a function that prints the 9 times table, starting with 0.

-   Prototype:  `void times_table(void);`
-   Format: see example.
10. Write a function that adds two integers and returns the result.

-   Prototype:  `int add(int, int);`
11. Write a function that prints all natural numbers from  `n`  to  `98`, followed by a new line.

-   Prototype:  `void print_to_98(int n);`
-   Numbers must be separated by a comma, followed by a space
-   Numbers should be printed in order
-   The first printed number should be the number passed to your function
-   The last printed number should be  `98`
-   You are allowed to use the standard library.
12.  Write a function that prints the  `n`  times table, starting with 0.

-   Prototype:  `void print_times_table(int n);`
-   If  `n`  is greater than  `15`  or less than  `0`  the function should not print anything
-   Format: see exampleWrite a function that prints the  `n`  times table, starting with 0.

-   Prototype:  `void print_times_table(int n);`
-   If  `n`  is greater than  `15`  or less than  `0`  the function should not print anything.
- 13. If we list all the natural numbers below  `10`  that are multiples of  `3`  or  `5`, we get  `3`,  `5`,  `6`  and  `9`. The sum of these multiples is  `23`. Write a program that computes and prints the sum of all the multiples of  `3`  or  `5`  below  `1024`  (excluded), followed by a new line.

-   You are allowed to use the standard library.
- 14. Write a program that prints the first 50 Fibonacci numbers, starting with  `1`  and  `2`, followed by a new line.

-   The numbers must be separated by comma, followed by a space  `,`
-   You are allowed to use the standard library.
- 15. Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with  `1`  and  `2`, the first 10 terms will be:  `1, 2, 3, 5, 8, 13, 21, 34, 55, 89`. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.

-   You are allowed to use the standard library.
- 16. Write a program that finds and prints the first 98 Fibonacci numbers, starting with  `1`  and  `2`, followed by a new line.

-   The numbers should be separated by comma, followed by a space  `,`
-   You are allowed to use the standard library
-   You are not allowed to use any other library (You cant use  `GMP`  etc)
-   You are not allowed to use  `long long`,  `malloc`, pointers, arrays/tables, or structures
-   You are not allowed to hard code any Fibonacci number (except for  `1`  and  `2`).
