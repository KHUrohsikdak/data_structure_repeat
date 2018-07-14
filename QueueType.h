#pragma once
#include"NodeType.h"

class QueueType
{
public:
	QueueType();
	~QueueType();
	void Enqueue(ItemType);
	ItemType Dequeue();
	bool is_Full() { return length > MAX_LENGTH; }
	bool is_Empty() { return length <= 0; }
private:
	NodeType * head;
	NodeType * tail;
	int MAX_LENGTH;
	int length;
};
