#include <iostream>

using namespace std;

//第一个斐波那契数
int a=0;
//第二个斐波那契数
int b=1;
//定义一个二维数组
int num[2][1005]={{1,1},{1,1}};

//判断是否为第一个斐波那契数
int func(int x,int y){
    num[x][0]=num[y][0];
    for(int i=1;i<=num[x][0];i++){
        num[x][i]+=num[y][i];
        if(num[x][i]>9){
            num[x][i+1]+=num[x][i]/10;
            num[x][i]%=10;
            if(i==num[x][0]) num[x][0]++;
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