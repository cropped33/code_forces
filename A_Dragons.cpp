#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> values;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        values.push_back(make_pair(a,b));
    }
    sort(values.begin(),values.end());
    for(int i = 0 ; i < values.size();i++){
        if (values[i].first <s){
            s +=values[i].second;
        }
        else{
            cout<<"NO";
            exit(0);
        }
    }
    cout<<"YES";
    
    
}