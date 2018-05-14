#pragma once
#include <iostream>
using namespace std;
template <typename T>
class array_{
private:
	T*els;
	size_t n;
public:
	array_(int size) {
		n = size;
		els = new T[n];
	}

	array_(const array_&arr) {
		n = arr.n;
		els = new T[n];
	
		for (int i = 0; i < n; i++)
		{
			els[i] = arr.els[i];
		}

	}

	template <typename T>
	friend ostream& operator <<(ostream &os, array_<T> a);
	template <typename T>
	friend istream& operator >>(istream &is,  array_<T> &a);

	~array_() {
		delete[] els;
	}
};