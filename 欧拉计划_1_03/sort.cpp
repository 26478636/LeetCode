#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    //定义数组
    int num[1005]={1,6,3,2,4,5,7,9,0,8};
    sort(num,num+10);
    for(int i=0;i<10;i++){
        cout<<i<<": "<<num[i]<<endl; 
    }
    return 0;
}