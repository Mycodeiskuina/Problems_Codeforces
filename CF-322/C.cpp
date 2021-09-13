#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define ii pair<int, int>
#define f first
#define s second
#define mp make_pair
const int N=1e5+10;
const int inf=1e9;
int a[N];
//para que ordene en funcion de los restos en modulo 10 de cada elemento
bool comp(int x,int y){
    return x%10 > y%10;
}

int main(){
    int n,k;
    cin>>n>>k;
    int ans=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n,comp);
    int cont=0;
    for(int i=0;i<n;i++){
        int b=10-(a[i]%10);
        if(k-b>=0){
            a[i]+=b;
            k-=b;
        }
        ans+=(a[i]/10);
        cont+=(100-a[i]);
    }
    //cout<<ans<<" "<<cont<<endl;
    cout<<ans+(min(k,cont)/10)<<'\n';
    return 0;
}
