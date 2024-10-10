#include <stdio.h>

struct Process {
    int pid;            
    int burst_time;     
    int priority;      
    int arrival_time;   
    int waiting_time;   
    int turnaround_time;
    int completion_time;
};

void sort_by_priority(struct Process p[], int n) {
    struct Process temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[i].priority < p[j].priority) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

void calculate_times(struct Process p[], int n) {
    int total_waiting_time = 0, total_turnaround_time = 0;
    int current_time = 0;

    for (int i = 0; i < n; i++) {
        if (current_time < p[i].arrival_time) {
            current_time = p[i].arrival_time;
        }
        p[i].completion_time = current_time + p[i].burst_time;
        p[i].turnaround_time = p[i].completion_time - p[i].arrival_time;
        p[i].waiting_time = p[i].turnaround_time - p[i].burst_time;
        current_time += p[i].burst_time;

        total_waiting_time += p[i].waiting_time;
        total_turnaround_time += p[i].turnaround_time;
    }

    float avg_waiting_time = (float)total_waiting_time / n;
    float avg_turnaround_time = (float)total_turnaround_time / n;

    printf("\nProcess\tPriority\tBurst Time\tArrival Time\tWaiting Time\tTurnaround Time\tCompletion Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", 
               p[i].pid, p[i].priority, p[i].burst_time, p[i].arrival_time,
               p[i].waiting_time, p[i].turnaround_time, p[i].completion_time);
    }

    printf("\nAverage Waiting Time: %.2f", avg_waiting_time);
    printf("\nAverage Turnaround Time: %.2f\n", avg_turnaround_time);
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process p[n];

    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("\nEnter Burst Time for Process %d: ", p[i].pid);
        scanf("%d", &p[i].burst_time);
        printf("Enter Priority for Process %d: ", p[i].pid);
        scanf("%d", &p[i].priority);
        printf("Enter Arrival Time for Process %d: ", p[i].pid);
        scanf("%d", &p[i].arrival_time);
    }

    sort_by_priority(p, n);

    calculate_times(p, n);

    return 0;
}

