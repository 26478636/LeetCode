#include <iostream>

using namespace std;

int n;//输入的火柴个数
int num[15]={6,2,5,5,4,5,6,3,7,6,2,2};
int ans_1;//个数

int func(int x){
    if(x==0) return 6;
    int ans=0;
    while(x){
        ans+=num[x%10];
        x/=10;
    }
    return ans;
}

int main(){
    cin>>n;
    for(int i=0;i<1111;i++){
        for(int j=0;j<1111;j++){
            if(func(i)+2+func(j)+2+func(i+j)==n){
                ans_1++;
                cout<<i<<"+"<<j<<"="<<i+j<<endl;
            }
        }
    }
    return 0;
}