#include <iostream>

using namespace std;


int MySwapValue(int i, int j)
{
	// TODO:
	int temp = i;
	j = i;
	i = temp;

	return 0;
}

void MySwapPtr(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
	// TODO:
}

void MySwapRef(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
	// TODO:
}


void myswap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

bool CheckSorted(int& a, int& b)
{
	return (a <= b);
}

int main()
{
	// Swap
	{
		int a = 3;
		int b = 2;

		cout << a << " " << b << endl;

		// TODO:
		int temp = a;
		a = b;
		b = temp;

		cout << a << " " << b << endl;
	}


	// 정렬(sorting)
	{
		int arr[] = { 9, 3 };

		cout << arr[0] << " " << arr[1] << endl;

		// TODO:
		if (arr[0] > arr[1])
			MySwapRef(arr[0], arr[1]);

		cout << arr[0] << " " << arr[1] << endl;
	}

	// 값과 상관 없이 항상 작은 값이 먼저 출력되게 하려면?
	// 두 값이 같을 때는 순서가 상관 없음 -> 큰 값이 먼저 출력되지 않게 하려면?
	{
		int arr[2];

		for (int j = 0; j < 5; j++)
		{
			for (int i = 0; i < 5; i++)
			{
				arr[0] = i;
				arr[1] = j;

				if (arr[0] > arr[1])
				{
					myswap(arr[0], arr[1]);
				}

				cout << boolalpha;
				cout << arr[0] << " " << arr[1] << " " <<
					CheckSorted(arr[0], arr[1]) << endl;

			}
		}
	}

	return 0;
}
