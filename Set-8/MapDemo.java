import java.util.*;

public class MapDemo {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();
        TreeMap<String, Integer> treeMap = new TreeMap<>();
        LinkedHashMap<String, Integer> linkedHashMap = new LinkedHashMap<>();

        // Adding key-value pairs
        hashMap.put("Apple", 10);
        treeMap.put("Banana", 20);
        linkedHashMap.put("Cherry", 30);

        // Retrieving values
        System.out.println("HashMap Value: " + hashMap.get("Apple"));
        System.out.println("TreeMap Value: " + treeMap.get("Banana"));
        System.out.println("LinkedHashMap Value: " + linkedHashMap.get("Cherry"));

        // Removing entries
        hashMap.remove("Apple");
        treeMap.remove("Banana");
        linkedHashMap.remove("Cherry");

        // Displaying the final maps
        System.out.println("Final HashMap: " + hashMap);
        System.out.println("Final TreeMap: " + treeMap);
        System.out.println("Final LinkedHashMap: " + linkedHashMap);
    }
}
