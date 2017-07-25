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
int main() {


	/**
	*
	* Defining a pointer with char and assigning a value
	*
	*/
	char *stringx = "Avocado is delicious.";

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

	
	/**
	*
	* Second example
	*
	*/
	char stringy[strlen(stringx)];


	/**
	*
	* Copying content stringx to fstring
	*
	*/
	strcpy(stringy, stringx);

	/**
	*
	* Showing the result stringy
	*
	*/
	printf("\nstringy: %s\n", stringy);


	// //*string5[0] = (char*) malloc(size);
	// //strcpy(string5[0], string1);
	// //string2[0] = (char **) malloc(sizeof(*string1));
	

	// string String = "jefferson name complete";
	// string2 String2 = {"jefferson something", "something there"};
	// string3 String3 = "Let's test a position.";

	// char **array = (char**) malloc((10+1)*sizeof(char*));
	// array[0] = "fluffy";
	// array[1] = "small";
	// array[2] = "bunny";
	// array[3] = 0;

	// //char **array = (char**) malloc((10+1)*sizeof(char*));

	// int y[2][3] = { {10,20,30}, {100,200,300} }; 
	
	// char x[2][3] = {"jef","ola"}; 
	
	// char* c[] = {"jef","ola","sel"}; 
	// char work[] = {"I work here"}; 
	// char work2[] = {'A','B','C'}; 
	// //char (*a3[])[] = { &"blah", &"hmm" };
	
	// char* strings[3];
	// strings[0] = "foo";
	// strings[1] = "bar";
	// strings[2] = "baz";
	// strings[3] = "jef";
	// strings[4] = "je2";
	

	// char a1[][14] = { "blah", "hmm" };
	// char* a2[] = { "blah", "hmm" };
	// char (*a3[])[] = { &"blah", &"hmm" };  // only since you brought up the syntax -

	// printf("%s :",a1[0]); // prints blah
	// printf("%s :",a2[0]); // prints blah
	// printf("%s :", *a3[0]); // prints blah
	
}
