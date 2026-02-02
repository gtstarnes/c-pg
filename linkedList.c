#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next; 
};

struct Node* head = NULL;

void insert(int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void display(struct Node* n){
    struct Node* current = head; 
    while(current!= NULL){
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL");
}

int main() {
    display(head);
    insert(1);
    insert(2);
    insert(3);
    display(head);
    return 0;
}
