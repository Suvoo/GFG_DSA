/* https://practice.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1/?track=ppc-matrix&batchId=221 */

/* AUTHOR : Suvodeep Sinha */
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

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t;cin >>t;
  while(t--){

  int n;cin>>n;
  int a[n][n];

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> a[i][j];
    }
  }

  for(int i=n-1;i>=0;i--){
    for(int j=0;j<n;j++){
      cout << a[j][i] <<" ";
    }
    //cout << endl;
  }

  cout << endl;
}

}
