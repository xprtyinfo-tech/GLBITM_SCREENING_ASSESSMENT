import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        List<List<Integer>> matrix = new ArrayList<>();

        while (sc.hasNextLine()) {
            String line = sc.nextLine().trim();

            if (line.isEmpty()) continue;

            String[] parts = line.split("\\s+");
            List<Integer> row = new ArrayList<>();

            for (String part : parts) {
                row.add(Integer.parseInt(part));
            }

            matrix.add(row);
        }

        if (matrix.isEmpty()) {
            return;
        }

        int rows = matrix.size();
        int cols = matrix.get(0).size();

        int top = 0, bottom = rows - 1;
        int left = 0, right = cols - 1;

        List<Integer> result = new ArrayList<>();

        while (top <= bottom && left <= right) {

            for (int j = left; j <= right; j++)
                result.add(matrix.get(top).get(j));
            top++;

            for (int i = top; i <= bottom; i++)
                result.add(matrix.get(i).get(right));
            right--;

            if (top <= bottom) {
                for (int j = right; j >= left; j--)
                    result.add(matrix.get(bottom).get(j));
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    result.add(matrix.get(i).get(left));
                left++;
            }
        }

        for (int i = 0; i < result.size(); i++) {
            if (i > 0) System.out.print(" ");
            System.out.print(result.get(i));
        }
    }
}
