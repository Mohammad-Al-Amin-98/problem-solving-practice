#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    string s;
    cin>>s;
    int n=s.size();
    int cnt=0;
    if(m==1){
        cout<<0<<endl;
    }
    else{
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    }
    return 0;
}
