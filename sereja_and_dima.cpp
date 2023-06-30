#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,d=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){            // 4 1 8 3
        cin>>a[i];
    }
    int i=0;
    n=n-1;
    bool flag=0;
    while(i!=n){
        if(a[i]>a[n]){
            s+=a[i];
            i++;
        }
        else{
            s+=a[n];
            n--;
        }
        if(i==n){
            d+=a[i];
            flag=1;
            continue;
        }
        if(a[i]>a[n]){
            d+=a[i];
            i++;
        }
        else{
            d+=a[n];
            n--;
        }
    }
    if(i==n && flag==0) s+=a[n];
    cout<<s<<" "<<d<<endl;
    return 0;
}
