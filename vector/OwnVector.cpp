#include "OwnVector.h"
#include <iostream>

OwnVector::OwnVector() : mArray(nullptr), mSize(0), mAllocatedSize(0) {}
OwnVector::~OwnVector(){
	if (mArray != nullptr) {
		delete mArray;
	}
}
void OwnVector::pushBack(int number){
    if (mArray == nullptr){
        mAllocatedSize = 1;
        mArray = new int[mAllocatedSize];
    }
    if (mSize < mAllocatedSize){
        mArray[mSize] = number;
        mSize++;
    }
    else{
        mAllocatedSize *= 2;
        int* newArr = new int[mAllocatedSize];
        for (int i = 0; i < mSize; i++){
            newArr[i] = mArray[i];
        }
        delete[] mArray;
        mArray = newArr;
        mArray[mSize] = number;
        mSize++;
    }
}
void OwnVector::popBack(){
   if (mSize > 0){
        mSize--;
   }
   if(mSize < mAllocatedSize / 4){
        mAllocatedSize /= 2;
        int* newArr = new int[mAllocatedSize];
        for (int i = 0; i < mSize; i++){
            newArr[i] = mArray[i];
        }
        delete[] mArray;
        mArray = newArr;
   }
}
void OwnVector::print(){
	for (int i = 0; i < mSize; ++i) {
		std::cout << mArray[i] << " ";
	}
	std::cout << std::endl;
}
int OwnVector::operator[](int index){
    return mArray[index];
}
void OwnVector::removeOnIndex(int index){
    if (index >= 0 && index < mSize){
        for (int i = index; i < mSize - 1; i++){
            mArray[i] = mArray[i + 1];
        }
        mSize--;
    }
}
