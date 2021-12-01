#include <iostream>
#include <conio.h>

using namespace std;

unsigned long fibo(unsigned long number);

int main()
{
    int counter = 0;
while(fibo(counter)<1000){
        cout << fibo(counter) << '\t';
        counter++;
    }

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