#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[65]; 
    long long decimal = 0; 
    int length, i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    length = strlen(binary); 

    
    for (i = 0; i < length; i++) {
        if (binary[length - 1 - i] == '1') {
            decimal += pow(2, i); 
        }
    }

    printf("Decimal equivalent: %lld\n", decimal);
    return 0;
}

