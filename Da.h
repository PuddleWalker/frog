#pragma once

#include <iostream>

class String
{
private:
	char* strok;
	int size;
public:
	String() {
		size = 80;
		strok = new char[size];
	}
	String(int size) {
		this->size = size;
		strok = new char[size + 1];
	}
	String(char* strok) {
		size = strlen(strok);
		this->strok = new char[size + 1];
		for (int i = 0; i < size; i++) {
			this->strok[i] = strok[i];
		}
		this->strok[size] = '\0';
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
};