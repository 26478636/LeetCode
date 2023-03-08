#include <iostream>
#include <algorithm>

using namespace std;

//定义数组类型
struct node{
    int x;
    int y;
};

//定义数组
node num[1005];

//判断大小
bool check(const node& a,const node& b){
    return a.x<b.x;
}

int main(){
    num[0].x=1,num[0].y=2;
    num[1].x=5,num[1].y=7;
    num[2].x=0,num[2].y=8;
    sort(num,num+3,check);
    for(int i=0;i<3;i++){
        cout<<i<<" "<<num[i].x<<" "<<num[i].y<<endl;
    }

    return 0;
}