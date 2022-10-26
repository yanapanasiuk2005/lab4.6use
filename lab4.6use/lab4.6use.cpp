
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double S;
	int k, i;
	S = 1;
	k = 1;
	i = 0;
	while (i <= 20)

	{
		S = 0;
		i = 1;
		while (i <= k)

		{
			S += cos(i + k);
			i++;

		}
		S += sqrt(sin(k) * sin(k) + abs(S += cos(i + k)));
		k++;

	}
	cout << S << endl;
	S = 1;
	k = 1;
	do
	{
		S = 0;
		i = 1;
		do
		{
			S += cos(i + k);
			i++;
		} while (i <= k);
		S += sqrt(sin(k) * sin(k) + abs(S += cos(i + k)));
		k++;
	} while (k <= 20);
	cout << S << endl;
	S = 1;
	for (k = 1; k <= 20; k++)

	{
		S = 0;
		for (i = 1; i <= k; i++)

		{
			S += cos(i + k);

		}
		S += sqrt(sin(k) * sin(k) + abs(S += cos(i + k)));

	}
	cout << S << endl;
	S = 1;
	for (k = 20; k >= 1; k--
		)

	{
		S = 1;
		for (i = k; i >= 1; i--
			)

		{
			S += cos(i + k);

		}
		S += sqrt(sin(k) * sin(k) + abs(S += cos(i + k)));
	}
	cout << S << endl;
	return 0;
}
