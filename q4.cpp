//https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int sum=0;
        int length=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            if(sum==0)
            {
                length=max(length,i+1);
            }
            int rem=sum-0;
            if(mpp.find(rem)!=mpp.end())
            {
                length=max(length,i-mpp[rem]);
                
            }
        
            if(mpp.find(sum)==mpp.end())
            {
                mpp[sum]=i;
            }
        }
        return length;
    }
};