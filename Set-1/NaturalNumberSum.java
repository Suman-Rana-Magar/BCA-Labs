
import java.util.Scanner;

class NaturalNumberSum{
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        System.out.print("Enter a number upto which you want sum: ");
        int num=scan.nextInt();
        int sum=0,i=num;
        do { 
            sum+=i;
            i--;
        } while (i!=0);
        System.out.println("The sum from 1 to "+num+" is "+sum);
    }
}