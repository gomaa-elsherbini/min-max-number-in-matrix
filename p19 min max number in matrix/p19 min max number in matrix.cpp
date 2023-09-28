#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void fill3X3MatrixWithRandomNumbers(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = RandomNubers(1, 100);
		}
	}
}

void printMatrix3X3(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			cout << setw(3) << arr[i][x] << "	";
			//printf("  %d ", arr[i][x]);
		}
		cout << endl;
	}
	cout << endl;
}

int MaxNumberInMatrix(int arr[3][3], int Rows, int Colos)
{
	int max = arr[0][0];
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			if (arr[i][x] > max)
				max = arr[i][x];
		}
	}
	return max;
}
int MinNumberInMatrix(int arr[3][3], int Rows, int Colos)
{
	int min = arr[0][0];
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			if (arr[i][x] < min)
				min = arr[i][x];
		}
	}
	return min;
}

void printMinMaxNumberOfMatrix(int arr[3][3],int Rows, int Colos)
{
	cout << "Maxmum number is: " << MaxNumberInMatrix(arr, Rows, Colos) << endl;
	cout << "Minmum number is: " << MinNumberInMatrix(arr, Rows, Colos) << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[3][3];

	//int arr[3][3] = { {2,0,0},{0, 2, 0},{0, 0, 2} };
	fill3X3MatrixWithRandomNumbers(arr1, 3, 3);

	cout << " The Matrix is: \n";
	printMatrix3X3(arr1, 3, 3);

	printMinMaxNumberOfMatrix(arr1, 3, 3);





	return 0;
}



