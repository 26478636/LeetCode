#include <iostream>
#include <algorithm>

using namespace std;

//定义输入
int n;//定义多少根木头
int m;//定义切割成多少段木头
int num[1005];//定义存储木头的长度
int tr;//定义最长木头的长度

//计算切割的段数
int func(int x){
    int t=0;
    for(int i=0;i<n;i++){
        t+=num[i]/x;
    }
    return t;
}


//二分查找函数
int fb(){
    int l=0,r=tr;
    while(l!=r){
        int mid=(l+r+1)/2;
        //计算切割成多少段
        int s=func(mid);
        if(s>=m){
            l=mid;
        }else{
            r=mid-1;
        }
    }
    return l;
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>num[i];
        tr=max(tr,num[i]);
    }
    //调用二分查找
    cout<<fb()<<endl;
    return 0;
}