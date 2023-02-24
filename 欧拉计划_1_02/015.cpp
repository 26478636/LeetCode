#include <iostream>

using namespace std;

//方格
long long num[25][25];

int main(){
    for(int i=1;i<=21;i++){
        for(int j=1;j<=21;j++){
            if(i==1&&j==1){
                num[i][j]=1;
            }else{
                num[i][j]=num[i-1][j]+num[i][j-1];
            }
        }
    }
    cout<<num[21][21]<<endl;

    return 0;
}