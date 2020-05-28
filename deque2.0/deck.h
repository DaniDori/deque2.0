#pragma once
#define SIZE 100
#include<iostream>
//Дорофеев ИВТ-13
//Лабораторная работа №3
//Реализация дека и методов работы с ним при помощи статического массива.
using namespace std;
class deck
{
public:
	void push_front(int n);//добавить спереди
	void push_back(int n);//добавить сзади
	int pop_front();//забрать спереди
	int pop_back();//забрать сзади
	int size();//получить размер
	void clear();//очистить дек(переместить указатели на начало работы
	void print();//печать дека с лево на право
private:
	int storage[SIZE];
	int _size = 0, start = 0, end = 0;
};

