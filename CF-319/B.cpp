#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define ii pair<int, int>
#define f first
#define s second
#define mp make_pair
const int N=1e6+10,M=1e3+10;
const int inf=1e9;
int a[N];
int dp[M][M];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i+1];
        a[i+1]%=m;
    }
    //por teorema de casillas
    if(n>m) cout<<"YES\n";
    else{
        dp[0][0]=1;
        for(int pos=1;pos<=n;pos++){
            for(int res=0;res<=m;res++){
                dp[pos][res]=(dp[pos-1][res] or dp[pos-1][(res+a[pos])%m]);
            }
        }
        if(dp[n][m]) cout<<"YES\n";
        else  cout<<"NO\n";
    }
}
