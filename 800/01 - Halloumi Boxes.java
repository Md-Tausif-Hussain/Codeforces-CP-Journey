import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt(); // number of test cases

        while (t-- > 0) {
            int n = sc.nextInt(); // size of the array
            int k = sc.nextInt(); // operation constraint
            int[] arr = new int[n];

            // read array elements
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            // check if the array is already sorted
            boolean sorted = true;
            for (int i = 0; i + 1 < n; i++) {
                if (arr[i] > arr[i + 1]) {
                    sorted = false;
                    break;
                }
            }

            /*
             * Logic:
             * - If the array is already sorted → Answer is "YES".
             * - If k > 1 → We can always rearrange freely, so "YES".
             * - Otherwise (k == 1 and array not sorted) → Answer is "NO".
             */
            if (sorted || k > 1) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        sc.close();
    }
}
