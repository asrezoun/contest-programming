#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>
#include<cmath>
#include<bitset>
#include<queue>

using namespace std;

#define ll long long
#define ull unsigned long long
#define mod 1000000007
#define f first
#define s second
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define mx 1000001

int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int n,k;
    cin>>n>>k;

    int ar[n+1];
    ar[0]=0;
    for(int i=1;i<=n;i++)
        cin>>ar[i];
    for(int i=1;i<=n;i++)
        ar[i]+=ar[i-1];
    // for(int i=0;i<=n;i++)
    //     cout<<ar[i]<<" ";
    int pos=1,temp=0,min=INT_MAX;
    for(int i=1;i<=n-k+1;i++)
        {
            temp = ar[i+k-1]-ar[i-1];
            if(temp<min)
                {pos=i; min= temp;}
        }
    cout<<pos<<"\n";
    return 0;
}
