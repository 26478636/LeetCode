#include <iostream>
#include <cstring>

using namespace std;

//参选生物的类型
struct node{
    int ind;//编号
    string num;//票数
};

node arr[10005];
int n;//参与竞选的生物

//排序
bool check(const node& a,const node& b){
    if(a.num.size()==b.num.size()){
        return a.num>b.num;
    }
    return a.num.size()>b.num.size();
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i].num;
        arr[i].ind++;
    }
    sort(arr+1,arr+n+1,check);
    cout<<arr[1].ind<<" "<<arr[1].num<<endl;
    return 0;
}