#pragma once

//template<typename T>
// ���, �������̽�(���)
class LinkedList	// Ŭ������ default ���������� : private
{
private:
	struct Node {	//inner Class
		Node* next;
		int data;
	};
public:
	LinkedList();
	~LinkedList();

	void push(int value);

	bool pop(int* out = nullptr);	//default : null

	void clear();
	
	bool isEmpty();
	
	void Prints();

private:
	Node* head;
};


/*
#pragma pack(push,1)	// 1Byte�������� Padding Byte�� ������
// ������ ���, �������̽�(���)
struct DataStruct {	// ����ü�� default ���������� : public
	int a;
};
#pragma pack(pop)
*/