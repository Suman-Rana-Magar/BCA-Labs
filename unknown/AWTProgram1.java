package unknown;
import java.awt.*;

public class AWTProgram1 {
    AWTProgram1() {
        Frame f = new Frame("Program 1");

        Label label = new Label("Choose language and agree:");
        label.setBounds(50, 50, 200, 30);

        Checkbox check = new Checkbox("I Agree");
        check.setBounds(50, 90, 100, 30);

        Choice choice = new Choice();
        choice.setBounds(50, 130, 150, 30);
        choice.add("Java");
        choice.add("Python");
        choice.add("C++");

        Button btn = new Button("Submit");
        btn.setBounds(50, 170, 80, 30);

        f.setSize(300, 300);
        f.add(label);
        f.add(check);
        f.add(choice);
        f.add(btn);
        f.setLayout(null);
        f.setVisible(true);
    }

    public static void main(String[] args) {
        new AWTProgram1();
    }
}
