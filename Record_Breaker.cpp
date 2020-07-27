#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int p=1;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int hi=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>hi&&(i==n-1||arr[i]>arr[i+1]))
            {
                ans++;
                
            }
            hi=max(hi,arr[i]);
        }
        cout<<"case #"<<p<<": "<<ans<<endl;
        p++;
    }
}