#include"deck.h"
//Дорофеев ИВТ-13
//Лабораторная работа №3
//Реализация дека и методов работы с ним при помощи статического массива.
int main() {
	deck d;
	int n = 1, x;
	while (n) {
		{
			cout << "1 - to push back\n2 - to push front\n3 - to pop back\n4 - to pop front";
			cout << "\n5 - to see size of deque\n6 - to clear deque\n7 - to print deque0 - to end work\n";

			if (!(cin >> n)) {

				cout << "wrong data!";
				return 0;
			}
			if (!n)
				return 0;
			switch (n) {
			case 1:
				cout << "Enter data\n";
				if (!(cin >> x)) {
					cout << "wrong data!";
					return 0;
				}
				d.push_back(x);
				break;
			case 2:
				cout << "Enter data\n";
				if (!(cin >> x)) {
					cout << "wrong data!";
					return 0;
				}
				d.push_front(x);
				break;
			case 3:
				if ((x = d.pop_back())!=-1)
					cout << "data:" << endl << x << endl;
				else
					cout << "deque is empty!\n";
				break;
			case 4:
				if ((x = d.pop_front()) != -1)
					cout << "data:" << endl << x << endl;
				else
					cout << "deque is empty!\n";
				break;
			case 5:
				cout << "deck size = " << d.size() << endl;
				break;
			case 6:
				d.clear();
				cout << "deck is clear";
				break;
			case 7:
				d.print();
				break;
			default:
				cout << "wrong data!";
				break;
			}
			getchar();
			cout << "Press any key to continue";
			getchar();
			system("CLS");
		}
	}
}