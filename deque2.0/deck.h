#pragma once
#define SIZE 100
#include<iostream>
//�������� ���-13
//������������ ������ �3
//���������� ���� � ������� ������ � ��� ��� ������ ������������ �������.
using namespace std;
class deck
{
public:
	void push_front(int n);//�������� �������
	void push_back(int n);//�������� �����
	int pop_front();//������� �������
	int pop_back();//������� �����
	int size();//�������� ������
	void clear();//�������� ���(����������� ��������� �� ������ ������
	void print();//������ ���� � ���� �� �����
private:
	int storage[SIZE];
	int _size = 0, start = 0, end = 0;
};

