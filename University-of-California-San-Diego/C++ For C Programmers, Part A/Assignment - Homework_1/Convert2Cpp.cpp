
#include <iostream>
#include <vector>

using namespace std;

const int N = 40;

inline void sum(int &p, const vector<int> &data)
{
	p = 0;
	for (int i=0; i<data.size(); i++)
	{
		p += data[i];
	}
}

int main()
{
	vector<int> data;
	for (int i=0; i<N; i++)
	{
		data.push_back(i);
	}

	int accum;
	sum(accum, data);

	cout << "sum is " << accum << endl;

	return 0;
}
