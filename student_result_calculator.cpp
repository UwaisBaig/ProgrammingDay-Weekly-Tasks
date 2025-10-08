#include <iostream>
using namespace std;

int main(){
    string name;
    int marks,per,eng,maths,chem,ss,bio;

    cout <<"Enter the name of the student?";
    cin>> name;
    cout << "English Marks (OUT OF 100): ";
    cin>> eng;
    cout << "Maths Marks (OUT OF 100): ";
    cin>> maths;
    cout << "chem Marks (OUT OF 100): ";
    cin>> chem;
    cout << "Social Science Marks (OUT OF 100): ";
    cin>> ss;
    cout << "Biology Marks (OUT OF 100): ";
    cin>> bio;
    
    marks = eng+maths+chem+ss+bio;

    per = (marks /500) *100;

    if (per >90)
        cout <<"A+";
    else if (per >80 && per < 90)
        cout <<"A";
    else if (per >70 && per < 80)
        cout << "B+";
    else if (per >60 && per < 70)
        cout << "B";
    else if (per >50 && per < 60)
        cout << "C";
    else if (per >40 && per < 50)
        cout << "D";
    else 
        cout << "F";
    return 0;
}