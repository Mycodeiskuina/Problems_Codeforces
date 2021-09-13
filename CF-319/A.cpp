#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define ii pair<int, int>
#define f first
#define s second
#define mp make_pair
const int N=2e5+10;

int main(){
    int n,x;
    cin>>n>>x;
    int ans=0;
    bool ok=false;
    for(int i=1;i*i<=x;i++){
        if(x%i==0 and x/i<=n and i<=n){
            if(x==i*i) ok=true;
            ans++;
        }
    }
    if(ok) cout<<2*ans-1<<'\n';
    else cout<<2*ans<<'\n';
    //12 9
}
