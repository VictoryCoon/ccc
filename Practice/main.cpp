#include <iostream>				// C++, Library
//#include <stdio.h>			// C
#include "LinkedList.h"			// Header
#include "DoubleLinkedList.h"	// Header
#include "String.h"				// Header
#include "Tree.h"				// Header

using namespace std;
//#define AAA 4			// ��ü����, �������� ��������, Runtime������ �ӵ�ȿ���� ����

/* # : ��ó�� ������(��ó�� > ������ > ����� > ��ŷ : Build, �������� ��������)
 * include ���ٹ�ĺз�
 * <> : ���̺귯�� ����
 * "" : ��� ���� (+.cpp�� include �׸��� �ƴϴ�)
 */

int main() {
	/*
	DoubleLinkedList* list = new DoubleLinkedList();
	int data;
	
	for (int i = 0; i < 10; i++) {
		list->PushFront(i);
		list->Prints();
	}

	for (int i = 0; i < 10; i++) {
		list->PopBack(&data);
		cout << "Back Extracted Data : " << data << endl;
		list->Prints();
	}

	for (int i = 0; i < 10; i++) {
		list->PushBack(i);
		list->Prints();
	}
	
	for (int i = 0; i < 10; i++) {
		list->PopFront(&data);
		cout << "Front Extracted Data : " << data << endl;
		list->Prints();
	}

	list->Clear();
	list->Prints();
	*/
	/*
	String str = "ABCD ";
	String str2 = str;
	str2 += str;

	String str3 = str + str2;
	
	char c = str[1];

	str[1] = 'Z';

	cout << str.ToConst() << endl;
	cout << str2.ToConst() << endl;
	cout << str3.ToConst() << endl;
	cout << c << endl;
	*/

	Tree tree;

	tree.Insert(15);
	tree.Insert(7);
	tree.Insert(18);
	tree.Insert(1);
	tree.Insert(9);
	tree.Insert(17);
	tree.Insert(21);

	cout << "============== PreOrder ==============" << endl;
	tree.PreOrder();
	cout << endl;
	cout << "============== InOrder ==============" << endl;
	tree.InOrder();
	cout << endl;
	cout << "============== PostOrder ==============" << endl;
	tree.PostOrder();

	return 0;
}