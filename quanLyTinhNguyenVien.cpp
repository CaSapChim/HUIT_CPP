#include <stdio.h>
#include <stdlib.h>

struct node {
    char name;
    int age;
    int phoneNumber;
    struct node* next;
};

node* createNode(char name, int age, int phoneNumber) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->name = name;
    newNode->age = age;
    newNode->phoneNumber = phoneNumber;
    newNode->next = NULL;
    return newNode;
}

struct SLinkedList {
    node* head;
    node* tail;
};

void createList(SLinkedList &sl) {
    sl.head = NULL;
    sl.tail = NULL;
}

int main() {
    node* node;
    SLinkedList sl;
}