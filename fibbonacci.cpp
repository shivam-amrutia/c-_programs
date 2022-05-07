#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "enter a number: ";
    int n;
    cin >> n;
    int curr = 1;
    int prev = 0;
    int temp;
    int i=0;
    while(true){
        temp = prev;
        prev = curr;
        curr = curr + temp;
        if(curr >= n){
            cout << curr << " ";
            i++;
        }
        if(i==5){
            break;
        }
    }
    return 0;
}