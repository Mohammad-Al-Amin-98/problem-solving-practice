#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p=0;
    cin>>n;
    bool v[3];
    for(int i=0;i<n;i++){
        int r=0;
        for(int x=0;x<3;x++){
                cin>>v[x];
                if(v[x]==1) r++;
        }
        if(r>=2) p++;
    }
    cout<<p<<endl;
    return 0;
}
