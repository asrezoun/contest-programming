#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>
#include<bitset>

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
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
    #endif
    int t;
    cin>>t;
    while(t--)
        {
            ll a,b,cn=0;
            cin>>a>>b;
            if(b>a)
                swap(a,b);

            //cout<<a<<" "<<b;
            while(1)
                {
                    cn+=a/b;
                    if(a%b==0)
                        break;
                    a=a%b;
                    swap(a,b);
                }
            cout<<cn<<"\n";
        }

    return 0;
}
