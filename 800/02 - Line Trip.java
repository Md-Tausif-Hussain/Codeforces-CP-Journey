import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt(); // number of test cases

        while (t-- > 0) {
            int n = sc.nextInt(); // number of gas stations
            int x = sc.nextInt(); // destination point (end of the trip)

            // Create an array of stations including:
            // - start point at 0
            // - given n stations
            // - end point at x
            int[] stations = new int[n + 2];
            stations[0] = 0; // starting point (origin)

            // read station positions
            for (int i = 1; i <= n; i++) {
                stations[i] = sc.nextInt();
            }

            stations[n + 1] = x; // destination point

            int maxGap = 0;

            // Find maximum gap between consecutive stations (including start and end)
            for (int i = 1; i < stations.length; i++) {
                maxGap = Math.max(maxGap, stations[i] - stations[i - 1]);
            }

            /*
             * Special case:
             * At the very end, after the last station (stations[n]),
             * the car must go to the destination (x).
             * Since you may have to travel there and back,
             * we check 2 * (x - stations[n]) as a possible larger gap.
             */
            maxGap = Math.max(maxGap, 2 * (x - stations[n]));

            // print the maximum gap found
            System.out.println(maxGap);
        }

        sc.close();
    }
}
