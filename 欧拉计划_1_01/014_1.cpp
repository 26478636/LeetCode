//递归法 && 记忆化数组
#include <iostream>

using namespace std;

int num[105];

long long check(int n){
    if(n==1) return 1;
    
    if(num[n]&&n<100) return num[n];
    
    int t=0;
    
    if(n%2==0){
        t=check(n/2)+1;
        if(n<100) num[n]=t;
        return t;
    }else{
        t=check(3*n+1)+1;
        if(n<100) num[n]=t;
        return t;
    }
}

int main(){
    int ans=1;
    for(int i=2;i<100;i++){
        if(check(i)>check(ans)) ans=i;
    }
    cout<<ans<<endl;
    return 0;
}