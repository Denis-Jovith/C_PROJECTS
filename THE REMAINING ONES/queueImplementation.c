#include <stdio.h>
#include <stdlib.h>

#define MAX 2

struct Queue {
    int data[MAX];
    int front;//dequeue//kupop
    int rear;//enqueue//kupush
} ;

int main() {
    struct Queue queue;
    queue.front = -1;
    queue.rear = -1;

    // Insert function logic
    int value;

    // Insert 10
    value = 10;
    if ((queue.rear + 1) % MAX == queue.front) {
        printf("Queue overflow. Unable to insert %d\n", value);
    } else {
        if (queue.front == -1) {
            queue.front = 0;
        }
        queue.rear = (queue.rear + 1) % MAX;
        queue.data[queue.rear] = value;
        printf("Inserted %d\n", value);
    }

    // Insert 20
    value = 20;
    if ((queue.rear + 1) % MAX == queue.front) {
        printf("Queue overflow. Unable to insert %d\n", value);
    } else {
        if (queue.front == -1) {
            queue.front = 0;
        }
        queue.rear = (queue.rear + 1) % MAX;
        queue.data[queue.rear] = value;
        printf("Inserted %d\n", value);
    }

    // Insert 30
    value = 30;
    if ((queue.rear + 1) % MAX == queue.front) {
        printf("Queue overflow. Unable to insert %d\n", value);
    } else {
        if (queue.front == -1) {
            queue.front = 0;
        }
        queue.rear = (queue.rear + 1) % MAX;
        queue.data[queue.rear] = value;
        printf("Inserted %d\n", value);
    }

    // Display function logic
    if (queue.front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = queue.front; i != queue.rear; i = (i + 1) % MAX) {
            printf("%d ", queue.data[i]);
        }
        printf("%d\n", queue.data[queue.rear]);
    }

    // Delete function logic
    if (queue.front == -1) {
        printf("Queue underflow. No elements to delete\n");
    } else {
        value = queue.data[queue.front];
        if (queue.front == queue.rear) {
            queue.front = -1;
            queue.rear = -1;
        } else {
            queue.front = (queue.front + 1) % MAX;
        }
        printf("Deleted %d\n", value);
    }

    if (queue.front == -1) {
        printf("Queue underflow. No elements to delete\n");
    } else {
        value = queue.data[queue.front];
        if (queue.front == queue.rear) {
            queue.front = -1;
            queue.rear = -1;
        } else {
            queue.front = (queue.front + 1) % MAX;
        }
        printf("Deleted %d\n", value);
    }

    if (queue.front == -1) {
        printf("Queue underflow. No elements to delete\n");
    } else {
        value = queue.data[queue.front];
        if (queue.front == queue.rear) {
            queue.front = -1;
            queue.rear = -1;
        } else {
            queue.front = (queue.front + 1) % MAX;
        }
        printf("Deleted %d\n", value);
    }

    if (queue.front == -1) {
        printf("Queue underflow. No elements to delete\n");
    } else {
        value = queue.data[queue.front];
        if (queue.front == queue.rear) {
            queue.front = -1;
            queue.rear = -1;
        } else {
            queue.front = (queue.front + 1) % MAX;
        }
        printf("Deleted %d\n", value);
    }

    // Display function logic again
    if (queue.front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = queue.front; i != queue.rear; i = (i + 1) % MAX) {
            printf("%d ", queue.data[i]);
        }
        printf("%d\n", queue.data[queue.rear]);
    }

    return 0;
}
