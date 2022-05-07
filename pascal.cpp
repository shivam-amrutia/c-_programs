#include<bits/stdc++.h>
using namespace std;

string calcSpace(int n){
    string s= "";
    for(int i=0; i<n; i++){
        s += " ";
    }
    return s;
}

int main(){
    cout << "enter a number: ";
    int n,i=1;
    cin >> n;
    vector<vector<int>> a;
    vector<int> b;
    b = {1};
    a.push_back(b);
    b = {1,1};
    a.push_back(b);
    b.clear();

    for(int i=2; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || j==i){
                b.push_back(1);
            }
            else{
                b.push_back(a[i-1][j-1] + a[i-1][j]);
            }
        }
        a.push_back(b);
        b.clear();
    }

    string space = calcSpace(n);

    for(int i=0; i<n; i++){
        for(int j=n-i; j>1; j--){
            cout << space.substr(0,n/2+1);
        }
        for(int k=0; k < a[i].size(); k++){
            cout << a[i][k] << space.substr(0,n);
        }
        cout << endl;
    }

    return 0;
}