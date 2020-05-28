#include"deck.h"
int main() {
	deck d;
	int n = 1, x;
	while (n) {
		{
			cout << "1 - to push back\n2 - to push front\n3 - to pop back\n4 - to pop front\n5 - to see size of deque\n6 - to clear deque\n0 - to end work\n";

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
				if (x = d.pop_back())
					cout << "data:" << endl << x << endl;
				break;
			case 4:
				if (x = d.pop_front())
					cout << "data:" << endl << x << endl;
				break;
			case 5:
				cout << "deck size = " << d.size() << endl;
				break;
			case 6:
				d.clear;
				cout << "deck is clear";
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