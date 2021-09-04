#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	//n+5 is kept just to avoid any segmentation errors,
	//this is not necessary;
	vector<int> A(n + 5, 0);

	//long long is used as the constraints that the question has
	//on the numbers, the sum might exceed the upper limit of int;
	long long S = 0;

	//taking the input and storing it in the vector,
	//simultaneously getting the sum;
	for (int i = 0; i < n; i++)
		cin >> A[i], S += A[i];

	//the first check, if the sum is odd, then a division
	//cannot happen, because the data type is not a float/double;
	if (S & 1)
	{
		cout << "NO\n";
		return 0;
	}

	//the first map would take care of the
	//first half, the second map would take care
	//of the second half;
	unordered_map<long long, int> first, second;

	//the first half would initially consist of
	//only the first character;
	first[A[0]] = 1;

	//filling the second half with the appropriate
	//values;
	for (int i = 1; i < n; i++)
		second[A[i]]++;

	//this would be the sum of the first half, the
	//value of this variable would decide
	//the flow of the code;
	long long sdash = 0;

	for (int i = 0; i < n; i++)
	{
		sdash += A[i]; //first i numbers

		//if the first half is
		//equal to s/2, the second half would automatically
		//be equal to s/2;
		if (sdash == S / 2)
		{
			cout << "YES\n";
			return 0;
		}

		//if sdash is lesser, it means that we should search for an
		//element in the second half, that is equal to the
		//difference between s/2 & sdash;
		if (sdash < S / 2)
		{
			long long x = S / 2 - sdash;
			//the check;
			if (second[x] > 0)
			{
				cout << "YES\n";
				return 0;
			}
		}
		//if the sum is larger, then find an element in the first 
		//half which is equal to sdash - s/2;
		else
		{
			long long y = sdash - S / 2;

			//the check;
			if (first[y] > 0)
			{
				cout << "YES\n";
				return 0;
			}
		}
		//i+1
		first[A[i + 1]]++;
		second[A[i + 1]]--;
	}

	cout << "NO\n";
}