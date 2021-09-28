#include <iostream>

using namespace std;

int main()
{
	double x;
	double y;
	double R;


	cout << "X = ";
	cin >> x;

	cout << endl;

	cout << "Y = ";
	cin >> y;

	cout << endl;

	cout << "R = ";
	cin >> R;

	cout << endl;


	if ((y <= sqrt(pow(R, 2) - pow(x, 2))) && y >= 0 && x >= 0 ||
		(y <= 0) && (y >= (-R / R) * (x + R)) && x <= 0)
		cout << "Yes";
	else
		cout << "No";


	system("pause");
	return 0;
}
