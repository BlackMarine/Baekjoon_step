//1번
#include <iostream>
using namespace std;

int main(void)
{
	cout << "Hello World!" << endl;
	return 0;
}

//2번
#include<iostream>

using namespace std;

int main(void) {

	cout << "강한친구 대한육군" << endl;
	cout << "강한친구 대한육군" << endl;
	return 0;
}
//3번
#include<iostream>

using namespace std;

int main(void) {

	cout << "\\    /\\\n )  ( ')\n(  /  )\n \\(__)|" << endl;
	return 0;
}

// 4번

//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//	cout << "|\\_/|" << endl;
//	cout << "|q p|   /}" << endl;
//	cout << "( 0 )\"\"\"\\" << endl;
//	cout << "|\"^\"`    |" << endl;
//	cout << "||_/=\\\\__|" << endl;
//	return 0;
//}

//5번

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//	cin >> a;
//	cin >> b;
//	c = a + b;
//	cout << c << endl;
//
//
//}

//6번
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	c = a - b;
	cout << c << endl;


}

//7번
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	c = a * b;
	cout << c << endl;
}

//8번
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	double a, b;
//	cin >> a>>b;
//	cout.precision(15);
//	cout << a / b;
//	
//}

// 9번
#include <iostream>

using namespace std;
int main() {
	int a, b;
	cout.precision(15);
	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;

}

//10번
#include <iostream>

using namespace std;
int main() {
	int a, b, c;

	cin >> a >> b >> c;
	if (a < 2 || b >10000 || c > 10000)
		return 0;

	cout << (a + b) % c << endl;
	cout << ((a % c) + (b % c)) % c << endl;
	cout << (a * b) % c << endl;
	cout << ((a % c) * (b % c)) % c << endl;

	return 0;
}

//11번
#include <iostream>

using namespace std;
int main() {
	int a, b;

	cin >> a >> b;
	if (a < 100 || b < 100 || a > 1000 || b > 1000)
		return 0;

	cout << a * ((b % 100)%10) << endl;
	cout << a * ((b % 100)/10) << endl;
	cout << a * (b /100)  << endl;
	cout << a*b << endl;
	return 0;
}


