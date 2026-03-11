import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections; // Used for sorting
import java.util.List;
import java.util.stream.Collectors;

public class Plm_04 {

  public static void main(String[] args) {
      
      try {
        // Create a list of integers

        List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

        System.out.println("Original List: " + numbers);
        System.out.println("------------------------------------------------");

        // i. Filter out all even numbers (Keep only odds)
        // Logic: n % 2 != 0 means it is odd.

        List<Integer> oddNumbers = numbers.stream().filter(n -> n % 2 != 0).collect(Collectors.toList());
        System.out.println("i. Filtered (Odds only): " + oddNumbers);

        // ii. Map to Squares
        // Logic: n -> n * n

        List<Integer> squares = numbers.stream().map(n -> n * n).collect(Collectors.toList());
        System.out.println("ii. Squares: " + squares);

        // iii. Reduce to Sum
        // Logic: Start at 0, add 'a' (running total) + 'b' (current number)

        int sum = numbers.stream().reduce(0, (a, b) -> a + b);
        System.out.println("iii. Sum of all numbers: " + sum);

        // iv. Sort in Descending Order
        // Logic: (a, b) -> b - a sorts high to low.

        List<Integer> sortedDesc = numbers.stream().sorted((a, b) -> b - a).collect(Collectors.toList());
        System.out.println("iv. Sorted Descending: " + sortedDesc);

        // v. Print Each Element

        System.out.print("v. Printing each element: ");
        numbers.forEach(n -> System.out.print(n + " "));
        System.out.println(); // New line

      } 
         catch (Exception e) {
          // General error handling as requested
            
            System.out.println("An error occurred while processing the list: " + e.getMessage());
        }
    }
}





//question er bangla daw
//🔹 Q2 – প্রশ্নের বাংলা অনুবাদ
//
//Q2: Java Lambda Expression ব্যবহার করে LambdaCalculus নামে একটি প্রোগ্রাম লিখো, যা একটি Integer লিস্টের উপর নিচের কাজগুলো করবে—
//
//i. জোড় সংখ্যা বের করা:
//লিস্ট থেকে সব জোড় সংখ্যা আলাদা করো।
//
//ii. Square বের করা:
//লিস্টের প্রতিটি সংখ্যাকে তার বর্গ (square) এ রূপান্তর করো।
//
//iii. Sum বের করা:
//লিস্টের সব সংখ্যার যোগফল নির্ণয় করো।
//
//iv. Descending Order এ Sort করা:
//লিস্টটিকে বড় থেকে ছোট ক্রমে সাজাও।
//
//v. প্রতিটি উপাদান প্রিন্ট করা:
//লিস্টের প্রতিটি উপাদান প্রিন্ট করো।
