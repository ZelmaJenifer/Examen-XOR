/*
 * claseXOR.cpp
 *
 *  Created on: 07/07/2017
 *      Author: Zelma Jenifer
 */

#include "claseXOR.h"

namespace std
{

claseXOR::claseXOR()
{
	// TODO Auto-generated constructor stub

}

claseXOR::~claseXOR()
{
	// TODO Auto-generated destructor stub
}

int claseXOR::XOR(int a, int b)
{
	if ((a == 0) && (b == 0))
		return 0;
	if ((a == 0) && (b == 1))
		return 1;
	if ((a == 1) && (b == 0))
		return 1;
	if ((a == 1) && (b == 1))
		return 0;
}

int claseXOR::principal()
{
	int Vector[N_MAX];
	int N, i, temp, q, L, R, Res, Zeros, j;

	cout << "Enter N -->";
	cin >> N;
	cout << endl;
	if ((N > N_MAX) || (N < 0))
	{
		cout << "Error: First argument must be between 0 and " << N_MAX << endl;
		return 1;
	}

	cout << "Enter vector -->";
	cout << endl;
	for (i = 0; i < N; i++)
	{
		cin >> temp;
		if ((temp != 0) && (temp != 1))
		{
			cout << "Error: Second line only can be 0 or 1" << endl;
			return 1;
		}
		Vector[i] = temp;
	}

	cout << endl;
	cout << "Enter how many queries-->";
	cin >> q;
	cout << endl;
	if ((q > N) || (q < 0))
	{
		cout << "Error: Third line must be between 0 and" << N << endl;
		return 1;
	}
	for (i = 0; i < q; i++)
	{
		cout << "Enter L -->";
		cin >> L;
		cout << endl;
		cout << "Enter R -->";
		cin >> R;
		cout << endl;
		if (L > R)
		{
			cout << "Error: Query number " << i + 1;
			cout << "L must be less than R" << endl;
			return 1;
		}
		if ((R > N_MAX) || (L > N_MAX) || (R < 0) || (L < 0))
		{
			 cout << "Error: Query number " << i + 1;
			 cout << "L and R must be between 0 and " << N_MAX << endl;
			 return 1;
		}
		if ((R - L) > N_MAX)
		{
			 cout << "Error: Query number " << i + 1;
			 cout << "R - L must less than " << N_MAX << endl;
			 return 1;
		}
		Zeros = !Vector[L - 1];
		Res = Vector[L - 1];
		for (j = L; j < R; j++)
		{
			Res = XOR(Res, Vector[j]);
			Zeros += (!Vector[j]);
		}
		cout << Res << " " << Zeros << endl;
	}
}


} /* namespace std */
