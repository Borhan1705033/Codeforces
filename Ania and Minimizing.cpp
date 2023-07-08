


#include<bits/stdc++.h>
using namespace std;

///////  short form //////////

//#define pi 3.14159265

#define pb push_back;
#define pi acos(-1.0)
#define fr0(i,n,j) for(i=j;i<n;i++)
#define fr(i,n,j) for(i=j;i<=n;i++)
#define rfr(i,n,j) for(i=n;i>=j;i--)
#define ct continue;
#define yo cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
#define mod 1e9+7
#define N 1e5


#define FAST  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define FF fflush(stdout);




/////// short Function /////////
#define lcm(a,b) (a*b)/__gcd(a,b)


int main()
{
    int test;
    test=1;
    //cin>>test;
    for(int test_case=1;test_case<=test;test_case++)
    {
        int n,k,i,j,cnt=0;
        string str;
        cin>>n>>k>>str;
        i=0;
        if(str.size()==1)
        {
            if(k)
            {
                str[0]='0';
            }
            cout<<str<<endl;
           return 0;
        }
        if(str[0]=='1')
        {
            i=1;
        }
        while(k)
        {
           //  cout<<"shuru : "<<i<<"   "<<k<<endl;
            if(i==0)
            {
                str[i]='1';
                i++;
                k--;
                continue;
            }
            if(str[i]=='0')
            {
               i++;
             //  cout<<"0  "<<i<<endl;
            }
            else{
                str[i]='0';
                i++;
                k--;
            }

            //cout<<"shesh : "<<i<<"   "<<k<<endl;
            if(i==str.size())
            {
                break;
            }
        }
        cout<<str<<endl;
    }
}
