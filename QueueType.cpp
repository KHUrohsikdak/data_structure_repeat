#include"QueueType.h"
#include<iostream>
using namespace std;
QueueType::QueueType()
{
	head = nullptr;
	tail = nullptr;
	MAX_LENGTH = 500;
	length = 0;
}

QueueType::~QueueType()
{
	for (int i = 0; i < length; i++) {
		NodeType* walker = head;
		head = head->next;
		delete walker;
	}
}

void QueueType::Enqueue(ItemType new_item)
{
	if (!is_Full()) {
		if (head != nullptr) {
			NodeType* new_node = new NodeType();
			new_node->item = new_item;
			tail->next = new_node;
			new_node->next = nullptr;
			tail = new_node;
			length++;
		}
		else {
			head = new NodeType();
			head->item = new_item;
			tail = head;
			head->next = nullptr;
			length++;
		}
	}
	else
		cerr << "MAX_ITEM!!!!" << endl;
}

ItemType QueueType::Dequeue()
{
	if (!is_Empty()) {
		ItemType result = head->item;
		NodeType* temp = head;
		head = head->next;
		delete temp;
		length--;
		return result;
	}
	else
		cerr << "Empty Queue!!" << endl;
}
