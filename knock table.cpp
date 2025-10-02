#include <iostream>
using namespace std;
int main() {
	
	for (int num = 0; num <= 100; num++) {
		
		if (num % 7 == 0 || num % 10 == 7 || num / 10 % 10 == 7) 
		{
       cout << "ÇÃ×À×Ó" << endl;
		}
		else { cout << num << endl; }
		
		
	}

	system("pause");
	return 0;
}