#include <iostream>
using namespace std;
int main() {
	int arr[5];
	cout << "�������һֻС�����أ�" << endl;
	cin >> arr[0];
	cout << "������ڶ�ֻС�����أ�" << endl;
	cin >> arr[1];
	cout << "���������ֻС�����أ�" << endl;
	cin >> arr[2];
	cout << "���������ֻС�����أ�" << endl;
	cin >> arr[3];
	cout << "���������ֻС�����أ�" << endl;
	cin >> arr[4];
	int max = arr[0];
	cout << "��ֻС������طֱ��ǣ�" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
		if (arr[i] > max) {
			max = arr[i];

		}
	}
	
	cout << "���ص�С�������ǣ�" << max << endl;



	system("pause");
	return 0;
}