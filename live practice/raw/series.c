#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int recursion (int p);
  if(n==1)
  return a;
   if(n==2)
  return b;
   if(n==3)
  return c;
  else
  return 0;


  
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
int fibonacci(int x)
{
    if(x>2)
    return fibonacci(x-2) + fibonacci(x-1);
    else if(x==1||x==2)
    return x-1;
    else
    return -1;

}