#pragma once

#include <iostream>

class String
{
private:
	char* strok;
	int size;
	static int count;
public:
	String() {
		size = 80;
		strok = new char[size];
		count++;
	}
	String(int size) {
		this->size = size;
		strok = new char[size + 1];
		count++;
	}
	String(char* strok) {
		size = strlen(strok);
		this->strok = new char[size + 1];
		for (int i = 0; i < size; i++) {
			this->strok[i] = strok[i];
		}
		this->strok[size] = '\0';
		count++;
	}
	~String() {
		delete[] strok;
	}
	void edit(int size) {
		this->size = size;
		delete[] strok;
		strok = new char[size + 1];
	}
	void edit(char* strok) {
		delete[] this->strok;
		size = strlen(strok);
		this->strok = new char[size + 1];
		for (int i = 0; i < size; i++) {
			this->strok[i] = strok[i];
		}
		this->strok[size] = '\0';
	}
	int get_size() {
		return size;
	}
	char* get_String() {
		return strok;
	}
	void print_String() {
		std::cout << strok;
	}
	static int getCount() {
		return count;
	}
};