#include <stdio.h>

int main() {
    int n, i, prime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n); 
    for (i = 2; i * i <= n; i++) 
	if (n % i == 0) 
    printf("%d is not prime number.\n", n);
    else
    printf(" %d is prime number.\n", n);
    return 0;
}

