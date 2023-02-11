
import java.util.logging.Level;
import java.util.logging.Logger;


public class join_alive {

    public static void main(String[] args) {
        
        NewThread ob1 = new NewThread("One");
        NewThread ob2 = new NewThread("two");
        
        System.out.println(ob1);
        System.out.println(ob2);
        
        try {
            ob2.t.join();
            ob1.t.join();
        } catch (InterruptedException ex) {
            System.out.println(ex);
        }
        
        System.out.println(ob1.t.isAlive());
        System.err.println(ob2.t.isAlive());
        System.out.println("Main");
    }
    
}
