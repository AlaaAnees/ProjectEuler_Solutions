/*
_    _                 _ _         _____                          _
| |  | |               | | |       / ____|                        | |
| |__| | __ _ _ __   __| | | ___  | |  __  __ _ _ __ ___   ___  __| |
|  __  |/ _` | '_ \ / _` | |/ _ \ | | |_ |/ _` | '_ ` _ \ / _ \/ _` |
| |  | | (_| | | | | (_| | |  __/ | |__| | (_| | | | | | |  __/ (_| |
|_|  |_|\__,_|_| |_|\__,_|_|\___|  \_____|\__,_|_| |_| |_|\___|\__,_|

          pausing is not losing
*/

/*#include <bits/stdc++.h>
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
#define N 4'000'001
int main() {
    IAMTRYINGandCRYING;
    int x=1,y=1,z=1,sum=0;

    while(z<=N){
        if(z%2==0) sum+=z;
        // x y z
        // 1 2 3
        z=x+y;
        // moving forward for the next x y
        x=y;
        y=z;
    }
    cout<<sum;


}*/
/*  fib[0]=1;
    fib[1]=2;
    int sum=0;
   while(fib[1]<=n){
      if (fib[1]%2==0) sum+=fib[1];

   }
    for (int i =2; i <n; ++i) {
        if(fib[1]%2==0) sum+=fib[1];
        fib[i]=fib[i-1]+fib[i+2];
        fib[0]=fib[1];
        fib[1]=fib[i];

    }
    cout<<sum<<endl;*/