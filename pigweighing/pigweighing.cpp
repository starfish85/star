#include <iostream>
using namespace std;
int main() {
	int A = 0;
	int B = 0;
	int C = 0;
	cout << "请输入小猪A体重" << endl;
	cin >> A;
	cout << "请输入小猪B体重" << endl;
	cin >> B;
	cout << "请输入小猪C体重" << endl;
	cin >> C;



	cout << "小猪A体重为：" << A << endl;
	cout << "小猪B体重为：" << B << endl;
	cout << "小猪C体重为：" << C << endl;

	if (A > B) {
		if (A > C) { cout << "A最重" << endl; }
		else {
			cout << "C最重" << endl;
		}
	}
	else if (A > C) {
		if (A > B) { cout << "A最重" << endl; }
		else {
			cout << "B最重" << endl;
		}

	}
	else if (B > A) {
		if (B > C) { cout << "B最重" << endl; }
		else { cout << "C最重" << endl; }
	}
	else {
		if (B > A) { cout << "B最重" << endl; }
		else {
			cout << "A最重" << endl;
		}
	}




	system("pause");
	return 0;
}