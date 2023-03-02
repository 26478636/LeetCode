#include <iostream>
#include <algorithm>

using namespace std;

//起初给钱数
int money;
//n个时间段
int n;
//时间段的标签
int flag[10005];
//时间段与扣钱数
struct node{
    int time_0;
    int money_0;
};

node arr[10005];

bool check(const node& a,const node& b){
    return a.money_0>b.money_0;
}

int main(){
    cin>>money>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i].time_0;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i].money_0;
    }
    //按扣钱多少进行排序
    sort(arr,arr+n,check);
    for(int i=0;i<n;i++){
        for(int j=arr[i].time_0;j>0;j--){
            if(flag[j]==0){
                flag[j]=1;
                break;
            }
            if(j==1){
                money-=arr[i].money_0;
            }
        }
    }
    cout<<money<<endl;
    return 0;
}