/*Si quieres hallar un # 1<= x <=n y solo puedes hacer preguntas del tipo :
"x es divisible por y?", cuanto es el minimo numero de preguntas que debes hacer
y que 'y' deber elegir para cada pregunta*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define ii pair<int, int>
#define f first
#define s second
#define mp make_pair
const int N=1e3+10;
const int inf=1e3+10;
bool prime[N];
/*idea: Si preguntas por p^k <= n tal que p es primo y no preguntas
por p^(k+1) <= n, nunca podras saber si x es p^(k+1) o no, por lo tanto
se tienen que preguntar por todas las potencias de numeros primos que sean
<= n, se demuestra que se puede saber todos los numeros del 1 al n*/
void criba(){
    for(int i=1;i<N;i++) prime[i]=true;
    prime[1]=false;
    for(int i=2;i<N;i++){
        for(int j=i+i;j<N;j+=i){
            prime[j]=false;
        }
    }
}

int main(){
    criba();
    int n;
    cin>>n;
    vector<int> ans;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            int a=i;
            while(a<=n){
                ans.push_back(a);
                a*=i;
            }
        }
    }
    cout<<ans.size()<<'\n';
    for(auto x:ans) cout<<x<<" ";
    cout<<'\n';
    return 0;
}
