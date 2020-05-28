#include "deck.h"
//Дорофеев ИВТ-13
//Лабораторная работа №3
//Реализация дека и методов работы с ним при помощи статического массива.
void deck::push_front(int n) {
	if (_size == SIZE) { 
		cout << "Deck is full\n"; 
	}
	else
		if (!_size) {
			storage[start] = n;
			_size++;
		}
		else
			if (!start) {
			start = SIZE - 1;
			storage[start] = n;
			_size++;
			}
			else {
				start--;
				storage[start] = n;
				_size++;
			}
}
void deck::push_back(int n) {
	if (_size == SIZE) {
		cout << "Deck is full\n";
	}
	else
		if (!_size) {
			storage[end] = n;
			_size++;
		}
		else
			if (end==SIZE-1) {
				end = 0;
				storage[end] = n;
				_size++;
			}
			else {
				end++;
				storage[end] = n;
				_size++;
			}
}
int deck::pop_front() {
	int b;
	if ((_size != 0) && (start == end)) {
		b = storage[start];
		_size--;
		return b; 
	}
	else
		if (_size == 0) { 
			return -1;
		}
		else
		{
			b = storage[start];
			if (start == SIZE - 1) { 
				start = 0;
				_size--;
			}
			else {
				start++;
				_size--;
			}
			return b;
		}
}
int deck::pop_back() {
	int b;
	if (_size != 0 && (start == end)) {
		b = storage[end];
		_size--;
		return b;
	}
	else
		if (_size == 0) {
			return -1;
		}
		else
		{
			b = storage[end];
			if (end == 0) {
				end = SIZE - 1;
				_size--;
			}
			else {
				end--;
				_size--;
			}
			return b;
		}
}
int deck::size() {
	return _size;
}
void deck::clear() {
	start = end = 0;
	_size = 0;
}
void deck::print() {
	cout << "data:\n";
	if (start < end) {
		for (int i = start; i <= end; i++) {
			cout << storage[i] << " ";
		}
		cout << endl;
	}
	else {
		for (int i = start; i < SIZE; i++)
			cout << storage[i] << " ";
		for (int i = 0; i <= end; i++)
			cout << storage[i] << " ";
		cout << endl;
	}
}

