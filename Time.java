
import java.util.Scanner;

public class Time {
    int h, m, s;

    Time(int h, int m, int s) {
        this.h = h;
        this.m = m;
        this.s = s;
    }

    static Time add(Time t1, Time t2) {
        Time t3 = new Time(0, 0, 0);
        t3.h = t1.h + t2.h;
        t3.m = t1.m + t2.m;
        t3.s = t1.s + t2.s;
        if (t3.s >= 60) {
            t3.m += t3.s / 60;
            t3.s %= 60;
        }
        if (t3.m >= 60) {
            t3.h += t3.m / 60;
            t3.m %= 60;
        }
        return t3;
    }

    static Time subtract(Time t1, Time t2) {
        Time t3 = new Time(0, 0, 0);
        int time1 = t1.h * 60 * 60 + t1.m * 60 + t1.s;
        int time2 = t2.h * 60 * 60 + t2.m * 60 + t2.s;
        int finalTime;
        if (time1 > time2)
            finalTime = time1 - time2;
        else
            finalTime = time2 - time1;
        t3.s = finalTime % 60;
        finalTime /= 60;
        t3.m = finalTime % 60;
        finalTime /= 60;
        t3.h = finalTime;
        return t3;
    }

    public static void main(String args[]) {
        int h1, m1, s1, h2, m2, s2;
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter first time (HH:MM:SS)");
        h1 = scan.nextInt();
        m1 = scan.nextInt();
        s1 = scan.nextInt();
        System.out.println("Enter second time (HH:MM:SS)");
        h2 = scan.nextInt();
        m2 = scan.nextInt();
        s2 = scan.nextInt();
        Time t1 = new Time(h1, m1, s1);
        Time t2 = new Time(h2, m2, s2);
        Time addition = add(t1, t2);
        Time subtraction = subtract(t1, t2);
        System.out
                .println("The addition of given time is: " + addition.h + "h:" + addition.m + "m:" + addition.s + "s");
        System.out
                .println("The subtraction of given time is: " + subtraction.h + "h:" + subtraction.m + "m:" + subtraction.s + "s");
    }
}
