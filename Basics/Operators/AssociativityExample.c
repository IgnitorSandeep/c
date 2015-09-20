// Associativity is not used in the below program. Output
// is compiler dependent.
int x = 0;

int f1() {
  x = 5;
  printf("%d\n",x);
  return x;
}

int f2() {
  x = 10;
  printf("%d\n",x);
  return x;
}

int main() {
  int p = f1() + f2();
  printf("%d\n", p);
  return 0;
}
