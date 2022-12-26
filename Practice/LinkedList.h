#pragma once

//template<typename T>
// 기능, 인터페이스(기능)
class LinkedList	// 클래스는 default 접근제어자 : private
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
#pragma pack(push,1)	// 1Byte간격으로 Padding Byte를 지정함
// 데이터 덩어리, 인터페이스(통신)
struct DataStruct {	// 구조체는 default 접근제어자 : public
	int a;
};
#pragma pack(pop)
*/