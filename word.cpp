#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int u=0,l=0;
    for(int i=0;i<n;i++){
        if(islower(s[i])) l++;
        else u++;
    }
    if(l>=u){
        for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
        }
    }
    else{
        for(int i=0;i<n;i++){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}
