#include <stdio.h>
#include <stdlib.h>

// Cài đặt dslk đơn
struct node {
    int data;
    struct node* next;
};
typedef struct node node;

node* createNode(int x) {
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

// Tạo danh sách liên kết đơn
struct SLinkedList {
    node* head;
    node* tail;
};

void createSList(SLinkedList &sl) {
    sl.head = NULL;
    sl.tail = NULL;
}

int isEmpty(SLinkedList &sl) {
    return (sl.head == NULL);
}

void addHead(SLinkedList &sl, node* newNode) {
    if (isEmpty(sl)) {  
        sl.head = newNode;
        sl.tail = newNode;
    } else {
        newNode->next = sl.head;
        sl.head = newNode;
    }
}

void addTail(SLinkedList &sl, node* newNode) {
    if (isEmpty(sl)) {
        sl.head = newNode;
        sl.tail = newNode;
    } else {
        sl.tail->next = newNode;
        sl.tail = newNode;
    }
}

void addAfterNode(SLinkedList &sl, node* p, node* q) { // thêm node p vào sau nốt q
    if (p != NULL) {
        p->next = q->next;
        q->next = p;
        if (sl.tail == q) 
            sl.tail = p;
    } 
    else addHead(sl, p);
}

int search(SLinkedList sl, int x) {
    node* currentNode = sl.head;
    while (currentNode != NULL) {
        if (currentNode->data == x) {
            return 1; // Phần tử được tìm thấy
        }
        currentNode = currentNode->next;
    }
    return 0; // Phần tử không được tìm thấy
}

void inputList(int &n, SLinkedList &sl) {
    int data;
    printf("Nhap so node muon tao: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Data cua node %d: ", i);
        scanf("%d", &data);
        if (isEmpty(sl)) 
            addHead(sl, createNode(data));
        else 
            addTail(sl, createNode(data));
    }
}

void PrintList(SLinkedList sl) {
	if (sl.head != NULL)
	{
		node* currentNode = sl.head;
		while (currentNode != NULL)
		{
			printf("%d ", currentNode->data);
			currentNode = currentNode->next; // Chuyển sang node tiếp theo
		}
	}
}

void sortDescending(SLinkedList &sl) {
    if (isEmpty(sl) || sl.head->next == NULL) // Trường hợp danh sách rỗng hoặc chỉ có 1 phần tử
        return;

    node *sorted = NULL;
    node *current = sl.head;

    while (current != NULL) {
        node *nextNode = current->next;
        if (sorted == NULL || sorted->data < current->data) {
            current->next = sorted;
            sorted = current;
        } else {
            node *search = sorted;
            while (search->next != NULL && search->next->data >= current->data) {
                search = search->next;
            }
            current->next = search->next;
            search->next = current;
        }
        current = nextNode;
    }
    sl.head = sorted;
}

int main() {
    int choice;
    int n;
    SLinkedList list;
    createSList(list);

    do {
        printf("\n\nMenu:\n");
        printf("1. Them phan tu vao danh sach\n");
        printf("2. Tim kiem phan tu x co trong dslk hay khong\n");
        printf("3. In danh sach\n");
        printf("4. Sap xep danh sach giam dan\n");
        printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                inputList(n, list);
                break;
            case 2:
                int elementToFind;
                printf("Nhap phan tu can tim kiem: ");
                scanf("%d", &elementToFind);
                if (search(list, elementToFind)) {
                    printf("Phan tu %d co trong danh sach.\n", elementToFind);
                } else {
                    printf("Phan tu %d khong co trong danh sach.\n", elementToFind);
                }
                break;
            case 3:
                if (isEmpty(list) == 1)
                    printf("Danh sach rong\n"); 
                else
                    PrintList(list);
                break;
            case 4:
                sortDescending(list);
                printf("Danh sach da sap xep giam dan.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai!\n");
        }
    } while (choice != 4);

    return 0;
}
