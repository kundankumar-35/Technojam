#include <iostream>
#include<vector>
#include<algorithm>
#include <set>
#define pb push_back

using namespace std;

int main()
{
	int n , m,  k;
	cin >> n >> m>>k;

	vector<int> available_size;
	vector<int> desire_size;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;					
		available_size.pb(val); // Insert it into the vector
	}

	for (int i = 0; i < m;  i++){
		int val;
		cin >> val;
		desire_size.pb(val);
	}

	sort(begin(available_size), end(available_size));
	sort(begin(desire_size), end(desire_size));

	int j = 0;
	for (int i=0; i < m; i++)
	{
		for (j=0; j < n; j++)
		{
			int val = abs(desire_size[i] - available_size[j]);

			if(val<=k)
				ans++;


		}
	}

	cout << ans;
}
