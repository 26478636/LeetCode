#include <iostream>

using namespace std;

int num[20][20];
int ans[20][20];

int main(){
    //传输入
    for(int i=1;i<=15;i++){
        for(int j=1;j<=i;j++){
            cin>>num[i][j];
        }
    }
    //最大路径计算
    for(int i=15;i>=1;i--){
        for(int j=1;j<=i;j++){
            ans[i][j]=max(ans[i+1][j],ans[i+1][j+1])+num[i][j];
        }
    }
    cout<<ans[1][1]<<endl;
    return 0;
}