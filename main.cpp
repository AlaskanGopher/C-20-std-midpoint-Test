#include <numeric>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void new_method();
void old_method();

int main()
{
	cout << "Old Method: " << endl << endl;
	old_method();
	cout << endl << endl;
	cout << "New Method: " << endl << endl;
	new_method();
	cout << endl << endl;
	return 0;
}

void new_method()
{
	float x, y;
	cout << "Lets find the midpoint of 2 numbers" << endl;
	cout << "First Value: ";
	cin >> x;
	cout << endl;
	cout << "Second Value: ";
	cin >> y;
	cout << endl;
	cout << std::midpoint(x, y) << endl;
}


void old_method()
{
	float x, y;
	cout << "Lets find the midpoint of 2 numbers" << endl;
	cout << "First Value: ";
	cin >> x;
	cout << endl;
	cout << "Second Value: ";
	cin >> y;
	cout << endl;
	cout << (x + y) / 2 << endl;
}