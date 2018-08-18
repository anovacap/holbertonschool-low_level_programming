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
 * reset_to_98 - takes pointer and updates it to 98
 * swap_int - swaps the values of two integers
 * _strlen - returns the length of a string
 * _puts - prints a string, followed by a new line, to stdout
 * print_rev - prints a string, in reverse
 * rev_string - function that reverses a string
 * puts2 - prints one char out of 2 of a string
 * puts_half - prints half of a string
 * print_array - prints n elements of an array of integers
 * _strcpy - copies the string pointed to src to the buffer pointed to dest
 * _strcat - concatenates two strings
 * _strncat - concatenates two strings
 * _strncpy - copies a string
 * _strcmp - compares two strings
 * reverse_array - reverses the content of an array of integers
 * string_toupper - lowercase letters of a string to uppercase
 * cap_string - capitalizes all words of a string
 * leet - encodes a string into 1337 LEET
 * rot13 - encodes a string using rot13
 * _memset - fills memory with a constant byte
 * _memcpy - copies memory area
 * _strchr - locates a character in a string
 * _strspn - gets the length of a prefix substring
 * _strpbrk - searches a string for any of a set of bytes
 * _strstr - locates a substring
 * print_chessboard - prints the chessboard
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * set_string - sets the value of a pointer to a char
 * _puts_recursion -
 * _print_rev_recursion -
 * _strlen_recursion -
 * factorial -
 * _pow_recursion -
 * _sqrt_recursion -
 * is_prime_number -
 * is_palindrome -
 * create_array - creates array of chars, initializes it with a specific char
 * _strdup - returns a pointer to a newly allocated space in memory, which
 contains a copy of the string given as a parameter.
 * str_concat - concatenates two strings
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * free_grid - frees a 2 dimensional grid previously created
 * argstostr - concatenates all the arguments
 * malloc_checked - allocates memory using malloc
 * string_nconcat - concatenates two strings
 * _calloc - allocates memory for an array, using malloc
 * array_range - creates an array of integers
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
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
