#pragma once

class OwnVector{
public:
	OwnVector();
	~OwnVector();
	void pushBack(int number);
	void popBack();
	void print();
	void removeOnIndex(int index);
	int operator[](int index);
private:
	int* mArray;
	int mSize;
	int mAllocatedSize;
};
