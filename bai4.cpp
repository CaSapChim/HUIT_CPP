#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

typedef int ItemType;

struct PhanSo {
	ItemType tuSo;
	ItemType mauSo;
};

struct BSTNode {
	PhanSo Info;
	BSTNode* Left;
	BSTNode* Right;
};

struct BSTree {
	BSTNode* Root;
};

int isMauSoZero(ItemType mauSo); // Hàm check mẫu số có phải là số 0 không
BSTNode* createBSTNode(ItemType x, ItemType y);
void initBSTree(BSTree& bst);
int insertBSTNode(BSTNode *&root, BSTNode *p);
void createBSTree_ByHand(BSTree& bst);
void createBSTree_FromArray(BSTree &bst, PhanSo a[], int n);
void createBSTree_Random(BSTree& bst);
void createBSTree_FromFile(BSTree& bst, char fileName[]);
void traverseNRL(BSTNode *root); // node right left
void traverseLNR(BSTNode* root); // left node right
void traverseLRN(BSTNode* root); // left right node
void traverseNLR(BSTNode* root); // node left right
void traverseRNL(BSTNode* root); // right node left
void traverseRLN(BSTNode* root); // right left node
void traverseAll(BSTNode* root);
void createOneNode(BSTree& bst);
int demPhanSoLonHonMot(BSTNode* root);
void showMenu();
void process();

void main() {
	process();
	_getch();
}

void showMenu() {
	printf("\n========================================");
	printf("\n0. Thoat chuong trinh.");
	printf("\n1. Tao BST bang cach nhap tu ban phim.");
	printf("\n2. Tao BST bang cach tao random.");
	printf("\n3. Tao BST tu mang co san du lieu.");
	printf("\n4. Tao BST tu file co san du lieu.");
	printf("\n5. Them mot node moi.");
	printf("\n6. Dem cac node co gia tri lon hon 1.");
	printf("\n7. Tim kiem ");
	printf("\n========================================\n");
}

void process() {
	int choice;
	BSTNode* p;
	BSTree bst;
	initBSTree(bst);
	PhanSo phanSo[5] = { {1, 2}, {3, 4}, {2, 5}, {5, 8}, {7, 3} };
	char fileName[] = "duLieu.txt";

	do {
		showMenu();
		printf("=> Ban chon chuc nang so: ");
		scanf_s("%d", &choice);
		switch (choice) {
			case 1:
				createBSTree_ByHand(bst);
				traverseAll(bst.Root);
			break;
			case 2:
				createBSTree_Random(bst);
				traverseAll(bst.Root);
			break;
			case 3:
				createBSTree_FromArray(bst, phanSo, 5);
				traverseAll(bst.Root);
			break;
			case 4:
				createBSTree_FromFile(bst, fileName);
				traverseAll(bst.Root);
			break;
			case 5:
				createOneNode(bst);
				traverseAll(bst.Root);
			break;
			case 6:
				int count = demPhanSoLonHonMot(bst.Root);
				printf("%d", count);
			break;
		}
	} while (choice != 0);
}

int isMauSoZero(ItemType mauSo) {
	return mauSo == 0;
}

BSTNode* createBSTNode(ItemType x, ItemType y) {
	BSTNode* p = new BSTNode;
	if (p == NULL) {
		printf("Khong du cap phat bo nho!");
		_getch();
		return NULL;
	}
	if (isMauSoZero(y)) {
		printf("Mau so khong the la so 0");
		_getch();
		return NULL;
	}
	p->Info.tuSo = x;
	p->Info.mauSo = y;
	p->Left = NULL;
	p->Right = NULL;
	return p;
}

void initBSTree(BSTree& bst) {
	bst.Root = NULL;
}

int insertBSTNode(BSTNode*& root, BSTNode* p) {
	if (p == NULL)
		return 0;
	if (root == NULL) {
		root = p;
		return 1;
	}

	float phanSo1 = (float)root->Info.tuSo / root->Info.mauSo;
	float phanSo2 = (float)p->Info.tuSo / p->Info.mauSo;

	if (phanSo1 == phanSo2)
		return 0;
	if (phanSo2 < phanSo1) {
		return insertBSTNode(root->Left, p);
	}
	else {
		return insertBSTNode(root->Right, p);
	}
}

