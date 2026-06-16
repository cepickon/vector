#pragma once

class OwnVector{
public:
	OwnVector();
	~OwnVector();
	void pushBack(int number);
	void popBack();
	void print();
	int operator[](int index);
	int size();
	void removeOnIndex(int index);
	int front();
	int back();
	void clear();
private:
	int* mArray;
	int mSize;
	int mAllocatedSize;
};
