#include <bits/stdc++.h>
using namespace std;
#define ii pair<int, int>
#define f first
#define s second
#define mp make_pair
const int mod=1e9+7;
const int N=1e2+10;
int c[N][N];
int cont[N];
int n,m;
//mas que nada implementacion, como hallar el menor indice del maximo valor
//de un array(O(2*n)): calcular el max y ni bien lo encuentre hago break
//constreins bajos asi que cvr
int res(int x,int mx){
    int index;
    for(int j=0;j<m;j++){
        if(c[x][j]==mx){
            index=j+1;
            break;
        }
    }
    return index;
}

int main(){
    vector<int> v;
    cin>>m>>n;
    for(int i=0;i<n;i++){
        int mx=0;
        for(int j=0;j<m;j++){
            cin>>c[i][j];
            mx=max(mx,c[i][j]);
        }
        int r=res(i,mx);
        v.push_back(r);
    }
    int mx1=0;
    for(int i=0;i<v.size();i++){
        cont[v[i]]++;
        mx1=max(mx1,cont[v[i]]);
    }
    cout<<endl;
    int ans;
    for(int i=1;i<=m;i++){
        if(cont[i]==mx1){
            ans=i;
            break;
        }
    }
    cout<< ans <<'\n';
}
