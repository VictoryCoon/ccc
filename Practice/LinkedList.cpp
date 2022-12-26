#include "LinkedList.h"
#include <iostream>
using namespace std;
LinkedList::LinkedList()
{
	head = new Node();
	head->next = nullptr;
}

LinkedList::~LinkedList()
{
	clear();
	delete head;
}

void LinkedList::push(int value)
{	
	//1. ��� ����
	Node* node = new Node();
	node->data = value;
	//*���� ��带 �� ��忡 ����
	Node* origin = head->next;
	node->next = origin;
	//2. ��� ����(to Head)
	head->next = node;
	//head, headNext(new Node)

}

bool LinkedList::pop(int* out)
{
	// 1. �� �ڷ����� üũ
	if (isEmpty()) {
		return false;
	}

	// 2. ���� ��带 ã�´�
	Node* popNode = head->next;
	
	// 3. �ص带 ���� ����� ������忡 ������
	head->next = popNode->next;
	
	// 4. �����͸� ������(���������� Ȱ��)
	if (out != nullptr) {
		*out = popNode->data;
	}
	// 5. ���� ��带 �����Ѵ�
	delete popNode;

	return true;
}

void LinkedList::clear()
{
	/*
	Node* iterator = head->next;
	while (iterator != nullptr) {
		Node* next = iterator->next;
		delete iterator;
		iterator = next;
	}
	*/
	while (!isEmpty()) {
		pop();
	}
}

bool LinkedList::isEmpty()
{
	return (head->next == nullptr);
}

void LinkedList::Prints()
{
	cout << "[";
	Node* iterator = head->next;
	while (iterator != nullptr) {
		cout << iterator->data << " ";
		iterator = iterator->next;
	}

	cout << "]" << endl;
}