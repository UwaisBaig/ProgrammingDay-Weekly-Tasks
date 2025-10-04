#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string ones[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine",
                     "Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen",
                     "Sixteen","Seventeen","Eighteen","Nineteen"};

    string tens[] = {"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    if (n < 20) {
        cout << ones[n] << endl;
    }
    else if (n < 100) {
        int t = n / 10, o = n % 10;
        cout << tens[t];
        if (o > 0) cout << " " << ones[o];
        cout << endl;
    }
    else if (n == 100) {
        cout << "One hundred" << endl;
    }

    return 0;
}
