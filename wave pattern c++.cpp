#include <iostream>
using namespace std;

void pattern(int wave_height, int wave_length)
{
	int i, j, k, e, n, count, x;
	e = 2;
	x = 1;

	for (i = 0; i < wave_height; i++) {

		for (j = wave_height; j <= wave_height + i; j++)
			cout << " ";	

		for (count = 1; count <= wave_length; count++) {
			for (n = (wave_height + wave_height - 2); n >= x; n--)
				cout << " ";
			for (k = 1; k <= e; k++) {
				if (k == 1)
					cout << "/";
				else if (k == e)
					cout << "\\";
				else
					cout << " ";
			}
		}

		x = x + 2;
		e = e + 2;
		cout << endl;
	}
}

int main()
{
	int wave_height = 4;
	int wave_length = 4;

	pattern(wave_height, wave_length);

	return 0;
}
