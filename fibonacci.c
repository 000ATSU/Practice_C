static int fibonacci(int n) {
  if((n==0) || (n==1)) {
    return n;
  }
  return fibonacci(n-2) + fibonacci(n-1);
}

int main(int args, char* argv[]) {
  int n = 10;
  int fibo;

  fibo = fibonacci(n);

  printf("fibonacci(%d) = %d\n", n, fibo);

  return 0;
}