#include <iostream>

using namespace std;

int n;
int ans;

int main(){
    cin>>n;
    for(int i=1;i<=n/3;i++){
        for(int j=i;j<=(n-i)/2;j++){
            if((i+j)>(n-i-j)) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}