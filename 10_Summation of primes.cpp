/*
_    _                 _ _         _____                          _
| |  | |               | | |       / ____|                        | |
| |__| | __ _ _ __   __| | | ___  | |  __  __ _ _ __ ___   ___  __| |
|  __  |/ _` | '_ \ / _` | |/ _ \ | | |_ |/ _` | '_ ` _ \ / _ \/ _` |
| |  | | (_| | | | | (_| | |  __/ | |__| | (_| | | | | | |  __/ (_| |
|_|  |_|\__,_|_| |_|\__,_|_|\___|  \_____|\__,_|_| |_| |_|\___|\__,_|

         pausing is not losing
*/

/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define all(v) ((v).begin()), ((v).end()) //sorting from the smallest
#define Ceil(x,y) ((x+y-1)/y)
#define watch(x) cout<<(#x)<<" = "<<x<<endl //print the variable and the current value of it
#define rt(s) return cout<<s,0 //cout<<s; return 0;
#define IAMTRYINGandCRYING ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define infinity 2'000'000'000
#define sz(x) int(x.size())
#define numOfOnes(n) __builtin_popcount(n)
#define N 2'000'001
bool prime[N];

ll seive() {
    for (ll i = 0; i <=N; ++i) {
        prime[i]=1;
    }
    for (ll i = 2; i <=sqrt(N); ++i) {
        if(prime[i]==1){
            for (ll j = i; i*j<=N; ++j) {
                prime[i*j]=0; // set al multiples of a prime number to 0
            }
        }
    }
    ll sum=0;
    for (int i = 2; i <=N; ++i) {
        if(prime[i]==1){
            sum+=i;
        }
    }
    return sum;
}
int main() {
    IAMTRYINGandCRYING;
    cout<<seive();
}
*/
