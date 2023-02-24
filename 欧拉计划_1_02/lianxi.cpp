#include <iostream>

using namespace std;

int a=0;
int b=1;
int num[2][1005]={{1,1},{1,1}};

int func(int x,int y){
    num[x][0]=num[y][0];
    //相加
    for(int i=1;i<=num[x][0];i++){
        num[x][i]+=num[y][i];
        //进位
        if(num[x][i]>9){
            num[x][i+1]+=num[x][i]/10;
            num[x][i]%=num[x][i];
            if(num[x][0]==i){
                num[x][0]++;
            }
        }
    }
    return num[x][0]==1000;
}

int main(){
    for(int i=3;1;i++){
        if(func(a,b)){
            cout<<"i= "<<i<<endl;
            break;
        }
        swap(a,b);
    }
    return 0;
}