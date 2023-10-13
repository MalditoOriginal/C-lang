# C Functions Library

This repository contains a collection of C functions that provide various utility and functionality for common tasks. Below, you'll find a list of the functions along with a brief description of each. Use this library to simplify your C programming tasks.

## Table of Contents

1. [Introduction](#introduction)
2. [List of Functions](#list-of-functions)
   - [alloc(int n)](#allocint-n)
   - [atof(char s[])](#atofchar-s)
   - [atoi(char *s)](#atoichar-s)
   - [bitcount(unsigned x)](#bitcountunsigned-x)
   - [copy_spec(void)](#copyspecvoid)
   - [copy(char *to, const char* from)](#copychar-to-const-char-from)
   - [eof(void)](#eofvoid)
   - [getbits(unsigned x, int p, int n)](#getbitsunsigned-x-int-p-int-n)
   - [getint(int *pn)](#getintint-pn)
   - [getch(void)](#getchvoid)
   - [getline_spec(void)](#getlinespecvoid)
   - [getline(char *s, int lim)](#getlinechar-s-int-lim)
   - [getop(char s[])](#getopchar-s)
   - [itoa(int n, char *s)](#itoaint-n-char-s)
   - [lower(int c)](#lowerint-c)
   - [numcmp(char *s1, char *s2)](#numcmpchar-s1-char-s2)
   - [p_swap(void* v[], int *px, int *py)](#pswapvoid-v-int-px-int-py)
   - [pop(void)](#popvoid)
   - [power_reverse(int base, int n)](#powerreverseint-base-int-n)
   - [printd(int n)](#printdint-n)
   - [push(double f)](#pushdouble-f)
   - [rand(void)](#randvoid)
   - [readlines(char* lineptr[], int maxlines)](#readlineschar-lineptr-int-maxlines)
   - [reverseStr(char *s)](#reversestrchar-s)
   - [squeeze(char *s, int c)](#squeezechar-s-int-c)
   - [strcat(char* s, char* t)](#strcatchar-s-chart)
   - [strcmp(char* s, char* t)](#strcmpchar-s-chart)
   - [strcpy(char *s, char *t)](#strcpychar-s-char-t)
   - [strindex(char *s, char *t)](#strindexchar-s-char-t)
   - [strlen(char *s)](#strlenchar-s)
   - [swap(int *v, int i, int j)](#swapint-v-int-i-int-j)
   - [trim(char *s)](#trimchar-s)
   - [ungetch(int c)](#ungetchint-c)
   - [writelines(char *lineptr[], int nlines)](#writelineschar-lineptr-int-nlines)

## Introduction

This C Functions Library offers a wide range of utility functions to assist with tasks like string manipulation, numerical operations, and I/O handling. Each function is designed to provide efficient and reusable code, making your C programming tasks more convenient.

## List of Functions

### `alloc(int n)`

Description: Allocates a block of memory.

### `atof(char s[])`

Description: Converts a string to a double-precision floating-point number.

### `atoi(char *s)`

Description: Converts a string to an integer.

### `bitcount(unsigned x)`

Description: Counts the number of set bits in an unsigned integer.

### `copy_spec(void)`

Description: Copies special characters.

### `copy(char *to, const char* from)`

Description: Copies a string from source to destination.

### `eof(void)`

Description: Represents the end of file number.

### `getbits(unsigned x, int p, int n)`

Description: Retrieves n bits from a given position.

### `getint(int *pn)`

Description: Reads an integer from input.

### `getch(void)`

Description: Retrieves a character from input.

### `getline_spec(void)`

Description: Reads a line of input into a string.

### `getline(char *s, int lim)`

Description: Reads a line of input into a string with a specified limit.

### `getop(char s[])`

Description: Retrieves the next operator or operand.

### `itoa(int n, char *s)`

Description: Converts an integer to a string.

### `lower(int c)`

Description: Converts a character to lowercase.

### `numcmp(char *s1, char *s2)`

Description: Compares two strings as numerical values.

### `p_swap(void* v[], int *px, int *py)`

Description: Swaps two pointers in an array.

### `pop(void)`

Description: Pops the top value from a stack.

### `power_reverse(int base, int n)`

Description: Calculates the power of a number in reverse order.

### `printd(int n)`

Description: Prints an integer.

### `push(double f)`

Description: Pushes a value onto a stack.

### `rand(void)`

Description: Generates a random number.

### `readlines(char* lineptr[], int maxlines)`

Description: Reads lines of input into an array.

### `reverseStr(char *s)`

Description: Reverses a string.

### `squeeze(char *s, int c)`

Description: Removes a character from a string.

### `strcat(char* s, char* t)`

Description: Concatenates two strings.

### `strcmp(char* s, char* t)`

Description: Compares two strings.

### `strcpy(char *s, char *t)`

Description: Copies a string to another.

### `strindex(char *s, char *t)`

Description: Finds the position of one string within another.

### `strlen(char *s)`

Description: Computes the length of a string.

### `swap(int *v, int i, int j)`

Description: Swaps two elements in an array.

### `trim(char *s)`

Description: Removes whitespace from the beginning and end of a string.

### `ungetch(int c)`

Description: Pushes a character back onto input.

### `writelines(char *lineptr[], int nlines)`

Description: Writes lines of output from an array.

Use these functions in your C programs to simplify common tasks and enhance the efficiency of your code.
