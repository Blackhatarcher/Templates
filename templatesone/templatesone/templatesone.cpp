// templatesone.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iomanip>
using namespace std;

template <typename T>
void Swap(T & v1, T & v2) {
	T temp = v1;
	v1 = v2;
	v2 = temp;
}
template <typename T>
int* doubleCapacity(const T* list, int size) {
	if (size > 0 && list != NULL) {
		T* newlist = new T[size * 2];
		for (int i = 0; i < size; i++) {
			newlist[i] = list[i];
		}
		delete[] list;
		return newlist;
	}
	else {
		return NULL;
	}
}
template <typename T>
class ExpandableArray {
private:
	T* items;
	int length;
	int size;
	void increaseSizeTo(int newSize) {
		T* newList = new newSize[];
	}
public:
	ExpandableArray() {
		size = 10;
		length = 0;
		items = new T[size];
	}
	int getLength() {
		return length;
	}
	void append(T item) {
		if (length >= size) {
			doubleCapacity();
		}
		items[length] = item;

	}
	T getAtIndex(int index);
	void setItemAtIndex(T item, int index);
	void output();
};
int main()
{
	bool playing = true;
	while (playing) {
		double x = 8.8;
		double y = 90.0;

		cout << x << endl;
		cout << y << endl;

		Swap(x, y);

		cout << x << endl;
		cout << y << endl;

		ExpandableArray<int> sArray;
		for (int i = 0; i < 200; i++) {
			sArray.append(i);
		}
		sArray.output();

		int finalanswer = 0;
		cout << "Enter 1 to exit" << endl;
		cin >> finalanswer;
		if (finalanswer == 1) {
			playing = false;
		}
	}
	return 0;
}

