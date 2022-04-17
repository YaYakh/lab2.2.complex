using namespace std;
#include <iostream>
#include "complex.h"


int main()
{
	int pwr = 0;
	TComplex a;
	TComplex b(1);
	TComplex c(2, 3);
	TComplex d(b);

	TComplex tst;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "Copying b in d: " << "d = " << d << endl;

	cout << "\nEnter a: " << endl;
	cin >> a;
	cout << "a = " << a << endl;

	tst = b + c;
	cout << "\n+ : b + c = (" << a << ") + (" << c << ") = " << tst << endl;

	tst = a - c;
	cout << "\n- : a - c = (" << a << ") - (" << c << ") = " << tst << endl;

	tst = a * c;
	cout << "\n* : a * c = (" << a << ") * (" << c << ") = " << tst << endl;

	tst = a / c;
	cout << "\n/ : a * c = (" << a << ") / (" << c << ") = " << tst << endl;

	cout << "\n= : " << endl;
	cout << "d = " << d << "\t\ta = " << a << "\nd = a" << endl;
	d = a;
	cout << "d = " << d << "\t\ta = " << a << endl;

	cout << "\n== : a == c" << endl;
	if (a == c)
	{
		cout << "True" << endl;
	}
	if (a != c)
	{
		cout << "False" << endl;
	}

	cout << "\nModule: c" << endl;
	cout << "Module c = " << c.Mdl() << endl;

	return 0;
}