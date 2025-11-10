import java.util.Scanner;
public class NameAge{
    public static void main(String args[]){
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter Your name and age");
        String name=scan.nextLine();
        int age=scan.nextInt();
        System.out.println("Your name is "+name+" and your age is "+age);
    }
}