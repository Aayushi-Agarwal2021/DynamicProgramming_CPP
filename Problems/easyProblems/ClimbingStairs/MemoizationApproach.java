import java.util.Arrays;

public class MemoizationApproach {
     private int memo(int[] cost, int n, int[] dp){
        if(n<0)
        return 0;
        if(dp[n]!=-1)
        return dp[n];
        dp[n] = cost[n]+Math.min(memo(cost,n-1,dp),memo(cost,n-2,dp));
        return dp[n];
    }
    public int minCostClimbingStairs(int[] cost) {
        int n = cost.length;
        int dp[] = new int[n+1];
        Arrays.fill(dp, -1);
        return Math.min(memo(cost,n-1,dp),memo(cost,n-2,dp));
    }
}
