# C Debugging

Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as `gdb` or built-in tools that IDEs have. However, its important to understand the concepts and processes of debugging manually.

### General
-   What is debugging
-   What are some methods of debugging manually
-   How to read the error messages


## Requirements

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your programs and functions will be compiled with  `gcc 4.8.4`  using the flags  `-Wall`  `-Werror`  `-Wextra`  and  `-pedantic`
-   All your files should end with a new line
-   Your code should use the  `Betty`  style. It will be checked using  `betty-style.pl`  and  `betty-doc.pl`
-   A README.md file at the root of the  `holbertonschool-low_level_programming`  repo, containing a description of the repository
-   A README.md file, at the root of the folder of this project (i.e.  `0x03-debugging`), describing what this project is about.

## Proyect:


0. Based on the  `main.c`  file above, create a file named  `0-main.c`. This file must test that the function  `positive_or_negative()`  gives the correct output when given a case of  `0`.

You are not coding the solution / function, youre just testing it! However, you can adapt your function from  [0x01. C - Variables, if, else, while - Task #0](https://intranet.hbtn.io/rltoken/oksQRX9MFUF8saGnlIKqYw "0x01. C - Variables, if, else, while - Task #0")  to compile with this main file to test locally.

-   You only need to upload  `0-main.c`  and  `holberton.h`  for this task. We will provide our own  `positive_or_negative()`  function.
-   You are not allowed to add or remove lines of code, you may change only  **one**  line in this task.
1. Copy this main file. Comment out (dont delete it!) the part of the code that is causing the output to go into an infinite loop.

-   Dont add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
-   You do not have to compile with  `-Wall -Werror -Wextra -pedantic`  for this task.
2. Thats definitely not right.

Fix the code in  `2-largest_number.c`  so that it correctly prints out the largest of three numbers, no matter the case.

-   Line count will not be checked for this task.
3. That doesnt seem right.

Fix the  `print_remaining_days()`  function so that the output works correctly for  _all_  dates and  _all_  leap years.

-   Line count will not be checked for this task.
-   You can assume that all test cases have valid months (i.e. the value of  `month`  will never be less than  `1`  or greater than  `12`) and valid days (i.e. the value of  `day`  will never be less than  `1`  or greater than  `31`).
-   You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).
