#include <iostream>

using namespace std;

int A,B;//投票数
double raw;//初始比例
int x,y;//简化
int L;//上限值
double mid;//中间值--简化比例

int main(){
    cin>>A>>B>>L;
    raw=(double)A/B;
    mid=99999999;
    for(int i=1;i<=L;i++){
        for(int j=1;j<=L;j++){
            if(((double)i/j>=raw)&&(((double)i/j-raw)<(mid-raw))){
                mid=i/j;
                x=i;
                y=j;
            }
        }
    }
    cout<<x<<":"<<y<<endl;
    return 0;
}