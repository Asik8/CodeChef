#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define sz(x) x.size()
#define vec vector<int>

void asikM(){
    int n;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]--;
    }
    int c=0;
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<bool>vis(n,false);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            int s=0,j=i;
            while(!vis[j]){
                vis[j]=true;
                s++;
                j=v[j];
            }
            pq.push(s);
        }
    }
    while(pq.size()>1){
        int m1=pq.top();
        pq.pop();
        int m2=pq.top();
        pq.pop();
        c+=m1+m2;
        pq.push(m1+m2);
    }
    co(c)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        asikM();      
    }
    return 0;
}