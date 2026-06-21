import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String line = sc.nextLine();
        String[] parts = line.trim().split("\\s+");

        int n = parts.length;
        int[] cost = new int[n];

        for (int i = 0; i < n; i++) {
            cost[i] = Integer.parseInt(parts[i]);
        }

        int prev2 = cost[0];
        int prev1 = cost[1];

        for (int i = 2; i < n; i++) {
            int curr = cost[i] + Math.min(prev1, prev2);
            prev2 = prev1;
            prev1 = curr;
        }

        System.out.print(Math.min(prev1, prev2));
    }
}
