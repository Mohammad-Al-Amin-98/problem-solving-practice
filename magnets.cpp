    #include<iostream>
    #include<string.h>
    using namespace std;
    int main(){
    	int n;
    	cin>>n;
    	int result=1;
    	string first="",second="";
    	if(n==1){
    		cin>>first;
    		cout<<1<<endl;
    	}
    	else{
    		for(int i=0;i<n-1;i++){
    			if(second==""){
    				cin>>second;
    			}
    			else second=first; 
    			cin>>first;
    			if(first[0]==second[1]) result++;
    		}}
    	if(n!=1) cout<<result<<endl;
    	return 0;
    }
