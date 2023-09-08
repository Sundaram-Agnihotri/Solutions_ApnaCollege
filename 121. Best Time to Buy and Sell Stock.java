class Solution {
    public int maxProfit(int[] prices) {
        
        int p = Integer.MAX_VALUE;
        int maxp = 0;

        for(int i=0;i<prices.length;i++){
            if(p<prices[i]){
                int pro = prices[i]-p;
                maxp = Math.max(maxp,pro);

            }
            else{
                p = prices[i];
            }
        }
        return maxp;

    }
}
