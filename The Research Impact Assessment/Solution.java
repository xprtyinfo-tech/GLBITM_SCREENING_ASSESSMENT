import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String line = sc.nextLine();
        String[] parts = line.trim().split("\\s+");

        int[] citations = new int[parts.length];

        for (int i = 0; i < parts.length; i++) {
            citations[i] = Integer.parseInt(parts[i]);
        }

        Arrays.sort(citations);

        int h = 0;
        int n = citations.length;

        for (int i = 0; i < n; i++) {
            if (citations[i] >= n - i) {
                h = n - i;
                break;
            }
        }

        System.out.print(h);
    }
}
