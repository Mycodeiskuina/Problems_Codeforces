#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define ii pair<int, int>
#define f first
#define s second
#define mp make_pair
const int N=1e5+10;
const int inf=1e9;
int a[N],b[N];
//basta hacer prefix de maximos
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=n-1;i>=0;i--){
        b[i]=max(b[i+1],a[i]);
    }
    for(int i=0;i<n-1;i++){
        if(b[i+1]<a[i]) cout<<0<<" ";
        else cout<<(b[i+1]-a[i]+1)<<" ";
    }
    cout<<0<<'\n';
    return 0;
}
