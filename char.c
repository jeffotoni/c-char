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


	// char *string5[0];

	// int size = strlen(string1) + 1;
	// //char string2[strlen(string1)];

	// string5[0] = (char*) malloc(size * sizeof(char));
	// //string5[1] = (char*) malloc(size * sizeof(char));
	// strcpy(string5, string1);
	// printf("\nstring5: %s", string5);

	// string5[1] = (char*) malloc(size * sizeof(char));
	// strcpy(string5, string1);
	// printf("\nstring5: %s", string5);	

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
