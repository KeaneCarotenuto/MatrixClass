#include <cmath>;
#include <windows.h>;
#include <string>;
#include <iostream>;

#include"CMatrix3.h";

using namespace std;

int main()
{

	CMatrix3 mat_A( 1, 2, 3,
				    4, 5, 6,
				    7, 8, 9);

	CMatrix3 mat_B(-2, 6, 11,
		           -7, 1, 0,
		            3, 1, 5);

	string name;

	cout << "Enter Name: ";

	getline(cin, name);

	cout << "Hello " << name << "!";

	cout << endl;
	CMatrix3 res;

	cout << CMatrix3::Add(mat_A, mat_B, res).GetElement(1,1);



	cout << endl << endl << "Press <ENTER> to exit...";
	name = getchar();

	return 0;
};