#include <iostream>

using namespace std;

int n;//虚拟楼层数
int m;//被诅咒楼层数
int ans;//实际楼层数

//判别是否为可以计数的楼层
int func(int x){
    while(x){
        if(x%10==m) return 0;
        x/=10;
    }
    return 1;
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        if(func(i)){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}