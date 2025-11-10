import java.util.*;

public class ListDemo {
    public static void main(String[] args) {
        ArrayList<String> arrayList = new ArrayList<>();
        LinkedList<String> linkedList = new LinkedList<>();

        // Add elements
        arrayList.add("Java");
        linkedList.add("Python");

        // Retrieve elements
        System.out.println("ArrayList Element: " + arrayList.get(0));
        System.out.println("LinkedList Element: " + linkedList.get(0));

        // Update elements
        arrayList.set(0, "C++");
        linkedList.set(0, "JavaScript");

        // Remove elements
        arrayList.remove("C++");
        linkedList.remove("JavaScript");

        // Final display
        System.out.println("Final ArrayList: " + arrayList);
        System.out.println("Final LinkedList: " + linkedList);
    }
}
