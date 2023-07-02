#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int police=0,count_crime=0;
    for(int i=0;i<n;i++){
        if(a[i]>0) police+=a[i];
        else if(police>0) police--;
        else count_crime++;
    }
    cout<<count_crime<<endl;
    return 0;
}
