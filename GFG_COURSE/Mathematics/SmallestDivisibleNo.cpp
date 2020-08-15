/* AUTHOR : Suvodeep Sinha */
/* https://practice.geeksforgeeks.org/problems/smallest-divisible-number/1/?track=ppc-mathematics&batchId=221*/

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, n) for(int i = a; i < n; i++)
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define mod 1000000007
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

int getSmallestDivNum(int n){

    int ans = 1;

    for(int i=1;i<n;i++){
        ans = lcm(ans,i+1);
        //cout << ans << endl;
    }
   return ans;
 
    //cout << ans;
    
}

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t;cin >>t;
  while(t--){
      int n;cin >>n;
      cout <<getSmallestDivNum(n)<<endl;


  }
  return 0;
}

