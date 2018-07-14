#pragma once
#include"NodeType.h"
#include<iostream>

using std::cout;
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