#include <stdio.h>

int main() {
    int num1, num2, temp1, temp2, hcf, lcm;

    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);


    temp1 = num1;
    temp2 = num2;

    
    while (num2 != 0) {
        int remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    hcf = num1; 

    lcm = (temp1 * temp2) / hcf;

    
    printf("HCF is: %d\n", hcf);
    printf("LCM is: %d\n", lcm);

    return 0;
}

