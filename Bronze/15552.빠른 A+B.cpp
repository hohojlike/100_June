#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);              // 속도 빨라지게 해줌
    ios::sync_with_stdio(false); // 속도 빨라지게 해줌
    
	int T = 0;
    int a=0, b=0;
    cin >> T;

    for(int i=0; i<T; i++)
    {
        cin>>a>>b;
        cout<<a+b<<"\n";
    }
	return 0;
}