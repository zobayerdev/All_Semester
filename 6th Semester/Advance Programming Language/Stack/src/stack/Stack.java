
package stack;

import java.util.Scanner;


public class Stack {

    public static void main(String[] args) {

        
      Scanner in = new Scanner(System.in);
      stackpushpop ob = new stackpushpop();
      
      boolean b = true ;
      while(b)
      {
          System.out.println("Choose option : ");
          System.out.println("push");
          System.out.println("pop");
          System.out.println("show");
          
          int c = in.nextInt();
          switch(c)
          {
              case 0:
                  b = false ;
                  break;
              case 1:
                  System.out.println("Enter your value ");
                  int a = in.nextInt();
                  ob.push(a);
                  
              case 2 :
                  ob.pop();
                  break;
              case 3:
                  ob.display();
                  break;
              default:
                  System.out.println("Worng input");
                  break;
          }
      }
      
    }
    
}
