package labevaluation_3;

import java.util.Scanner;

public class MainBox {

    public static void main(String[] args) {
       Scanner userinput = new Scanner(System.in);
       
     
        System.out.println("Enter Length : ");
        int len = userinput.nextInt();
        
     
        Box boxvalue = new Box(len);
        boxvalue.display();
        System.out.println("Voulem is : "+boxvalue.volume(boxvalue));
    }
    
}
