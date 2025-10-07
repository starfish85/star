#include <iostream>
using namespace std;
int main() {
	int arr[5];
	cout << "请输入第一只小猪体重：" << endl;
	cin >> arr[0];
	cout << "请输入第二只小猪体重：" << endl;
	cin >> arr[1];
	cout << "请输入第三只小猪体重：" << endl;
	cin >> arr[2];
	cout << "请输入第四只小猪体重：" << endl;
	cin >> arr[3];
	cout << "请输入第五只小猪体重：" << endl;
	cin >> arr[4];
	int max = arr[0];
	cout << "五只小猪的体重分别是：" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
		if (arr[i] > max) {
			max = arr[i];

		}
	}
	
	cout << "最重的小猪体重是：" << max << endl;



	system("pause");
	return 0;
}