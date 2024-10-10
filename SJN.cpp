#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int process[n], burstTime[n], waitingTime[n], turnaroundTime[n];

    for (i = 0; i < n; i++) {
        process[i] = i + 1;
        printf("Enter burst time for process %d: ", i + 1);
        scanf("%d", &burstTime[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (burstTime[i] > burstTime[j]) {
                
                temp = burstTime[i];
                burstTime[i] = burstTime[j];
                burstTime[j] = temp;

                temp = process[i];
                process[i] = process[j];
                process[j] = temp;
            }
        }
    }

    waitingTime[0] = 0;
    for (i = 1; i < n; i++) {
        waitingTime[i] = waitingTime[i - 1] + burstTime[i - 1];
    }

    for (i = 0; i < n; i++) {
        turnaroundTime[i] = waitingTime[i] + burstTime[i];
    }

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", process[i], burstTime[i], waitingTime[i], turnaroundTime[i]);
    }

    return 0;
}

