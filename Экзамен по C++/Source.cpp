#include <stdio.h>
#include <iostream>
#include <clocale>
#include <Windows.h>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	
	//1
	/*int a, a4, a12, a28;
	cin >> a;
	a4 = a * a; //1
	a4 = a4 * a4; //2
	a12 = a4 * a4*a4; //3,4
	a28 = a12 * a12*a4; //5,6
	cout << " " << a4 << " " << a12 << " " << a28 << endl;*/

	//2
	/*int x;
	cin >> x;
	x = (x - 2)*(x - 4)*(x - 8)*(x - 16)*(x - 32)*(x - 64) / (x - 1)*(x - 3)*(x - 7)*(x - 21)*(x - 63);
	cout << x << endl;*/

	//4
	/*int n, l, m = 1, flag = 1,
		x1 = 0, x2 = 5;
	cout << "¬ведите n ";
	cin >> n;
	l = 0;
	while (flag)
	{
		if (((n % 10) != x1) && ((n % 10) != x2))
		{
			l += (n % 10) * m;
			m *= 10;
		}
		n /= 10;
		if (n <= 0) flag = 0;
	}

	cout << "n = " << l << endl;*/

	//6
	/*int i, j;
	const int n = 2;

	float A[n][9];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			cout << "A[" << i << ", " << j << "l = ";
			cin >> A[i][j];
		}
	}
	cout << "--- RESULT ---" << "\n\r";
	float summa;
	for (size_t i = 1; i < n; i+=2)
	{
		summa = 0;
		for (size_t j = 0; j < 9; j++)
		{
			summa += A[i][j];
		}
		cout << i << ": " << summa / 9 << "\n\r";
	}*/


	system("pause");
	return 0;
}