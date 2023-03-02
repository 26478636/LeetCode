//构造优雅数
#include <iostream>

using namespace std;

//输入
int a,b;
//输出个数
long long count;

int main(){
    cin>>a>>b;
    //特殊数字  i
    for(int i=0;i<10;i++){
        //普通数字  j
        for(int j=0;j<10;j++){
            //i 不能等于 j
            if(i==j) continue;
            //遍历优雅数的长度  k
            for(int k=3;k<=17;k++){
                //特殊数字的位置
                for(int l=1;l<=k;l++){
                    //特殊情况
                    if(i==0&&l==1) continue;
                    if(j==0&&l!=1) break;
                    //构造优雅数
                    long long t=0; 
                    for(int m=1;m<=k;m++){
                        if(m!=l){
                            t=10*t+i;
                        }else{
                            t=10*t+j;
                        }
                    }
                    if(t>=a&&t<=b) count++;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}