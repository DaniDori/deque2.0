#include "deck.h"
//Дорофеев ИВТ-13
//Лабораторная работа №3
//Реализация дека и методов работы с ним при помощи статического массива.
void deck::push_front(int n) {
	if (_size == SIZE) { 
		cout << "Deck is full\n"; 
	}
	else
		if (!_size) {//когда размер = 0
			storage[start] = n;
			_size++;
		}
		else
			if (!start) {//добавление второго элемента
			start = SIZE - 1;
			storage[start] = n;
			_size++;
			}
			else {//добавление каждого следующего
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
		if (!_size) {//добавление первого элемента
			storage[end] = n;
			_size++;
		}
		else
			if (end==SIZE-1) {//добавление второго элемента
				end = 0;
				storage[end] = n;
				_size++;
			}
			else {//добавление каждого следующего 
				end++;
				storage[end] = n;
				_size++;
			}
}
int deck::pop_front() {
	int b;
	if ((_size != 0) && (start == end)) {//когда есть только один элемент
		b = storage[start];
		_size--;
		return b; 
	}
	else
		if (_size == 0) { //если дек пуст
			return -1;
		}
		else
		{
			b = storage[start];
			if (start == SIZE - 1) { //если указатель на начало не может двигаться вперед
				start = 0;
				_size--;
			}
			else {//нормальный случай
				start++;
				_size--;
			}
			return b;
		}
}
int deck::pop_back() {
	int b;
	if (_size != 0 && (start == end)) {//если только один элемент
		b = storage[end];
		_size--;
		return b;
	}
	else
		if (_size == 0) {//если дек пуст
			return -1;
		}
		else
		{
			b = storage[end];
			if (end == 0) {//если нельзя двигать указатель конца влево
				end = SIZE - 1;
				_size--;
			}
			else {//нормальный случай
				end--;
				_size--;
			}
			return b;
		}
}
int deck::size() {
	return _size;
}
void deck::clear() {//приведение указателей в начальное положение без очистки памяти
	start = end = 0;
	_size = 0;
}
void deck::print() {
	if (!_size) {
		cout << "deque is empty\n";
	}
	cout << "data:\n";
	if (start <= end) {//если указатель на начало меньше указателя на конец 
		for (int i = start; i <= end; i++) {
			cout << storage[i] << " ";
		}
		cout << endl;
	}
	else {//когда указатель на начало 
		for (int i = start; i < SIZE; i++)//от начального указателя до конца массива
			cout << storage[i] << " ";
		for (int i = 0; i <= end; i++)//от начала массива до конца дека
			cout << storage[i] << " ";
		cout << endl;
	}
}

