class Cricketer {
    String name;
    int age, matches;

    void getData(String name, int age, int matches) {
        this.name = name;
        this.age = age;
        this.matches = matches;
    }

    void displayData() {
        System.out.println(
                "Following are the Details: \nName: " + name + "\nAge: " + age + "\nNo. of Matches Played: " + matches);
    }
}

class Bowler extends Cricketer {
    int wickets;

    void getWicket(int wickets) {
        this.wickets = wickets;
    }

    void displayWicket() {
        System.out.println("Wickets: " + wickets);
    }
}

class Batsman extends Cricketer {
    int runs, centuries;

    void getRun(int runs, int centuries) {
        this.runs = runs;
        this.centuries = centuries;
    }

    void displayRuns() {
        System.out.println("Runs: " + runs + "\nCenturies: " + centuries);
    }
}

public class Cricket {
    public static void main(String args[]) {
        Cricketer cr=new Cricketer();
        cr.getData("Suman", 20, 202);
        Bowler br = new Bowler();
        br.getWicket(150);
        Batsman bm = new Batsman();
        bm.getRun(2000, 50);
        cr.displayData();
        br.displayWicket();
        bm.displayRuns();
    }
}
