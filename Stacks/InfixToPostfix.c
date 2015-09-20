/*
Infix   : a op b
Postfix : a b op
*/

/*
Infix to Postfix Algorithm :
1. Scan infix expression from left to right

2. If the scanned char is operand output it.

3. else
   3.1] If the precedence of scanned operator is greater than precedence
         of operator in the stack (or stack is empty) push it.
   3.2] Else, Pop the operator from the stack until the precedence of the
         scanned operator is less-equal to the precedence of the operator
         residing on the top of the stack. Push the scanned operator to the stack.

4. If the scanned character is an (, push it to the stack.

5. If the scanned character is an ), pop and output from the stack until
   an ( is encountered.

6. Repeat steps 2-6 until infix expression is scanned.

7. Pop and output from the stack until it is not empty.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int  main(void)
{

    return 0;
}
