//This is a code to print to he sum of of n natural number
#include <stdio.h>

int main() {
	int n,sum;
//	sum = (n*(n+1))/2;
	printf("Enter the value of n : \n");
    scanf("%d",&n);
    printf(" The sum of first n number is : %d",(n*(n+1)/2));

	return 0;
}