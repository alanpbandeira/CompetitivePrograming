#include <iostream>
#include <vector>

using namespace std;

int fib(int n, int *count)
{
	int r = 0;

	if (n == 0)
	{
		r = 0;
	}
	else if (n == 1)
	{
		r = 1;
	}
	else
	{
		r = fib(n - 1, count) + fib(n - 2, count);
	}

	*count += 1;

	return r;
}


int main()
{
	int c_count;
	int n;
	int f;
	vector<int> arr;
	vector<int> results;

	while (cin >> n)
	{
		arr.push_back(n);
	}

	for (int i = 1; i <= arr[0]; i++)
	{
		c_count = -1;
		f = fib(arr[i], &c_count);
		cout << "fib("<< arr[i] << ")" << " = " << c_count << " calls = " << f << endl;
	}

	return 0;
}
