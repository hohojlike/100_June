#include <iostream>
using namespace std;

int main() {
	int a = 0, b=0, n1=0, n2=0, n3=0; 

    

    cin>>a;
    cin>>b;

    n1 = b/100; //첫자리
    n2 = (b/10)-(b/100*10);  //두번째
    n3 = b-(b/10*10);      // 세번째 

    cout<< a*n3 << endl;
    cout<< a*n2 <<endl;
    cout<< a*n1 <<endl;
    cout<< a*b <<endl;
	return 0;
}