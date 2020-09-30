#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;

void Res(){
    int a,b;
    cin>>a>>b;
    ll mul = (ll) a * b;

    int mod;

    while(b != 0){
        mod = a % b;
        a = b;
        b = mod;
    }
    cout << mul/a << ' ' << a << '\n';
}

// cach 2: (recommended)

// void Res(){
//     int a,b;
//     cin>>a>>b;
//     ll mul = (ll) a * b;

//     int ans = __gcd(a,b);
//     cout << mul/ans << ' ' << ans << '\n';

// }

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}