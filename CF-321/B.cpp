#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define ii pair<int, int>
#define f first
#define s second
#define mp make_pair
const int N=1e5+10;
const int inf=1e9;
ll m[N],pre[N];
vector<ii> v;
int main(){
    ll n,d;
    cin>>n>>d;
    ll di,am;
    for(int i=0;i<n;i++) {
        cin>>di>>am;
        v.push_back({di,am});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++) m[i]=v[i].f;
    for(int i=1;i<=n;i++) pre[i]=pre[i-1]+v[i-1].s;

    ll money=0,fri,index;
    for(int i=0;i<n;i++){
        fri=m[i]+d-1;
        index=upper_bound(m,m+n,fri)-m;
        while(index>=1){
            if(m[index-1]>fri) index--;
            else break;
        }
        ll temp=pre[index]-pre[i];
        money=max(money,temp);
    }
    cout<< money <<'\n';
    return 0;


}
