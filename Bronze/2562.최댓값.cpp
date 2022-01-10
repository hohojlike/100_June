#include <iostream>
using namespace std;

int main() {
    int nums[9];


    for(int i=0;i<9;i++)
    {
        cin>>nums[i];
    }

    int max = nums[0];
    for(int i=1; i<9; i++)
    {
        if(max<nums[i]) max = nums[i];
    }

    cout<<max<<endl;
    for(int i=0; i<9; i++)
    {
        if(max==nums[i]) cout<<i+1<<endl;
    }
    

	return 0;
}