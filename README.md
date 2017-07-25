# c-char
Small examples to understand how char type works in C

```c
/**
*
* @author		@jeffotoni
* @copyright	Copyright (c) 2017
* 
* Different ways to declare a string using char
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
*
* Defining typedef of type char as vector
*
*/
typedef char string[];

/**
*
* Defining typedef of char type as vector pointer
*
*/
typedef char *string2[];

/**
*
* Defining typedef of type char as pointer
*
*/
typedef char *string3;


/**
*
* Main function
*
*/
int main(){


	/**
	*
	* Defining a char pointer statically
	*
	*/
	char *string1 = "avocado";

	/**
	*
	* Our first example using pointer char
	*
	*/
	string5[0] = (char*) malloc(size * sizeof(char));
```

# Compiling

```c
$ gcc char.c -o char

```
