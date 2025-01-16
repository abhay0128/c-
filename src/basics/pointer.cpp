#include <iostream>
using namespace std;

int main() {
    int a =10;
    // pointer - memory adress of the variable
    int* ptr = &a;
    cout << *ptr << endl;
    cout << &a << endl;

    //pointer of pointer
    int b = 20;
    int* bptr = &b;
    int ** bptr2 = & bptr;
    cout << *(&b) << endl;
    cout << *bptr << endl;
    cout << **bptr2 << endl;

    // * is de-reference operator

    int* nptr = NULL;
    cout << &nptr << endl;
    return 0;
}