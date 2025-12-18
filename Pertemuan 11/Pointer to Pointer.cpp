#include <iostream>
using namespace std;

int main()
{
	int x = 3;
	int *ptrA = &x;
	int **ptrB = &ptrA;
	
	cout << **ptrB;
	return 0;
}
