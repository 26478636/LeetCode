#include <iostream>
#include <algorithm>

using namespace std;

//判别大小函数
bool check(const int& a,const int& b){
    return a<b;
}

int main(){
    int num[1005]={1,6,3,2,4,5,7,9,0,8};
    sort(num,num+10,check);
    for(int i=0;i<10;i++){
        cout<<i<<": "<<num[i]<<endl;         
    }
}