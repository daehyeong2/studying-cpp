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
				cout << bar << "�Ƕ�̵带 �����Ͻðڽ��ϱ�? (y/n): ";
			}
			else {
				cout << bar << "�Ƕ�̵带 �ѹ� �� �����Ͻðڽ��ϱ�? (y/n): ";
			}
			cin >> choice;
		}

		if (choice == 'n') {
			break;
		}

		cout << bar << "������ �Ƕ�̵��� ������ �Է��� �ּ���: ";
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
		cout << bar << "���� �Ϸ�!" << endl;
		isFirst = false;
	}
	return 0;
}