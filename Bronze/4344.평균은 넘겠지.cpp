#include <iostream>
#include <vector>

using namespace std;

int main() {
	
    int case_num;
    cin>>case_num;

    for(int i=0; i<case_num; i++)
    {
        int student=0;
        cin>>student;

        vector<int>score(student,0);

        for(int j=0; j<student; j++)
        {
            cin>>score[j];
        }

        float sum=0;
        float aver;

        for(int j=0; j<student; j++)
        {
            sum+=score[j];
        }
        aver=sum/student;

        float high_score=0;

        for(int j=0; j<student; j++)
        {
            if(score[j]>aver)
            {
                high_score++;
            }
        }
        float percent = 0; 
        percent =((high_score/student)*100.0);

        cout<<fixed;
        cout.precision(3);
        cout<<percent<<"%"<<"\n";


        score.clear();

        



    }
	return 0;
}