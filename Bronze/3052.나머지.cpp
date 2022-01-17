#include <iostream>
using namespace std;

int main() {
	int ten_num[10] ={0};
    int count =0;
    int result=0;

    for(int i=0; i<10; i++)
    {
        cin>>ten_num[i];
        ten_num[i]%=42;
    }

    for(int i=0; i<10; i++)
    {
        count=0;
        
        for(int j=i+1;j<10;j++)
        {
            if(ten_num[i]==ten_num[j])
            {
                count++;
            }
        }
         if(count==0)
            {
                result++;
            }
        
    }

    cout<<result<<endl;

	return 0;
}