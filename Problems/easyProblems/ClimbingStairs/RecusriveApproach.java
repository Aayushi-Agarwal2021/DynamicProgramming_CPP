public class RecusriveApproach {
    private int recursiveFunction(int[] cost, int n){
        if(n<0)
        return 0;
        return cost[n] + Math.min(recursiveFunction(cost,n-1),recursiveFunction(cost,n-2));
    }
    public int minCostClimbingStairs(int[] cost) {
        int n = cost.length;
        return Math.min(recursiveFunction(cost,n-1),recursiveFunction(cost,n-2));
    }
}
