#pragma once
class DoubleLinkedList
{
private:
	struct Node
	{
		/*
		 * nullptr > head > tail > nullptr
		 */
		Node* next;
		Node* prev;
		int data;
	};
public:
	DoubleLinkedList();
	~DoubleLinkedList();

	void PushFront(int value);
	void PushBack(int value);
	bool PopFront(int* out = nullptr);
	bool PopBack(int* out = nullptr);

	void Clear();
	bool isEmpty();

	void Prints();

private:
	Node* head;
	Node* tail;
};

