#include <stdio.h>

int main() {
    int n, i;
    int burst_time[10], wait_time[10], turn_around_time[10];
    int total_wait_time = 0, total_turn_around_time = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter burst time for each process:\n");
    for(i = 0; i < n; i++) {
        printf("Process %d: ", i+1);
        scanf("%d", &burst_time[i]);
    }

    wait_time[0] = 0;

    for(i = 1; i < n; i++) {
        wait_time[i] = wait_time[i-1] + burst_time[i-1];
    }

    for(i = 0; i < n; i++) {
        turn_around_time[i] = burst_time[i] + wait_time[i];
        total_wait_time += wait_time[i];
        total_turn_around_time += turn_around_time[i];
    }

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\n", i+1, burst_time[i], wait_time[i], turn_around_time[i]);
    }

    printf("\nAverage Waiting Time: %d\n", total_wait_time / n);
    printf("Average Turnaround Time: %d\n", total_turn_around_time / n);

    return 0;
}

