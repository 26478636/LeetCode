//递归公式
#include <iostream>

using namespace std;

//考拉兹序列
//返回值为计数个数
int check(long long n){
    if(n==1) return 1;
    if(n%2==0){
        return check(n/2)+1;
    }else{
        return check(3*n+1)+1;
    }
}

int  main(){
    int ans=1;
    for(int i=2;i<1000000;i++){
        if(check(i)>check(ans)) ans=i;
    }
    cout<<"ans= "<<ans<<endl;
    return 0;
}