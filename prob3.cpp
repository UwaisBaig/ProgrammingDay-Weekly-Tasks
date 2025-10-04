#include <iostream>
using namespace std;

int main(){
    int temp1,temp2;

    cout<<"Temperature City 1: ";
    cin>>temp1;

    cout<<"Temperature City 2: ";
    cin>>temp2;


    if (temp1 > temp2)
    {
        int ftemp = temp1 - temp2;
        if(ftemp > 10)
            cout <<"Difference is too Big."<< endl;
        else
            cout<<"Program Ends"<<endl;
    }
    else
    {
        int ftemp = temp2 - temp1;
        if(ftemp > 10)
            cout <<"Difference is too Big."<< endl;
        else
            cout<<"Program Ends"<<endl;
    }
    return 0;
}
