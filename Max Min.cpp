//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int maxNo = INT_MIN;
    	int minNo = INT_MAX;
    	
    	for(int i=0;i<N;i++)
    	{
    	  maxNo = max(maxNo,A[i]);
    	  minNo = min(minNo,A[i]);
    	}
    	
    	return maxNo + minNo ;
    }

};
