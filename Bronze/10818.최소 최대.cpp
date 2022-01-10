#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;

	int max, min;

	vector<int> nums(n,0);

	for(int i=0; i<n; i++)
	{
		int a;
		cin>>a;
		nums[i] = a;
	}

	for(int i=0; i<n; i++)
	{
		cout<<nums[i]<<endl;
	}

	sort(nums.begin(),nums.end());

	max = nums[n-1];
	min = nums[0];

	cout<<min<<" "<<max<<endl;
	
	return 0;
}