#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {

	int size;
	cin >> size;
	int *arr = new int[size];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << *min_element(arr, arr + size);
	cout << " ";
	cout << *max_element(arr, arr + size);

}