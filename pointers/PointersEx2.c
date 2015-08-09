int main()
{
  int *A[10], B[10][10];
  int C[] = {12, 11, 13, 14};

  /* No problem with below statement as A[2] is a pointer
     and we are assigning a value to pointer */
  A[2] = C;

  /* No problem with below statement also as array style indexing
      can
       be done with pointers*/
  A[2][3] = 15;

  /* Simp
  le assignment to an element of a 2D array*/
  B[2][3]  = 15;

//  B[2] = C;

  printf("%d %d", A[2][0], A[2][3]);
  getchar();
}


