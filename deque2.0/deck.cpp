#include "deck.h"
class deck
{
private:
	int storage[SIZE];
	int _size = 0, start = 0, end = 0;
public:
	void push_front(int n) {
		if (_size == SIZE) { 
			cout << "Deck is full\SIZE"; 
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
	void push_back(int n) {
		if (_size == SIZE) {
			cout << "Deck is full\SIZE";
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
	int pop_front() {
		int b;
		if (size != 0 && (start == end)) {
			b = storage[start];
			_size--;
			return b; 
		}
		else
			if (size == 0) { 
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
	int pop_back() {
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
	int size() { 
		return _size;
	}
	void clear() {
		start = end = 0;
		_size = 0;
	}
};

