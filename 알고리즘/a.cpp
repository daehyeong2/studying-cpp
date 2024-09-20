#include <bits/stdc++.h>
using namespace std;

int main(){
	int y;
	bool isFirst = true;

	while (true) {
		string bar = "--------------------------------\n";
		char choice = 'x';
		while (choice != 'y' && choice != 'n') {
			if (isFirst) {
				cout << bar << "피라미드를 생성하시겠습니까? (y/n): ";
			}
			else {
				cout << bar << "피라미드를 한번 더 생성하시겠습니까? (y/n): ";
			}
			cin >> choice;
		}

		if (choice == 'n') {
			break;
		}

		cout << bar << "생성할 피라미드의 층수를 입력해 주세요: ";
		cin >> y;
		cout << bar;
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < ( y - 1 ) - i; j++){
				cout << "  ";
			}
			for (int j = 0; j < 1 + i * 2; j++){
				cout << "* ";
			}
			cout << endl;
		}
		cout << bar << "생성 완료!" << endl;
		isFirst = false;
	}
	return 0;
}