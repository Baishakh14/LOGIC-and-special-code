#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    int l = 0; ///left pointer
    int r = n-1;   ///right pointer
    int move = 0;
    while(l<r)
    {
        if(v[l] == v[r])
        {
             l++;
             r--;
        }
        else if(v[l]<v[r])
        {
            v[l+1]+=v[l];
            l++;
            move++;
        }
        else
        {
            v[r-1]+=v[r];
            r--;
            move++;
        }
    }
    cout<<move<<endl;

    return 0;
}
