#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a,b,c,num;
    cin>>a>>b>>c;
    num = a*b*c;  // 세 수의 곱

    int here[10]; // 숫자별 개수 넣을 배열
    vector<int>each_num; // 세 수의 곱을 담을 배열

    

    while(num>=10)
    {
        each_num.push_back(num%10);
        num/=10;
    }
    each_num.push_back(num%10);//맨 앞자리 넣어주기

    for(int i=0; i<10; i++)
    {
        int count = 0;

        for(int j=0;j<each_num.size();j++)
        {
            if(i==each_num[j]) count++;
        }

        here[i]=count;
    }

    for(int i=0;i<10;i++) //자리수 별 개수 출력
    {
        cout<<here[i]<<endl;
    }
	return 0;
}