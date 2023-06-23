#include<bits/stdc++.h>
using namespace std;
int main(){
    //a 2d array
    int m[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>m[i][j];
        }
    }
    int target_row=3,target_column=3;
    int result_row=-1,result_column=-1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(m[i][j]==1){
                result_row=i;
                result_column=j;
                break;
            }
        }
        if(result_row!=-1) break;
    }
    result_row++;
    result_column++;
    int final_output=0;
    final_output=(abs(target_row-result_row))+(abs(target_column-result_column));
    cout<<final_output<<endl;
    return 0;
}
