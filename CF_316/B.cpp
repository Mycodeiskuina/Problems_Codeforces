#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
const int N=1e5+10;
//estaba facil, solo razonar mas rapido
int main(){
    ll n,m;
    cin>>n>>m;
    if(n==1) cout<<1<<'\n';
    else if(2*m<n+1) cout<<m+1<<'\n';
    else cout<<m-1<<'\n';
}
