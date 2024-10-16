#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Define the maximum size of the queue

int queue[MAX];
int front = -1;
int rear = -1;

// Function to add an element to the queue
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue is full. Cannot enqueue %d\n", value);
    } else {
        if (front == -1) {
            front = 0;  // Set front to 0 if inserting the first element
        }
        rear++;
        queue[rear] = value;
        printf("Enqueued %d\n", value);
    }
}

// Function to remove an element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        printf("Dequeued %d\n", queue[front]);
        front++;
        if (front > rear) {
            front = rear = -1;  // Reset the queue if it becomes empty
        }
    }
}

// Function to display the elements of the queue
void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

