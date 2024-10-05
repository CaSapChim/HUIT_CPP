#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


#define CRT_SECURE_MO_WARNINGS


struct Sach {
	int masach;
	char tenSach[50];
	char tacGia[50];
	int namXuatBan;
	Sach* next;
};

struct Node {
	Sach* data;
	Node* pNext;
};

struct SList
{
	Node* pHead;
};

void showMenu(); //Hàm thực đơn chương trình
void PressAnyKey(); //Hàm dừng màn hình để xem kết quả
void initSList(SList*& sl); //Hàm khởi tạo danh sách
Sach* NhapSach(); //Hàm nhập thông tin sách
Node* CreatNode(Sach* s); //Hàm tạo node
void themDau(SList* sl, Sach* s); //Hàm thêm sách vào đầu danh sách
void themGiua(SList* sl, Sach* s, int x); //Hàm thêm sách vào giữa danh sách
void themCuoi(SList* sl, Sach* s); //Hàm thêm sách vào cuối danh sách
void inDanhSach(SList* sl); //Hàm in danh sách
Node* timKiem(SList* sl, int masach); //Hàm tìm kiếm sách theo mã sách
void xoaSach(SList* sl, int masach); //Hàm xóa sách 
void sapXep(SList*& sl); //Hàm sắp xếp sách theo mã sách

//Hàm thực đơn chương trình
void showMenu()
{
	for (int j = 0; j < 50; j++)	printf("-"); printf("\n");
	printf("\t>> QUAN LY SACH THU VIEN \n");
	for (int j = 0; j < 50; j++)	printf("-"); printf("\n");
	printf("\t>> 1. Hien thi danh sach sach\n");
	printf("\t>> 2. Them sach vao dau danh sach\n");
	printf("\t>> 3. Them sach vao giua danh sach\n");
	printf("\t>> 4. Them sach vao cuoi danh sach\n");
	printf("\t>> 5. Tim kiem theo ma sach\n");
	printf("\t>> 6. Xoa sach khoi danh sach\n");
	printf("\t>> 7. Sap xep theo ma sach\n");
	printf("\t>> 0. Thoat khoi chuong trinh\n");
}

//Hàm dừng màn hình để xem kết quả
void PressAnyKey()
{
	printf("\n\n Bam phim bat ky de tiep tuc...");
	_getch();
	system("cls");
}

//Hàm khởi tạo danh sách
void initSList(SList *&sl)
{
	sl = new SList;	
	sl->pHead = NULL;
}

// Hàm nhập thông tin sách
Sach* NhapSach()
{
	Sach* s = new Sach;
	printf("Nhap ma sach: ");
	scanf_s("%d", &(s->masach));
	getchar();
	printf("Nhap ten sach: ");
	fgets(s->tenSach, 50, stdin);
	printf("Nhap ten tac gia: ");
	fgets(s->tacGia, 50, stdin);
	printf("Nhap nam xuat ban: ");
	scanf_s("%d", &(s->namXuatBan));
	return s;
}

//Hàm tạo node
Node* CreatNode(Sach* s)
{
	Node* pNode = new Node;
	if (pNode != NULL)
	{
		pNode->data = s;
		pNode->pNext = NULL;
	}
	else
		printf("Cap phat bo nho khong thanh cong!");
	return pNode;
}

//Hàm thêm sách vào đầu danh sách
void themDau(SList* sl, Sach* s)
{
	Node* pNode = CreatNode(s);
	if (sl->pHead == NULL)
		sl->pHead = pNode;
	else
	{
		pNode->pNext = sl->pHead;
		sl->pHead = pNode;
	}
}

//Hàm thêm sách vào cuối danh sách
void themGiua(SList* sl, Sach* s, int x)
{
	Node* pNode = CreatNode(s);
	if (sl->pHead == NULL)
		sl->pHead = pNode;
	else
	{
		Node* pTemp = sl->pHead;
		for (int i = 0; i < x - 1 && pTemp->pNext != NULL; i++)
			pTemp = pTemp->pNext;
		pNode->pNext = pTemp->pNext;
		pTemp->pNext = pNode;
	}
}

//Hàm thêm sách vào cuối danh sách
void themCuoi(SList* sl, Sach* s)
{
	Node* pNode = CreatNode(s);
	if (sl->pHead == NULL)
		sl->pHead = pNode;
	else
	{
		Node* pTemp = sl->pHead;
		while (pTemp->pNext != NULL)
			pTemp = pTemp->pNext;
		pTemp->pNext = pNode;
	}
}

