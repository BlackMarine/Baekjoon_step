#include<iostream>

using namespace std;

int main() {

	int a, b;
	cin >> a >> b;
	if (a > 0) {
		if (b > 0)
			cout << "1" << endl;
		else if (b < 0)
			cout << "4" << endl;
		else
			return 0;
	}
	if (a < 0) {
		if (b > 0)
			cout << "2" << endl;
		else if (b < 0)
			cout << "3" << endl;
		else
			return 0;
	}
}
