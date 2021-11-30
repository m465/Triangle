#include<iostream>
using namespace std;
int main() {
	int num, count, n;
	char ch = 97;
	cout << "Enter number :";
	cin >> n;
	for (count = n; count >= 1; count--) {
		for (int i = 1; i <= count; i++) {
			cout << ch;
			ch++;
		}
		ch = 97;
		cout << endl;
	}
	system("pause");
	return 0;
}
