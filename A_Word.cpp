#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main(){
    string s;
    int count=0;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]<=90)
        count++;
    }
    if(count>l/2)
    {
        for(int i=0;i<l;i++){
            s[i]=toupper(s[i]);
        }
    }
    else{
        for(int i=0;i<l;i++){
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;
    return 0;
}