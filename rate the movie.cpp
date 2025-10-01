#include <iostream>
using namespace std;
int main() {
	int score = 0;
	cout << "请给电影打分" << endl;
	cin >> score;
	cout << "您输入的分数为" << score << endl;
	switch (score) {
	case 10:
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
	case 7:
		cout << "您认为电影不错" << endl;
		break;
	case 6:
	case 5:
				cout << "您认为电影一般" << endl; 
				break;
	default:
		cout << "您认为这是烂片" << endl;
		break;
		
	}


	system("pause");
	return 0;
}