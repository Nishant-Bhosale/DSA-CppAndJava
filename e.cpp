#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      ll n, k;
      cin>>n>>k;
      vector<ll> arr(n);
      map<ll,ll> mp;
      for(ll i = 0;i<n;i++) {
         cin>>arr[i];
         mp[arr[i]]++;
      }
      bool flag = false;

      if(n == 1){
         if(arr[0] == k){
            cout<<"YES"<<endl;
         }else{
            cout<<"NO"<<endl;
         }
         continue;
      }

      for(ll i = 0; i < n; i++){
         ll val = arr[i] + k;
         if(mp[val] > 0){
            flag = true;
            break;
         }
         val = arr[i] - k;
         if(mp[val] > 0){
            flag = true;
            break;
         }
      }
      

      cout<<(flag ? "YES" : "NO")<<endl;
   };

   return 0;
}