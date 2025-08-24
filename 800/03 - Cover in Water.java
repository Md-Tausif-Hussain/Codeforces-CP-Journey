import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        FastScanner fs = new FastScanner(System.in);
        int t = fs.nextInt(); // number of test cases
        StringBuilder out = new StringBuilder();

        while (t-- > 0) {
            int n = fs.nextInt(); // length of the string
            String s = fs.next(); // input string of length n

            int dots = 0;           // count total number of '.' in the string
            boolean hasTriple = false; // flag to check if "..." exists

            // Traverse the string
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == '.') {
                    dots++; // increment dot count

                    // check if there are 3 consecutive dots starting at position i
                    if (i + 2 < s.length()
                        && s.charAt(i + 1) == '.'
                        && s.charAt(i + 2) == '.') {
                        hasTriple = true;
                    }
                }
            }

            /*
             * Problem logic:
             * - If there are 3 consecutive '.' ("..."), then answer is always 2.
             * - Otherwise, the answer is simply the total number of '.' in the string.
             */
            out.append(hasTriple ? 2 : dots).append('\n');
        }

        // print results for all test cases at once (faster than printing one by one)
        System.out.print(out);
    }

    // Custom fast scanner for faster input handling
    static class FastScanner {
        BufferedReader br;
        StringTokenizer st;
        
        FastScanner(InputStream is) { 
            br = new BufferedReader(new InputStreamReader(is)); 
        }

        // Read next token
        String next() throws IOException {
            while (st == null || !st.hasMoreElements()) 
                st = new StringTokenizer(br.readLine());
            return st.nextToken();
        }

        // Read next integer
        int nextInt() throws IOException { 
            return Integer.parseInt(next()); 
        }
    }
}
