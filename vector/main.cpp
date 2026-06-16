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
	std::cout << "PopBack ";
	ownV.popBack();
	ownV.print();
	std::cout << "Size " << ownV.size() << std::endl;
	std::cout << "Remove on index ";
	ownV.removeOnIndex(1);
	ownV.print();
	std::cout << "First index " << ownV.front() << std::endl;
	std::cout << "Last index " << ownV.back() << std::endl;
	ownV.clear();
	ownV.print();
}
