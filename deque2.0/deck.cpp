#include "deck.h"
//Дорофеев ИВТ-13
//Лабораторная работа №3
//Реализация дека и методов работы с ним при помощи статического массива.

//конструктор по умолчанию
deck::deck() {
	_size = 0;
	start = 0; 
	end = 0;
}
void deck::push_front(int n) {
	if (_size == SIZE) { 
		cout << "Deck is full\n"; 
	}
	else
		//когда размер = 0
		if (!_size) {
			storage[start] = n;
			_size++;
		}
		else
			//добавление второго элемента
			if (!start) {
			start = SIZE - 1;
			storage[start] = n;
			_size++;
			}
			//добавление каждого следующего
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
		//добавление первого элемента
		if (!_size) {
			storage[end] = n;
			_size++;
		}
		else
			//добавление второго элемента
			if (end==SIZE-1) {
				end = 0;
				storage[end] = n;
				_size++;
			}
			//добавление каждого следующего 
			else {
				end++;
				storage[end] = n;
				_size++;
			}
}
int deck::pop_front() {
	int b;
	//когда есть только один элемент
	if ((_size != 0) && (start == end)) {
		b = storage[start];
		_size--;
		return b; 
	}
	else
		//если дек пуст
		if (_size == 0) { 
			return -1;
		}
		else
		{
			b = storage[start];
			//если указатель на начало не может двигаться вперед
			if (start == SIZE - 1) { 
				start = 0;
				_size--;
			}
			//нормальный случай
			else {
				start++;
				_size--;
			}
			return b;
		}
}
int deck::pop_back() {
	int b;
	//если только один элемент
	if (_size != 0 && (start == end)) {
		b = storage[end];
		_size--;
		return b;
	}
	else
		//если дек пуст
		if (_size == 0) {
			return -1;
		}
		else
		{
			b = storage[end];
			//если нельзя двигать указатель конца влево
			if (end == 0) {
				end = SIZE - 1;
				_size--;
			}
			//нормальный случай
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
//приведение указателей в начальное положение без очистки памяти
void deck::clear() {
	start = end = 0;
	_size = 0;
}
void deck::print() {
	if (!_size) {
		cout << "deque is empty\n";
	}
	cout << "data:\n";
	//если указатель на начало меньше указателя на конец 
	if (start <= end) {
		for (int i = start; i <= end; i++) {
			cout << storage[i] << " ";
		}
		cout << endl;
	}
	//когда указатель на начало 
	else {
		//от начального указателя до конца массива
		for (int i = start; i < SIZE; i++)
			cout << storage[i] << " ";
		//от начала массива до конца дека
		for (int i = 0; i <= end; i++)
			cout << storage[i] << " ";
		cout << endl;
	}
}

