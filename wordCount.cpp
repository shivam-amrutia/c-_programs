#include<bits/stdc++.h>
using namespace std;

string removeSpace(string s)
{
    stringstream ss(s);
    string word;
    string temp;
    while (ss >> temp) {
        word += " "+temp;
    }
    return word;
}

int main(){
    string s;
    cout << "enter a string: ";
    getline(cin,s);
    s = removeSpace(s);
    int w=1,ch=0,no=0;

    for(int i=1; i<s.size(); i++){
        
        if((s[i] >= 'a' || s[i] >= 'A') && (s[i] <= 'z' || s[i] <= 'Z')){
                ch++;
        }
        if(s[i] >= '0' && s[i] <= '9'){
                no++;
        }
        if(isspace(s[i]) && i != s.size()-1){
            w++;
        }
    }
    cout << "words: " << w << " characters: " << ch << " number: " << no;

    return 0;
}