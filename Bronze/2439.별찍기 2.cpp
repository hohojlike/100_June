#include <iostream>
using namespace std;

int main() {
	int n = 0;
    cin>>n;

    for(int i =n; i>=1; i--)  //몇줄 돌건지  --> (int i = 1; i<= n; i++)
    {
        for(int j =i-1; j>=1; j--)  //스페이스 채우기
        {
           cout<<" ";
        }

        for(int k=i; k<=n; k++)  //별 채우기
        {
            cout<<"*";
        } 
        
        
        cout<<endl;

    }

	return 0;
}