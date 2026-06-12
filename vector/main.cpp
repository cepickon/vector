#include <iostream>
#include "OwnVector.h"

int main(){
	OwnVector ownV;
	ownV.pushBack(1);
	ownV.pushBack(2);
	ownV.pushBack(3);
	ownV.pushBack(4);
	ownV.pushBack(5);
	ownV.print();
	std::cout << "Element at index 2: " << ownV[2] << std::endl;
	ownV.popBack();
	ownV.print();
}