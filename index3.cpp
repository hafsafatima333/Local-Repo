
#include <iostream>
using namespace std;
int add(int, int);

int main()
{
    int a, b;
    cout << "The third file :)" << endl;
    cout << "Lets commit something new" << endl;
    cout << "For addition give inputs: " << endl;
    cin >> a;
    cin >> b;
    cout << "Addition result: " << a << "+" << b << " = " << add(a, b) << endl;
}

int add(int a, int b)
{
    return a + b;
}