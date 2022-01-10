#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N,M;
    int i,j,k;

    cin>>N>>M;
    vector<int>bag(N,0);

    for(int a=0; a<M; a++)  //M번 만큼 공 넣기
    {
        cin>>i>>j>>k;
        for(int b=i-1; b<=j-1; b++)
        {
            bag[b] = k;
        }
    }

    for(int a=0; a<bag.size();a++)
    {
        cout << bag[a] <<" ";
    }
	return 0;
}