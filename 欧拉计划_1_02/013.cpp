//大整数相加
#include <iostream>
#include <cstring>

using namespace std;

//输入的字符串
char s1[1005],s2[1005];
//输入的整型
int num1[1005],num2[1005];
//输出的结果
int ans[1005];

int main(){
    cin>>s1>>s2;
    num1[0]=strlen(s1);
    num2[0]=strlen(s2);
    //存储整形输入
    for(int i=1,j=num1[0];i<=num1[0];i++,j--){
        num1[i]=s1[j-1]-'0';
    }
    for(int i=1,j=num2[0];i<=num2[0];i++,j--){
        num2[i]=s2[j-1]-'0';
    }
    //相加
    ans[0]=max(num1[0],num2[0]);
    for(int i=1;i<=ans[0];i++){
        ans[i]=num1[i]+num2[i];
    }
    //进位
    for(int i=1;i<=ans[0];i++){
        if(ans[i]>9){
            ans[i+1]+=ans[i]/10;
            ans[i]=ans[i]%10;
            if(i==ans[0]){
                ans[0]++;
            }
        }
    }
    //输出
    for(int i=ans[0];i>=1;i--){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}