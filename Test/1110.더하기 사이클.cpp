#include <iostream>
using namespace std;

int main() {
	int N,a,b,c;
    int count = 0;
    int First = 0;
    cin>> N;

    if(N<10) N=N*10;
   
    First = N;
    a=N/10;
    b= N-((N/10)*10);
    c= a+b;
    
    if(c<10)
    N= (b*10)+c;

    else if(c%10==0)
    N=b*10;
    
    else 
    N = (b*10)+(c-((c/10)*10));
    
    count++;

    while(N!=First)
    {
        a=N/10;
        b= N-((N/10)*10);
        c= a+b;
    
        if(c<10)
        N= (b*10)+c;
    
        else if(c%10==0)
        N=b*10;

        else 
        N = (b*10)+(c-((c/10)*10));
    
        count++;
    }

    cout<<count;
    
	return 0;
}