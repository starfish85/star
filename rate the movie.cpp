#include <iostream>
using namespace std;
int main() {
	int score = 0;
	cout << "�����Ӱ���" << endl;
	cin >> score;
	cout << "������ķ���Ϊ" << score << endl;
	switch (score) {
	case 10:
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
	case 7:
		cout << "����Ϊ��Ӱ����" << endl;
		break;
	case 6:
	case 5:
				cout << "����Ϊ��Ӱһ��" << endl; 
				break;
	default:
		cout << "����Ϊ������Ƭ" << endl;
		break;
		
	}


	system("pause");
	return 0;
}