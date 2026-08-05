#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    //printing
    for(int index=0; index<=size-1; index++) {
        cout << arr[index] << " ";
    }
}

void storeMultipleOf10(int num[], int size) {
    int count = 1;
    for(int index=0; index<=size-1; index++) {
        num[index] = 10 * count;
        count++;
    }
}

void flipZeroOne(int arr[], int size) {
    for(int index=0; index<size; index++) {
        if(arr[index] == 1) {
            arr[index] = 0;
        }
        else {
            arr[index] = 1;
        }
    }
}

int main()
{   
    // int arr[5] = {-1};
    // int size = 5;
    // int arr[5];
    // int size = 5;
    // printArray(arr,size);

    // int arr[10];
    // int size = 10;
    // storeMultipleOf10(arr,size);

    // printArray(arr,size);

    int arr[] = {1,1,0,0,0,1,0,1};
    int size = 8;
    cout << "before : " ;
    printArray(arr,size);
    cout << endl;

    flipZeroOne(arr,size);

    cout << "after: " ;
    printArray(arr,size);
    cout << endl;

    // int arr[] = {10,20,30,40};
    // int size = 4;

    // printArray(arr, size);

    // declaration
    //  int laxman[101];
    //  int arr[11];

    // //initialisation
    // int brr[5] = {10,20,30,40};
    // int crr[] = {10,20,30};

    // int mutipleOf2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    // //cout << mutipleOf2[33] << endl;
    // // traverse
    //  for(int index=0; index<=9; index++) {
    //      cout << mutipleOf2[index] << " ";
    //  }

    //input in array
    // int arr[5];
    // for(int index=0; index<=4; index++) {
    //     cout << "Enter the value for arr["<<index<<"]:" ;
    //     cin >> arr[index] ;
    //     cout <<endl;
    // }
    // for(int index=0;index<=4; index++) {
    //     cout << arr[index] << " ";
    // }

    // int arr[] = {10,20,30,40,50};
    // int sum = 0;
    // for(int index=0; index<=4; index++) {
    //     sum = sum + arr[index];
    // }
    // cout << "Total Sum: " << sum << endl;

    return 0;
}