void createOneNode(BSTree &bst) {
	ItemType x, y;
	printf("\nNhap gia tri cho tu so: ");
	scanf_s("%d", &x);
	printf("Nhap gia tri cho mau so: ");
	scanf_s("%d", &y);
	BSTNode* p = createBSTNode(x, y);
	insertBSTNode(bst.Root, p);
	printf("\n");
}

void createBSTree_FromArray(BSTree& bst, PhanSo a[], int n) {
	initBSTree(bst);
	for (int i = 0; i < n; i++) {
		BSTNode* p = createBSTNode(a[i].tuSo, a[i].mauSo);
		insertBSTNode(bst.Root, p);
	}
}

void createBSTree_ByHand(BSTree& bst) {
	int n;
	ItemType x, y;

	printf("Nhap so node muon tao: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("\n\tNode thu %d: ", i);
		printf("\nNhap gia tri cho tu so: ");
		scanf_s("%d", &x);
		printf("Nhap gia tri cho mau so: ");
		scanf_s("%d", &y);
		printf("==============================");
		BSTNode* p = createBSTNode(x, y);
		insertBSTNode(bst.Root, p);
	}
	printf("\n");
}

void createBSTree_Random(BSTree& bst) {
	int n;
	ItemType X, Y;
	printf("Nhap so node muon tao: ");
	scanf_s("%d", &n);
	initBSTree(bst);
	srand((unsigned)time(NULL));
	for (int i = 1; i <= n; i++) {
		X = rand() % 199 - 99;
		Y = rand() % 199 - 99;
		BSTNode* p = createBSTNode(X, Y);
		insertBSTNode(bst.Root, p);
	}
}

void createBSTree_FromFile(BSTree& bst, char fileName[]) {
	FILE* f;
	f = fopen(fileName, "rt");
	if (!f) return;
	int n;
	fscanf_s(f, "%d\n", &n);
	ItemType x, y;
	initBSTree(bst);
	for (int i = 0; i < n; i++) {
		fscanf_s(f, "%d %d", &x, &y);
		BSTNode* p = createBSTNode(x, y);
		insertBSTNode(bst.Root, p);
	}
	fclose(f);
}

void traverseNRL(BSTNode* root) {
	if (root == NULL) return;
	printf("%d/%d ", root->Info.tuSo, root->Info.mauSo);
	traverseNRL(root->Right);
	traverseNRL(root->Left);
}

void traverseLNR(BSTNode* root) {
	if (root == NULL) return;
	traverseLNR(root->Left);
	printf("%d/%d ", root->Info.tuSo, root->Info.mauSo);
	traverseLNR(root->Right);
}

void traverseLRN(BSTNode* root) {
	if (root == NULL) return;
	traverseLRN(root->Left);
	traverseLRN(root->Right);
	printf("%d/%d ", root->Info.tuSo, root->Info.mauSo);
}

void traverseNLR(BSTNode* root) {
	if (root == NULL) return;
	printf("%d/%d ", root->Info.tuSo, root->Info.mauSo);
	traverseNLR(root->Left);
	traverseNLR(root->Right);
}

void traverseRNL(BSTNode* root) {
	if (root == NULL) return;
	traverseRNL(root->Right);
	printf("%d/%d ", root->Info.tuSo, root->Info.mauSo);
	traverseRNL(root->Left);
}

void traverseRLN(BSTNode* root) {
	if (root == NULL) return;
	traverseRLN(root->Right);
	traverseRLN(root->Left);
	printf("%d/%d ", root->Info.tuSo, root->Info.mauSo);
}

void traverseAll(BSTNode* root) {
	printf("Duyet theo node-right-left: ");
	traverseNRL(root);
	printf("\nDuyet theo node-left-right: ");
	traverseNLR(root);
	printf("\nDuyet theo left-node-right: ");
	traverseLNR(root);
	printf("\nDuyet theo left-right-node: ");
	traverseLRN(root);
	printf("\nDuyet theo right-node-left: ");
	traverseRNL(root);
	printf("\nDuyet theo right-left-node: ");
	traverseRLN(root);
}

int demPhanSoLonHonMot(BSTNode* root) {
	if (root == NULL) return 0;
	int count = 0;
	count += demPhanSoLonHonMot(root->Left);
	if ((float)root->Info.tuSo / root->Info.mauSo > 1) count++;
	count += demPhanSoLonHonMot(root->Right);
	return count;
}