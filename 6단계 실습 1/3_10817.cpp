#include<iostream>

using namespace std;

int main() {

	int num[3];
	cin >> num[0]>> num[1]>> num[2];

    int i, j, temp;

	for (i = 0; i < 3; i++) { 
		for (j = 0; j < 2 - i; j++) { 
			if (num[j] > num[j + 1]) { 
				temp = num[j]; 
				num[j] = num[j + 1]; 
				num[j + 1] = temp; 
			} 
		} 
	}
	cout << num[1] << endl;


}
