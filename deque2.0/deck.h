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
	deck();
	void push_front(int n);//�������� �������
	void push_back(int n);//�������� �����
	int pop_front();//������� �������
	int pop_back();//������� �����
	int size();//�������� ������
	void clear();//�������� ���(����������� ��������� �� ������ ������
	void print();//������ ���� � ���� �� �����
private:
	int start, end, _size;
	int storage[SIZE];
};

