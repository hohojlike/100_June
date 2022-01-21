#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
    int n;
    cin>>n;

    float m; // 점수들 중 최댓값

    float add = 0; // 새 점수의 합
    float aver = 0; // 새 점수들의 평균 값

    vector<float>score(n,0); //n개의 배열들을 0으로 

    for(int i=0; i<n; i++)
    {
        cin>>score[i];
    }

    sort(score.begin(),score.end()); // 오름차순으로 정렬

    
    m = score[n-1];

    for(int i=0; i<n; i++)
    {
        score[i]= (score[i]/m)*100;
    }
    
    
    for(int i=0; i<n; i++)
    {
        add+= score[i];
    }

    aver = add/n;
    
    cout<< aver <<"\n";

	return 0;
}