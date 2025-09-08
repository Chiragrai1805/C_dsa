#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    int n, i;
    struct node *head = NULL, *temp = NULL;

    printf("Number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        struct node *newNode = malloc(sizeof(struct node));
        printf("Data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}
