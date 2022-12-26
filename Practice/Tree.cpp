#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Tree()
{
}

Tree::~Tree()
{
	Clear();
}

void Tree::Insert(int value)
{
	if (root == nullptr)
	{
		root = new Node();
		root->data = value;
	}
	else
	{
		Insert(root, value);
	}
}

void Tree::PreOrder()
{
	PreOrder(root);
}

void Tree::InOrder()
{
	InOrder(root);
}

void Tree::PostOrder()
{
	PostOrder(root);
}

void Tree::Clear()
{
}

void Tree::Insert(Node* parent, int value)
{
	if (value < parent->data)
	{
		if(parent->lChild == nullptr)
		{ 
			Node* node = new Node();
			node->data = value;
			node->parent = parent;
			parent->lChild= node;
		}
		else
		{
			Insert(parent->lChild, value);
		}
	}
	else
	{
		if (parent->rChild == nullptr)
		{
			Node* node = new Node();
			node->data = value;
			node->parent = parent;
			parent->rChild = node;
		}
		else
		{
			Insert(parent->rChild, value);
		}
	}
}

void Tree::PreOrder(Node* node)
{
	if (node != nullptr)
	{
		cout << node->data << " ";
		PreOrder(node->lChild);
		PreOrder(node->rChild);
	}
}

void Tree::InOrder(Node* node)
{
	if (node != nullptr)
	{
		InOrder(node->lChild);
		cout << node->data << " ";
		InOrder(node->rChild);
	}
}

void Tree::PostOrder(Node* node)
{
	if (node != nullptr)
	{
		PostOrder(node->lChild);
		PostOrder(node->rChild);
		cout << node->data << " ";
	}
}
