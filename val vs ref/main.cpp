#include<iostream>
using namespace std;


// void solve(string a) {
//     cout << "inside function " << a << endl;
//     a[0] = 'b';
//     cout << "inside function " << a << endl;
// }

// void solve(string &a) {
//     cout << "inside func " << a << endl;
//     a = "babbar";
//     cout << "inside func " << a << endl;
// }

void countEvenNum(int arr[], int size, int &count) {
    for(int index=0;index<size; index++) {
        if(arr[index] % 2 == 0) {
            count++;
        }
    }
}

int main() {

    int arr[] = {1,2,3,4,5};
    int size = 5;
    int count = 0;

    countEvenNum(arr,size,count); 
    cout << "Even Number count: " << count << endl;


    // string name = "love";
    // cout  << "inside main "<< name << endl;
    // solve(name) ;
    // cout  << "inside main "<< name << endl;

    return 0;
}