#include <iostream>
using namespace std;

int main() {
	int hour =0, minute =0;

    cin>> hour >> minute;
    

    if(hour==0)
    {
        if(minute < 45)
        {
            hour = 23;
            minute+=15;
            cout<<hour<<" "<<minute<<endl;
        }
        else
        {
            minute-= 45;
            cout<<hour<<" "<<minute<<endl;
        }
    }
    else 
    {
        if(minute < 45)
        {
            hour-= 1;
            minute+=15;
            cout<<hour<<" "<<minute<<endl;
        }
        else 
        {
            minute-= 45;
            cout<<hour<<" "<<minute<<endl;
        }
    }
    
	return 0;
}