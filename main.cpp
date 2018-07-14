#include<iostream>
#include"StackType.h"
#include<random>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));
	StackType stacks;
	stacks.push(10);
	for (int i = 0; i < 100; i++) {
		stacks.push(rand()%(i + 40));
	}
	
	cout << stacks.top();
	

	return 0;
}