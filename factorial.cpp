#include <stdio.h>

int main ()
{
   int value;
   int fact =1;
   printf(" Enter the value : ");
   scanf ("%d", &value);

   for (int i=1; i<=value; i++)
    {
	    fact = fact * i;
    }
    printf("%d", fact);

    return 0;
}
