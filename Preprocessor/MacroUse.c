#include<stdio.h>

#define print_int(x) printf("Int " #x "= %d\n", x)
#define print_char(x) printf("Char " #x "= %c\n", x)
#define print_string(x) printf("Variable " #x "= %s\n", x)


int main()
{

 printf("Macro Use for variable name print.\n\n");

    int a = 12 ;
    char letter = 'S' ;
    char phrase[] = "Samsung!!" ;

    print_int(a) ;
    print_char(letter) ;
    print_string(phrase) ;


 return 0;
}
