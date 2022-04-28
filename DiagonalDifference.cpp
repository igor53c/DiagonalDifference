// DiagonalDifference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int diagonalDifference(vector<vector<int>>);

int main()
{
	vector<vector<int>> vect{ {11,2,4 }, {4,5,6},{10,8,-12} };

	cout << diagonalDifference(vect) << endl;

}

int diagonalDifference(vector<vector<int>> arr) {

	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			if (i == j) sum1 += arr[i][j];
			if (i + j == arr.size() - 1) sum2 += arr[i][j];
		}
	}

	return abs(sum1 - sum2);
}
