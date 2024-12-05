
public class MinCostClimbinStairs {
      public static void main(String[] args) {
        int[] cost = {10, 15, 20};
        RecusriveApproach recusriveApproach = new RecusriveApproach();
        System.out.println("Recursive Method called:   " + recusriveApproach.minCostClimbingStairs(cost));
        MemoizationApproach memoizationApproach = new MemoizationApproach();
        System.out.println("Memoization Method called: "+ memoizationApproach.minCostClimbingStairs(cost));
        TabulationApproach tabulationApproach = new TabulationApproach();
        System.out.println("Tabulation method called:  "+tabulationApproach.minCostClimbingStairs(cost));
        OptimizedApproach optimizedApproach = new OptimizedApproach();
        System.out.println("Space optimized Method called: "+optimizedApproach.minCostClimbingStairs(cost));

      }
}
