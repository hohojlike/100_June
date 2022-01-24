#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        char score[80]=" ";
        int correct = 0;
        int num =0;
        string a;

        cin>>a;
        strcpy(score,a.c_str());

        for(int k=0; k<80; k++)
        {
            while(score[k]=='O')
            {
                num++;
                k++;
            }

            for(int j=num; j>0; j--)
            {
                correct+=j;
            }

            num=0;
        }

        cout<<correct<<endl;
        
        correct=0;
        
        
    }

	return 0;
}