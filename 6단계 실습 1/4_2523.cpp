#include<iostream>

using namespace std;

int main() {

	int i, j, num1;
	cin >> num1;
	num1 = 2 * num1 - 1;
	for (i = 0; i < num1; i++) {
		if(i<num1 / 2){
			for (j = 0; j < i + 1; j++) {
				cout << "*";
			}
		}
		else {
			for (j = 0; j < num1 - i; j++) {
				cout << "*" ;
			}
		}
		cout << "\n";
	}
}
