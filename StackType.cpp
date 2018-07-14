#include "StackType.h"
#define NULL 0
StackType::StackType()
{
	MAX_ITEM = 100;
	Item_num = 0;
	head = NULL;
}

StackType::~StackType()
{
	for (int i = 0; i < Item_num; i++) {
		NodeType* free = head;
		head = head->next;
		delete free;
	}
}

void StackType::push(ItemType new_item)
{
	if (!is_full()) {
		NodeType* new_node = new NodeType();
		new_node->next = head;
		new_node->item = new_item;
		Item_num++;
		head = new_node;
	}
	else
		cout << "MAX_ITEM!!!\n";
}

void StackType::pop()
{
	if (Item_num > 0)
	{
		NodeType* temp = head;
		head = head->next;
		delete temp;
	}
}

bool StackType::is_full()
{
	return Item_num >= MAX_ITEM;
}

bool StackType::is_empty()
{
	return Item_num == 0;
}

ItemType StackType::top()
{
	return head->item;
}