//Hàm in danh sách
void inDanhSach(SList* sl)
{
	Node* pTemp = sl->pHead;
	if (pTemp == NULL)
	{
		printf("Danh sach rong!");
		return;
	}
	printf("%-5s %-10s %-10s %-5s\n", "Ma Sach", "Ten Sach", "Tac Gia", "Nam Xuat Ban");
	for (int i = 0; i < 50; i++) printf("-");
	printf("\n");
	while (pTemp != NULL)
	{
		Sach* s = pTemp->data;
		printf("%-5d %-10s %-10s %-5d\n", s->masach, s->tenSach, s->tacGia, s->namXuatBan);
		pTemp = pTemp->pNext;
	}
}

//Hàm tìm kiếm sách theo mã sách
Node* timKiem(SList* sl, int masach)
{
	Node* pTemp = sl->pHead;
	while (pTemp != NULL)
	{
		Sach* s = pTemp->data;
		if (s->masach == masach)
			return pTemp;
		pTemp = pTemp->pNext;
	}
	return NULL;
}

//Hàm xóa sách 
void xoaSach(SList* sl, int masach)
{
	Node* pDel = sl->pHead;
	if (pDel == NULL)
		printf("Danh sach rong!");
	else
	{
		Node* pPre = NULL;
		while (pDel != NULL)
		{
			Sach* s = pDel->data;
			if (s->masach == masach)
				break;
			pPre = pDel;
			pDel = pDel->pNext;
		}
		if (pDel == NULL)
			printf("Khong tim thay ma sach: %d", masach);
		else
		{
			if (pDel == sl->pHead)
			{
				sl->pHead = sl->pHead->pNext;
				pDel->pNext = NULL;
				free(pDel);
				pDel = NULL;
			}
			else
			{
				pPre->pNext = pDel->pNext;
				pDel->pNext = NULL;
				free(pDel);
				pDel = NULL;
			}
		}
	}
}

//Hàm sắp xếp sách theo mã sách
void sapXep(SList *&sl)
{
	for (Node* pTemp = sl->pHead; pTemp != NULL; pTemp = pTemp->pNext)
	{
		for (Node* pTemp2 = pTemp->pNext; pTemp2 != NULL; pTemp2 = pTemp2->pNext)
		{
			Sach* sTemp = pTemp->data;
			Sach* sTemp2 = pTemp2->data;
			if (sTemp2->masach < sTemp->masach)
			{
				Sach* temp = sTemp;
				pTemp->data = sTemp2;
				pTemp2->data = temp;
			}
		}
	}
}

int main()
{
	SList* sl;
	initSList(sl);
	int choice = 0;
	Sach* s;
	int masach;
	while (true)
	{
		showMenu();
		printf("NHAP LUA CHON CUA BAN: ");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
		{
			printf("Danh sach cac sach hien co la: \n");
			inDanhSach(sl);
			PressAnyKey();
			break;
		}
		case 2:
		{
			s = NhapSach();
			themDau(sl, s);
			printf("Danh sach sau khi them sach vao dau danh sach la: \n");
			inDanhSach(sl);
			PressAnyKey();
			break;
		}
		case 3:
		{
			int x;
			printf("Nhap vi tri muon them: ");
			scanf_s("%d", &x);
			s = NhapSach();
			themGiua(sl, s, x);
			printf("Danh sach sau khi them sach vao giua danh sach la: \n");
			inDanhSach(sl);
			PressAnyKey();
			break;
		}
		case 4:
		{
			s = NhapSach();
			themCuoi(sl, s);
			printf("Danh sach sau khi them sach vao cuoi danh sach la: \n");
			inDanhSach(sl);
			PressAnyKey();
			break;
		}
		case 5:
		{
			printf("Nhap ma sach can tim: ");
			scanf_s("%d", &masach);
			Node* pNode = timKiem(sl, masach);
			if (pNode != NULL)
				printf("Tim thay sach co ma: %d\n", masach);
			else
				printf("Khong tim thay sach co ma sach: %d\n", masach);
			PressAnyKey();
			break;
		}
		case 6:
		{
			printf("Nhap ma sach can xoa: ");
			scanf_s("%d", &masach);
			xoaSach(sl, masach);
			printf("Danh sach sach sau khi xoa la: ");
			inDanhSach(sl);
			PressAnyKey();
			break;
		}
		case 7:
		{
			sapXep(sl);
			printf("Danh sach sach sau khi sap xep la: \n");
			inDanhSach(sl);
			PressAnyKey();
			break;
		}
		case 0: printf(">>Thoat khoi chuong trinh!!!\n");
			return 0;
		default:	
			printf("\t\t>>LUA CHON KHONG HOP LE. VUI LONG NHAP LAI!!!.\n");
			_getch();
		}
	}
	return 0;
}