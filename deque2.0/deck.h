#pragma once
#define SIZE 100
#include<iostream>
using namespace std;
class deck
{
private:
	int storage[SIZE];
	int _size = 0, start=0, end=0;
public:
	void push_front(int n);
	void push_back(int n);
	int pop_front();
	int pop_back();
	int size();
	void clear();
};

