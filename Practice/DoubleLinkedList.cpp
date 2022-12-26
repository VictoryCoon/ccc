#include "DoubleLinkedList.h"
#include <iostream>
using namespace std;

DoubleLinkedList::DoubleLinkedList()
{
	head = new Node();
	tail = new Node();
	head->next = tail;
	tail->next = head;
}

DoubleLinkedList::~DoubleLinkedList()
{
	Clear();
	delete head;
	delete tail;
}

void DoubleLinkedList::PushFront(int value)
{
	//1. 노드 생성
	Node* node = new Node();
	node->data = value;
	//2. 기존 노드에 새 노드를 연결한다
	node->next = head->next;
	node->prev = head;
	head->next = node;
	//*위치 재정립
	node->next->prev = node;
}

void DoubleLinkedList::PushBack(int value)
{
	//1. 노드 생성
	Node* node = new Node();
	node->data = value;
	//2. 기존 노드에 새 노드를 연결한다
	node->next = tail;
	node->prev = tail->prev;
	tail->prev = node;
	//*위치 재정립
	node->prev->next = node;
}

bool DoubleLinkedList::PopFront(int* out)
{
	// 1. 빈 자료인지 체크
	if (isEmpty()) {
		return false;
	}
	// 2. 연결 해제
	Node* popNode = head->next;
	head->next = popNode->next;
	popNode->next->prev = head;
	
	if (out != nullptr) {
		*out = popNode->data;
	}
	delete popNode;

	return true;
}

bool DoubleLinkedList::PopBack(int* out)
{
	// 1. 빈 자료인지 체크
	if (isEmpty()) {
		return false;
	}
	// 2. 연결 해제
	Node* popNode = tail->prev;
	tail->prev = popNode->prev;
	popNode->prev->next = tail;

	if (out != nullptr) {
		*out = popNode->data;
	}
	delete popNode;

	return true;
}

void DoubleLinkedList::Clear()
{
	while (!isEmpty())
	{
		PopFront();
	}
}

bool DoubleLinkedList::isEmpty()
{
	return head->next == tail;
	//return tail->prev == head;
}

void DoubleLinkedList::Prints()
{
	cout << "[";
	Node* iterator = head->next;
	while (iterator != tail) {
		cout << iterator->data << " ";
		iterator = iterator->next;
	}

	cout << "]" << endl;
}
