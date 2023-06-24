#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int n=a.size();
    for(int i=0;i<n;i++){
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    bool ans=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            if(a[i]<b[i]){
                cout<<-1<<endl;
                ans=1;
                break;
            }
            else cout<<1<<endl;
            ans=1;
            break;
        }
    }
    if(!ans) cout<<0<<endl;
    return 0;
}
