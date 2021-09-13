#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define ii pair<int, int>
#define f first
#define s second
#define mp make_pair
const int N=1e5+10;
const int inf=1e9;
//muy izi
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b) swap(a,b);
    cout<<a<<" "<<(b-a)/2<<'\n';
    return 0;
}
