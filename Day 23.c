#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createList(int n) {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}


struct Node* mergeLists(struct Node* head1, struct Node* head2) {
    struct Node dummy;
    struct Node* tail = &dummy;
    dummy.next = NULL;

    while (head1 != NULL && head2 != NULL) {
        if (head1->data <= head2->data) {
            tail->next = head1;
            head1 = head1->next;
        } else {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }

 
    if (head1 != NULL)
        tail->next = head1;
    else
        tail->next = head2;

    return dummy.next;
}


void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    int n, m;

 
    scanf("%d", &n);
    struct Node* head1 = createList(n);


    scanf("%d", &m);
    struct Node* head2 = createList(m);


    struct Node* mergedHead = mergeLists(head1, head2);


    printList(mergedHead);

    return 0;
}
