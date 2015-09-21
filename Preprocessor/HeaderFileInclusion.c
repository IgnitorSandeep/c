// File Inclusion
// **************
// 
// Including Standard Library
#include <stdio.h>

// File Inclusion is done at compile time
#include "headerfile.h"



// Macro Substitution
// ******************
// 
// For Macro Substitution
#define MAX 10

// Macro Substitution for expression 
// Here #expr will be replaced with double quoted
#define X 6
#define Y 3
#define dprint(expr) printf(#expr " = %d\n",expr)

// Macro to combine two string
// front and back must be in such a way that it generates a valid processing token l(l+d)*
#define paste(front,back) front##back




// Conditional Inclusion
// *********************
// 
#define HDR 5
#if !defined(HDR)
#define HDR 10
#endif 

#if !defined(IITB)
#define IITB 12
#endif

// Changin the value of HDR if it is defined
#ifdef HDR
#define HDR -1
#endif

// Assigning value to IISC if it's not defined
#ifndef IISC
#define IISC 2
#endif



int main(void)
{       
   	// Checking File Inclusion
	printf("MAX = %d\n",MAX);
	printf("a = %d, b = %d\n",a,b);
	

	// Checking Macro Substitution
	dprint(X/Y);
        int paste(Sandeep_,Singh) = 10;
	printf("Pasted Identifier is  %d.\n", paste(Sandeep_,Singh));


	// Checking Conditional Inclusion
        printf("HDR = %d \n",HDR);
	printf("IITB = %d \n",IITB);
	printf("IISC = %d \n",IISC);


	return 0;
}

