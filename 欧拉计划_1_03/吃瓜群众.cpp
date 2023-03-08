#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

//定义瓜堆类型
struct node{
    int num;//数值
    int ind;//位置信息
};
//存储瓜堆
node arr[10005];
//定义瓜堆数 && 吃瓜人数
int m,n;

//排序
bool check(const node& a,const node& b){
    return a.num<b.num;
}

int main(){
    //输入瓜堆数
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        cin>>arr[i].num;
        arr[i].ind++;
    }
    //给瓜堆从小到大排序
    sort(num+1,num+m+1,check);
    //定义吃瓜人，会吃到哪堆瓜
    for(int i=0;i<n;i++){
        int t,l=1,r=n;
        while(l<=r){
            int mid=(l+r)/2;
            if(t==arr[mid].num){
                cout<<"i= "<<i<<" "<<arr[i].num<<endl;
                break;
            }
            if(arr[mid].num<t){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        if(l>r){
            printf("无结果");
        }
    }
    return 0;
}