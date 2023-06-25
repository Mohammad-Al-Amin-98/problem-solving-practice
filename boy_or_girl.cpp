#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int counter[26]={0};
    int n=s.size();
    for(int i=0;i<n;i++){
        char val=s[i];
        counter[val-'a']++;
    }
    int num=0;
    for(int i=0;i<26;i++){
        if(counter[i]>0) num++;
    }
    if(num%2==0){
        cout<<"CHAT WITH HER!\n";
    }
    else cout<<"IGNORE HIM!\n";
    return 0;
}
