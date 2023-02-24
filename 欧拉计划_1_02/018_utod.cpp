#include <iostream>

using namespace std;

//输入
int num[20][20];
//最大路径计算
int ans[20][20];
//输出结果
int ansans;

int main(){
    //传入输入
    for(int i=1;i<=15;i++){
        for(int j=1;j<=i;j++){
            cin>>num[i][j];
        }
    }
    for(int i=1;i<=15;i++){
        for(int j=1;j<=i;j++){
            ans[i][j]=max(ans[i-1][j-1],ans[i-1][j])+num[i][j];
            ansans=max(ansans,ans[i][j]);
        }
    }
    cout<<ansans<<endl;
    return 0;
}