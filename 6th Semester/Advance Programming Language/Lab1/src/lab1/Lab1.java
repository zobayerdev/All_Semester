package lab1;
public class Lab1 {
    public static void main(String[] args) {
   
        // created array
        int[] element = {1, 9, 27, 28, 48};
       
       // iterating over an array using for loop
        System.out.println(
            "iterating over an array using for loop in Java:");
       
        for (int i = 0; i < element.length; i++) {
            System.out.println(element[i]);
        }
       
        // iterating over an array using  forEach() loop
        System.out.println(
            "iterating over an array using forEach() loop in Java:");
        for (int var : element) { // syntax forEach() loop
                                  // var is variable.
            System.out.println(var);
        }
    }
    
}
