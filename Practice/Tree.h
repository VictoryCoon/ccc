#pragma once
class Tree
{
private:
	struct Node
	{
		Node* parent = nullptr;
		Node* rChild = nullptr;
		Node* lChild = nullptr;
		int data;
	};
public:
	Tree();
	~Tree();

	void Insert(int value);

	void PreOrder();
	void InOrder();
	void PostOrder();

	void Clear();

private:
	static void Insert(Node* node, int value);
	static void PreOrder(Node* node);
	static void InOrder(Node* node);
	static void PostOrder(Node* node);
private:
	Node* root;
};

