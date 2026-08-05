#include<iostream>
using namespace std;


int main() {

    //dynamic memory
    // int *ptr = new int;
    // *ptr = 5;
    // cout << *ptr;

    // //ab mereko need nahi h iss int ki
    // delete ptr;

    int *ptr = new int[5];
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    *(ptr + 3) = 40;
    *(ptr + 4) = 50;

    for(int i=0; i<5; i++)  {
        cout << ptr[i] << " ";
    }

    delete []ptr;


    return 0;
}