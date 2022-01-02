#include <iostream>
using namespace std;

int main() {
	
    int a,b;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(!(cin>>a>>b).eof())  // a와 b 값이 더이상 없을때까지 // -> while(cin>>a>>b)
    {
        
        cout<<a+b<<"\n";
    }
/*
while(scanf("%d %d", &a,&b) != -1 )
*/
	return 0;
}