#include <iostream>

using namespace std;

void calcSum(int a, int b);
void calcDiv(int a, int b);
int retSum(int a, int b);
int retDiv(int a, int b);

int main()
{
    int a, b;
    cout << "Give number a: ";
    cin >> a;
    cout << "Give number b: ";
    cin >> b;

    calcSum(a,b);
    calcDiv(a,b);

    cout << retSum(a, b) << endl;
    cout << retDiv(a, b) << endl;
}

void calcSum(int a, int b) {
    cout << a + b << endl;
}

void calcDiv(int a, int b) {
    if(b == 0) {
        cout << "Error" << endl;
    } else {
    cout << a / b << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

int retDiv(int a, int b) {
    if(b == 0) {
        cout << "Error" << endl;
        return 0;
    } else {
        return a / b;
    }
}
