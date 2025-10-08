#include <iostream>
using namespace std;

int main(){
    string name;
    cout <<"Which country do you live in ?";
    cin>> name;
    if ((name != "Germany") || (name != "Austrailia"))
    {
        cout << "You should visit Germany or Austrailia sometime !";
    }
    return 0;
}