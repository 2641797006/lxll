#include <iostream>
#include "matrix.h"
using namespace std;
using namespace akm;

int main()
{
	Matrix<double> m1({
		{1, 2, 3},
		{2, 2, 1},
		{3, 4, 3}
	}), m2(3,3);
	m2.E();

	cout<<m1<<m2<<endl;

	m2 /= m1;

	cout<<m1<<m2<<endl;
}

