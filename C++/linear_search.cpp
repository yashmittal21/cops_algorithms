/* ****Yash_mittal**** */

#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)  for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;

#define N  100005

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int fl=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<i;
            fl=1;
            break;
        }
    }
    if(fl==0)
        cout<<"Not found";
    return 0;
}