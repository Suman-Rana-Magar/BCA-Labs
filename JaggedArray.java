public class JaggedArray {
    public static void main(String args[]) {
        int a[][] = {
                { 1, 2, 3, 4 },
                { 2, 3 },
                { 4 },
                { 3, 4, 5, 7 }
        };
        for (int i = 0; i < a.length; i++) {
            int sum = 0;
            for (int j = 0; j < a[i].length; j++) {
                sum += a[i][j];
            }
            System.out.println("Sum of row " + i + 1 + " is " + sum);
        }
    }
}
