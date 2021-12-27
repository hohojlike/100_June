#include <iostream>
using namespace std;

int main() {
	int K = 0;  //과자가격
    int N = 0;  // 갯수
    int M = 0;  //가진 돈
    int P_M = 0;  //엄마에게 받아야 할 돈

    cin >> K;
    cin >> N;
    cin >> M;
    
    if((K*N)>= M)
    {
        P_M = (K*N)-M;
        cout<< P_M <<endl;
    }
    else cout<< 0 <<endl;
        
    

	return 0;
}