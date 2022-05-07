/*
author: Shivam Amrutia
date: 7-5-22
definition: wap to reverse an array in the same array without creating new array
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "enter the length of array: ";
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "enter the elemetn at index "<<i<<" :";
        cin >> arr[i];
    }
    int half = n/2;
    for(int i=0; i<half; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
    