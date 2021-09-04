/*Student 1 received a 73, and the next multiple of 5 from 73 is 75. Since 75-73<3, the student's grade is rounded to 75.
 Student 2 received a 67, and the next multiple of 5 from 67 is 70. Since 70-67=3, the grade will not be modified and the student's final grade is .
 Student 3 received a 38, and the next multiple of 5 from 38 is 40. Since 40-38<3, the student's grade will be rounded to 40.
 Student 4 received a grade below 33, so the grade will not be modified and the student's final grade is 33. */
#include<iostream>
using namespace std;
int main(){
    int n;
    n = 5;
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        cout<<"Enter grades of student: ";
        cin >> grade;
        if( grade < 38)
            {
            cout << "The final grade is: "<<grade << "\n";
        }
        else
            {
            int diff, val;
            val=grade/5+1;
            val=val*5;
            if( val-grade < 3)
                {
                cout << val << "\n";
            }
            else
                    cout << "The final grade is:"<<grade << "\n";
        }
        
    }
    return 0;
}