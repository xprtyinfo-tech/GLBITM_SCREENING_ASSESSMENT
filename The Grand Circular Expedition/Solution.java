import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String gasLine = sc.nextLine();
        String costLine = sc.nextLine();

        String[] gasParts = gasLine.trim().split("\\s+");
        String[] costParts = costLine.trim().split("\\s+");

        int n = gasParts.length;

        int[] gas = new int[n];
        int[] cost = new int[n];

        for (int i = 0; i < n; i++) {
            gas[i] = Integer.parseInt(gasParts[i]);
            cost[i] = Integer.parseInt(costParts[i]);
        }

        long totalTank = 0;
        long currentTank = 0;
        int start = 0;

        for (int i = 0; i < n; i++) {
            int diff = gas[i] - cost[i];

            totalTank += diff;
            currentTank += diff;

            if (currentTank < 0) {
                start = i + 1;
                currentTank = 0;
            }
        }

        System.out.print(totalTank >= 0 ? start : -1);
    }
}
