#include<iostream>
#include<random>
#include<time.h>
#include"StackType.h"
#include"QueueType.h"
using namespace std;

int main() {
	srand(time(NULL));
	QueueType q;

	for (int i = 0; i < 100; i++)
		q.Enqueue(rand() % (i + 40));
	
	while (!q.is_Empty()) {
		cout << q.Dequeue() << ", ";
	}

	for (int i = 0; i < 10; i++)
		q.Enqueue(rand() % (i + 40));

	return 0;
}