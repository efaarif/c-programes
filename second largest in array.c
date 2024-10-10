#include<stdio.h>
int main()
{
	int n;
	int temp;
	int i;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements of array : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
     int largest = arr[0];
    int sec_largest = -1;
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            sec_largest = largest; 
            largest = arr[i]; 
        } else if (arr[i] > sec_largest && arr[i] < largest) {
            sec_largest = arr[i]; 
        }
    }
    if (sec_largest == -1) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element is: %d\n", sec_largest);
    }
	
    
	return 0;
}
