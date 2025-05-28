// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define pbs insert
// #define pi pair<ll,ll>
// #define py cout<<"YES\n";
// #define pys cout<<"Yes\n";
// #define pn cout<<"NO\n";
// #define pns cout<<"No\n";
// #define co(x1) cout<<x1<<"\n";
// #define ct(x1) cout<<x1<<" ";
// #define elc cout<<"\n";
// #define el "\n";
// #define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
// #define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
// #define flx(x1) for(auto x:x1) ct(x) elc
// #define forni for(int i=0;i<n;i++)
// #define all(x1) x1.begin(),x1.end()
// #define allr(x1) x1.rbegin(),x1.rend()
// #define sz(x) x.size()
// #define vec(x) vector<x>

// void asikM(){
//     ll n,k;
//     cin >> n>>k;
//     set<ll>s;
//     vector <ll> a(n),b(n),ans(n);
//     for (auto& x:a) {cin >>x; s.insert(x);}
//     for (auto& x:b) cin >>x; 
//     map<ll,pi>m;
//     forni{
//         m[a[i]].first=b[i];
//         m[a[i]].second=i;
//     }
//     for(auto [x,y]:m){
//         vector<ll>v;
//         for(auto it:s){
//             if(it>=x) break;
//             else v.pb(m[it].first);
//         }
//         sort(allr(v));
//         ll c=0;
//         for(int i=0;i<min((ll)sz(v),k);i++){
//             c+=v[i];
//         }
//         ans[y.second]=c;
//     }
//     flx(ans)
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t=1;
//     cin >> t;
//     while (t--)
//     asikM();      
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pi pair<ll,ll>
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>
#define flx(x1) for(auto x:x1) ct(x) elc

void asikM(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    vector<tuple<ll, ll, ll>> data;
    forni data.pb({a[i], b[i], i});
    sort(all(data));
    vec(ll) ans(n, 0);
    priority_queue<ll, vec(ll), greater<ll>> pq;
    ll sum = 0;
    for (auto &[val, cost, idx] : data) {
        ans[idx] = sum;
        pq.push(cost);
        sum += cost;
        if (sz(pq) > k) {
            sum -= pq.top();
            pq.pop();
        }
    }
    flx(ans)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) asikM();
    return 0;
}
