#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
/**
 * _putchar - writes the character c to stdout
 * print_alphabet - prints the lowercase alphabet
 * print_alphabet_x10 - prints lowercase alphabet 10x
 * _islower - checks if character is lowercase
 * _isalpha - checks is charcter is alphabetic
 * print_sign - checks if number is + - 0
 * _abs - computes the absolute value of an integer
 * print_last_digit - prints the last digit of a number
 * jack_bauer - prints minutes of day 00:00-24:59
 * times_table - prints 9 times tables
 * add - adds 2 numbers together
 * print_to_98 - prints numbers from n to 98
 * print_times_table - prints n times table, start at 0
 * _isupper - checks for uppercase character
 * _isdigit - checks for a digit (0 through 9)
 * mul - multiplies two integers
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * print_most_numbers - prints from 0 to 9, no 2 0r 4 followed by a new line
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * print_line - draws a straight line in the terminal
 * print_diagonal - draws a diagonal line on the terminal
 * print_square - prints a square, followed by a new line
 * print_triangle - prints a triangle, followed by a new line
 */
void  _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int  _islower(int c);
int  _isalpha(int c);
int  print_sign(int n);
int  _abs(int i);
int  print_last_digit(int i);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_to_98(int n);
void print_times_table(int n);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
#endif
