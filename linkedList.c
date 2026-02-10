#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void display(){
    struct Node* current_node = head;
    while(current_node != NULL) {
        printf("%d -> ", current_node->data);
        current_node = current_node->next;
    }
    printf("NULL\n");
}


int main() {
    display();
    for (int n = 1; n <=3; n++){
        insert(n);
    }
    display();
    return 0;
}
