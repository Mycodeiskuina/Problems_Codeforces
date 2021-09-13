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

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0,temp=0;
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1])temp++;
        else temp=0;
        ans=max(ans,temp);
    }
    cout<< ans+1 <<'\n';
    return 0;


}
