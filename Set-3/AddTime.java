import java.util.Scanner;

class Time {
    private int hour, minute, second;

    Time() {
        hour = minute = second = 0;
    }

    Time(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    public void displayTime() {
        System.out.println(hour + ":" + minute + ":" + second);
    }

    public Time addTime(Time t1, Time t2) {
        Time result = new Time();
        result.second = t1.second + t2.second;
        result.minute = t1.minute + t2.minute;
        result.hour = t1.hour + t2.hour;

        if (result.second >= 60) {
            result.minute += result.second / 60;
            result.second = result.second % 60;
        }
        if (result.minute >= 60) {
            result.hour += result.minute / 60;
            result.minute = result.minute % 60;
        }
        return result;
    }
}

public class AddTime {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Time[] times = new Time[2];

        for (int i = 0; i < 2; i++) {
            System.out.println("Enter the time " + (i + 1) + ":");
            System.out.print("Hour: ");
            int h = scan.nextInt();
            System.out.print("Minute: ");
            int m = scan.nextInt();
            System.out.print("Second: ");
            int s = scan.nextInt();
            times[i] = new Time(h, m, s);
        }

        Time result = new Time();
        result = result.addTime(times[0], times[1]);

        System.out.print("Result: ");
        result.displayTime();
    }
}
