#include<iostream>
using namespace std;


int getLength(char arr[]) {
    int count = 0 ;
    int index = 0;
    while(arr[index] != '\0') {
        count++;
        index++;
    }
    return count;
}

void concatArray(char a[], char b[]) {
    int aIndex = getLength(a);
    int bIndex = 0;

    while(b[bIndex] != '\0') {
        ///start copying
        a[aIndex] = b[bIndex];
        aIndex++;
        bIndex++;
    }
    //end a string with null character
    a[aIndex] = '\0';
}

void copyArray(char actualArr[], char copyArr[]) {
    int aIndex = 0;
    int bIndex = 0;

    while(actualArr[aIndex] != '\0') {
        //start copying
        copyArr[bIndex] = actualArr[aIndex];
        aIndex++;
        bIndex++;
    }
    copyArr[bIndex] = '\0';
}

bool compareArray(char a[], char b[]) {
    int aIndex = 0;
    int bIndex = 0;
    int aLength = getLength(a);
    while(aIndex <= aLength) {
        if(a[aIndex] != b[bIndex]) {
            return false;
        }
        else {
            aIndex++;
            bIndex++;
        }
    }
    //agar yaha tak aa gye ho, iska matlab saaare 
    //character match hogye h 
    return true;
}

int main() {

    char actual[] = "babbar";
    char ans[100];
    cout << "length of actual char array: "<< strlen(actual) << endl;

    strcpy(ans, actual);

    cout << ans << endl;
    //ans = "love";
    ans[0]= 'k';

    if(strcmp(actual, ans)==0) {
        cout << "char arrays are same" << endl;
    }
    else {
        cout << "char arrays are not same" << endl;
    }


    // char arr[] = "love";
    // char brr[] = "loverrrrr";

    // cout << compareArray(arr,brr) << endl;


    // char actual[100] = "babbar";
    // char ans[100];

    // copyArray(actual, ans);

    // cout << "printing ans array:" << ans << endl;

    // char a[50] = "love";
    // char b[50] = "babbar";
    // concatArray(a,b);

    // cout << "printing a: " << a << endl;

    // char arr[] = "lovebabbar";
    // cout << getLength(arr) << endl;


    //declare
    //char arr[10];

    //cout << arr[3] << endl;

    // char arr[10] = "babbar";
    // cout << arr[5] << endl;

    // cout << "printing 6th index: " << arr[6] << endl;
    // int asciiValue = arr[6];
    // cout << asciiValue << endl;

    // char arr[4];
    // arr[0] = 'a';
    // arr[1] = 'b';
    // arr[2] = '\0';

    // int arr[4] = {1,2,3,4};
    // cout << arr << endl;

    // char brr[5] = "love";
    // cout << brr << endl;
    // for(int i=0; i<5; i++) {
    //     cout << brr[i] << " ";
    // }


    return 0;
}