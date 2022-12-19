#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Author: Raymond Omoraka
 * Desc: Header file containing the prototypes of all functions and the prototype of the function _putchar
 */

#include <stdlib.h>

int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
size_t _strlen(const char *str);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

#endif
