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
	//1. 노드 생성
	Node* node = new Node();
	node->data = value;
	//*기존 노드를 새 노드에 연결
	Node* origin = head->next;
	node->next = origin;
	//2. 노드 연결(to Head)
	head->next = node;
	//head, headNext(new Node)

}

bool LinkedList::pop(int* out)
{
	// 1. 빈 자료인지 체크
	if (isEmpty()) {
		return false;
	}

	// 2. 꺼낼 노드를 찾는다
	Node* popNode = head->next;
	
	// 3. 해드를 꺼낼 노드의 다음노드에 연결함
	head->next = popNode->next;
	
	// 4. 데이터를 꺼낸다(역참조연산 활용)
	if (out != nullptr) {
		*out = popNode->data;
	}
	// 5. 꺼낸 노드를 삭제한다
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