#include <iostream>				// C++, Library
//#include <stdio.h>			// C
#include "LinkedList.h"			// Header
#include "DoubleLinkedList.h"	// Header
#include "String.h"				// Header
#include "Tree.h"				// Header

using namespace std;
//#define AAA 4			// 전체정의, 컴파일은 느리지만, Runtime에서는 속도효율이 좋다

/* # : 전처리 지시자(전처리 > 컴파일 > 어셈블리 > 링킹 : Build, 실행파일 생성과정)
 * include 접근방식분류
 * <> : 라이브러리 영역
 * "" : 헤더 영역 (+.cpp는 include 항목이 아니다)
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