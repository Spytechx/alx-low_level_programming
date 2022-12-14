#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints input using standard library
 *
 * Description: The Program description
 * void print_alphabet_x10(void) prints 10 times the alphabet in lowercase
 * int _islower(int c) - checks for lowercase
 * int _isalpha(int c) - checks alphabetic character
 * int print_sign (int n) - prints the sign of a number
 * int _abs(int x) - computes the absolute value of an integer
 * int print_last_digit(int x) - prints last didgit of a number
 * void jack_bauer(void) - function prints every minute of the day of jack Bauer
 *void times_table(void) - function prints 9 times table from 0
 * int add(int a, int b) - writes function that adds two integers and returns result
 * void print_to_98(int n) - print natural numbers from n - 98
 * File : main.h
 *
 * Author: Daniel Nwankwo (Ghost X)
 *
 * Return: 0 (success)
 */

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int x);
int print_last_digit(int x);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_to_98(int n);

#endif
