#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    int result=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        int idx=(s[i]-'0')-1;
        result+=a[idx];
    }
    cout<<result<<endl;
    return 0;
}
