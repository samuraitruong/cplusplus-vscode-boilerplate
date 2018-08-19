#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
    int a =0;
    int b = 0;
    cout << "Please enter a number : a= ";
    cin >> a;
    cout << "Please enter a number : b= ";
    cin >> b;

    printf("%d x %d = %d\n", a, b, a * b);
    cout << "Press any key to exit!!!";
    getch();
}