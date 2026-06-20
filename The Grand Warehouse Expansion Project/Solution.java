import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        if (!sc.hasNextLine()) {
            System.out.print(0);
            return;
        }

        String line = sc.nextLine().trim();

        if (line.isEmpty()) {
            System.out.print(0);
            return;
        }

        String[] parts = line.split("\\s+");
        int n = parts.length;

        int[] heights = new int[n];

        for (int i = 0; i < n; i++) {
            heights[i] = Integer.parseInt(parts[i]);
        }

        Stack<Integer> stack = new Stack<>();
        long maxArea = 0;

        for (int i = 0; i <= n; i++) {
            int currHeight = (i == n) ? 0 : heights[i];

            while (!stack.isEmpty() && heights[stack.peek()] > currHeight) {
                int height = heights[stack.pop()];

                int width = stack.isEmpty()
                        ? i
                        : i - stack.peek() - 1;

                maxArea = Math.max(maxArea, 1L * height * width);
            }

            stack.push(i);
        }

        System.out.print(maxArea);
    }
}
