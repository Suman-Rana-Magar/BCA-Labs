import java.util.*;

public class StringConcatination {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter two strings:");
        String str1 = scan.next();
        String str2 = scan.next();
        if (str1.compareTo(str2) < 0)
            System.out.println(str1 + " < " + str2);
        else if (str1.compareTo(str2) == 0)
            System.out.println(str1 + " = " + str2);
        else
            System.out.println(str1 + " > " + str2);
        String concatinated = str1.concat(str2);
        System.out.println("The concatinated string is " + concatinated);

        // Using Map
        Map<Character, Integer> repeated = new HashMap<Character, Integer>();
        for (int i = 0; i < concatinated.length(); i++) {
            char ch = concatinated.charAt(i);
            if (repeated.containsKey(ch))
                repeated.put(ch, repeated.get(ch) + 1);
            else
                repeated.put(ch, 1);
        }
        String nonRepeating = "";
        for (Map.Entry m : repeated.entrySet()) {
            if ((int) m.getValue() == 1)
                nonRepeating += (char) m.getKey();
        }

        char allChars[] = concatinated.toCharArray();
        Arrays.sort(allChars);
        String ascendString = new String(allChars);
        StringBuffer descendString = new StringBuffer(ascendString);
        descendString.reverse();
        System.out.println("The string \"" + concatinated + "\" sorted in ascending order is \"" + ascendString
                + "\" and in descending order is \"" + descendString + "\"");
        System.out.println("String after removing repeating characters became \"" + nonRepeating + "\"");
    }
}