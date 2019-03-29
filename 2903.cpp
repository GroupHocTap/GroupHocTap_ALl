#include<iostream>
using namespace std;
struct Node
{
	int nData;
	Node *pNext;
};
struct Lienketlist
{
	Node *pHead;
	Node *pTail;
	Lienketlist()
	{	
		{
			pHead = pTail = NULL;
		}
	}
};
bool isEmpty(Lienketlist L); 
void addHead(Lienketlist &L, int nX);
void output(Lienketlist L);
void inputHead(Lienketlist &L);
void addTail(Lienketlist &L, int nX);
void inputTail(Lienketlist &L);
void addHead(Lienketlist &L, int nX)
{
	Node *pNew = new Node;
	if (pNew == NULL)
		exit(1);
	pNew->nData = nX;
	pNew->pNext = NULL;
	if (isEmpty(L) == true)
	{
		L.pHead = L.pTail = pNew;
	}
	else {
		pNew->pNext = L.pHead;
		L.pHead = pNew;
	}
}
bool isEmpty(Lienketlist L)
{
	if (L.pHead == NULL)
		return true;
	return false;
}
void output(Lienketlist L)
{
	cout << "\n Xuat DanhSach ";
	Node *p = L.pHead;
	while (p != NULL)
	{
		cout << "\t " << p->nData;
		p = p->pNext;
	}
}
void inputHead(Lienketlist &L, int nN)
{
	int nX = 0;
	for (int i = 0; i < nN; i++)
	{
		cout << "\n Nhap Head: ";
		cin >> nX;
		addHead(L, nX);
	}
}
void addTail(Lienketlist &L, int nX)
{
	Node *pNew = new Node;
	if (pNew == NULL)
		exit(1);
	pNew->nData = nX;
	pNew->pNext = NULL;
	if (isEmpty(L) == true)
	{
		L.pHead = L.pTail = pNew;
	}
	else {
		L.pTail->pNext = pNew;
		L.pTail = pNew;
	}
}
void inputTail(Lienketlist &L, int nN)
{
	int nX = 0;
		cout << "\n Nhap Tail: ";
		cin >> nX;
		addTail(L, nX);

}
void main()
{
	int nN = 0;
	cout << "\nSo luong PhanTu Head: ";
	cin >> nN;
	Lienketlist L;
	inputHead(L, nN);
	output(L);
	inputTail(L, nN);
	output(L);

	system("pause");
}