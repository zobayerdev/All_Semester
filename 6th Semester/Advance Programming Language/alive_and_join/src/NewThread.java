
import static java.lang.Thread.sleep;
import java.util.logging.Level;
import java.util.logging.Logger;


public class NewThread implements Runnable{
    
    String name;
    Thread t;
    
    NewThread(String nm){
        name = nm;
        
        t = new Thread(this,name);
        System.out.println("name "+t);
        t.start();
    }
    
    
    public void run() 
    {
       for(int i=5; i>0; i--)
       {
           System.out.println("Name "+t);
           try {
               sleep (1000);
           } catch (InterruptedException ex) {
               Logger.getLogger(NewThread.class.getName()).log(Level.SEVERE, null, ex);
           }
       }
    }

        
}
