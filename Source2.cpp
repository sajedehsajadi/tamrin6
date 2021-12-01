#include <iostream>
#include <conio.h>

using namespace std;

unsigned long fibo(unsigned long number);

int main()
{
    int n,i=0;
    cout << "enter number:";
    cin >> n;
    while (i <= n-2) {
        fibo(i);
        i++;
    }
    cout << '\n'<<fibo(i);
    return 0;
}

unsigned long fibo(unsigned long number) {
    if ((number == 0) || (number == 1)) {
        return number;
    }
    else {
        return fibo(number - 1) + fibo(number - 2);
    }
}