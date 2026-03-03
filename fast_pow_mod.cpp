#include <iostream>
using namespace std;

int qmi(int a, int b, int p)
{
    int res = 1;
    while (b) {
        if (b & 1)
            res = res * a % p;
        a = a * a % p;
        b >>= 1;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << "hello world" << endl;
    return 0;
}