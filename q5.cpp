//https://www.interviewbit.com/problems/subarray-with-given-xor/
#include<bits/stdc++.h>
int subarrayswithsumk(vector<int>a,int k)
{
    int xr=0;
    map<int,int>mpp;
    mpp[xr]++;
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        xr^=a[i];
        int x=xr^k;
        count+=mpp[x];
        mpp[xr]++;
    }
    return count;
}