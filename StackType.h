#pragma once
#define ItemType int
#include<iostream>

using std::cout;

struct NodeType {
	NodeType* next;
	ItemType item;
};
class StackType {
private:
	int MAX_ITEM;
	NodeType * head;
	int Item_num;
public:
	StackType();
	~StackType();
	void push(ItemType);
	void pop();
	bool is_full();
	bool is_empty();
	ItemType top();
};