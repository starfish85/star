#include <iostream>
using namespace std;
int main() {
	int A = 0;
	int B = 0;
	int C = 0;
	cout << "������С��A����" << endl;
	cin >> A;
	cout << "������С��B����" << endl;
	cin >> B;
	cout << "������С��C����" << endl;
	cin >> C;



	cout << "С��A����Ϊ��" << A << endl;
	cout << "С��B����Ϊ��" << B << endl;
	cout << "С��C����Ϊ��" << C << endl;

	if (A > B) {
		if (A > C) { cout << "A����" << endl; }
		else {
			cout << "C����" << endl;
		}
	}
	else if (A > C) {
		if (A > B) { cout << "A����" << endl; }
		else {
			cout << "B����" << endl;
		}

	}
	else if (B > A) {
		if (B > C) { cout << "B����" << endl; }
		else { cout << "C����" << endl; }
	}
	else {
		if (B > A) { cout << "B����" << endl; }
		else {
			cout << "A����" << endl;
		}
	}




	system("pause");
	return 0;
}