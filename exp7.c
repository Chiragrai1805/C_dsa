//wap to implement different operations in queue
#include <stdio.h>
int queue[20];
int front = -1, rear = -1;
void enqueue();
void dequeue();
void display();

int main() {
    int choice;

    while (1) {
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}


void enqueue() {
    int item;
    if (rear == 19) {
        printf("Queue Overflow! Cannot insert.\n");
        return;
    }

    printf("Enter element to enqueue: ");
    scanf("%d", &item);

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = item;
    printf("Inserted %d\n", item);
}


void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Nothing to delete.\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);
    front++;

    if (front > rear) {
        
        front = rear = -1;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
