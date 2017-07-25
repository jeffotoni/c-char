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
	* Defining a pointer with char and assigning a value
	*
	*/
	char *stringx = "avocado";

	/**
	*
	* Defining a char pointer statically
	*
	*/
	char *fstring[0];

	/**
	*
	* Knowing the size of the char
	*
	*/
	int size = strlen(stringx) + 1;

	/**
	*
	* Our first example using pointer char
	*
	*/
	fstring[0] = (char*) malloc(size * sizeof(char));

	/**
	*
	* Copying content stringx to fstring
	*
	*/
	strcpy(fstring[0], stringx);
	
	/**
	*
	* Showing the result
	*
	*/
	printf("\nfstring: %s\n", fstring[0]);
}
```

# Compiling

```c
$ gcc char.c -o char

```
