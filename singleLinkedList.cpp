#include <stdio.h>
#include <stdlib.h>

// Cài đặt dslk đơn

struct node {
    int data;
    struct node* next; 
};

// Hàm tạo node

node* createNode(int x) {
    node *newNode = (node*)malloc(sizeof(node)); // cấp phát bộ nhớ cho nút mới
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

// Tạo dslk đơn
struct SLinkedList {
    node* head;
    node* tail;
};

void createList(SLinkedList &sl) {
    sl.head = NULL;
    sl.tail = NULL;
}

int isEmpty(SLinkedList &sl) {
    return sl.head == NULL;
}

void addHead(SLinkedList &sl, node *node) {
    if(isEmpty(sl)) {
        sl.head = node;
        sl.tail = node;
    } else {
        node->next = sl.head;
        sl.head = node;
    }
}

void addTail(SLinkedList &sl, node* node) {
    if (isEmpty(sl)) {
        sl.head = node;
        sl.tail = node;
    } else {
        sl.tail->next = node;
        sl.tail = node;
    }
}

void displaySLinkedList(SLinkedList sl) {
    if (sl.head != NULL) {
        node* node = sl.head;
        while (node != NULL) {
            printf("%d ", node->data);
            node = node->next;
        }
    }
}

void inputList(int &n, SLinkedList &sl, node* node) {
    int soNode;
    printf("Nhap so node muon tao: ");
    scanf("%d", &soNode);
    for (int i = 0; i < soNode; i++) {
        printf("Nhap data cua node: ");
        scanf("%d", &n);
        if (sl.head != NULL) 
            addTail(sl, createNode(n));
        else    
            addHead(sl, createNode(n));
    }
}

void addAfterANode(SLinkedList &sl, node* q, node* p) { // Thêm node p vào sau q
    if (isEmpty(sl)) {
        
    } else {

    }
}

int main() {
    int n;
    SLinkedList sl;
    node* node;

    createList(sl);
    inputList(n, sl, node);
    printf("Truoc khi addHead: ");
    displaySLinkedList(sl);
    printf("\nSau khi addHead: ");
    addHead(sl, createNode(999));
    displaySLinkedList(sl);
}