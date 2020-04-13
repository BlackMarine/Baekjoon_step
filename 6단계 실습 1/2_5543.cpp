#include<iostream>
//#include<algorithm>
using namespace std;

int main() {

	int a[3] = { 0 };
	int b[2] = { 0 };
	int i, j, temp;
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 2; i++) {
		cin >> b[i];
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}for (i = 0; i < 2; i++) {
		for (j = 0; j < 1 - i; j++) {
			if (b[j] > b[j + 1]) {
				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}

	sum = a[0] + b[0] - 50;
	cout << sum << endl;

}
