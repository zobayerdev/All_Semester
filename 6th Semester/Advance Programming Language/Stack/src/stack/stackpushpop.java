
package stack;

public class stackpushpop {
    
    int arr[] = new int[10]; 
    int i = 0;
    
    void push(int a)
    {
        if(i < arr.length)
        {
            arr[i++] = a;
           
        }
        else
        {
            System.out.println("Array is full");
        }

    }
        
    void pop(){
      if(i <= 0)
      {
          System.out.println("Array is empth");
      }
      else
      {
          arr[i-1] = 0;
          System.out.println("Value pop successfull");
      }
    }
    
    void display()
    {
        
        if(i<0){
            
            System.out.println("Array is empthy");
        }
        else
        {
            System.out.println("Element are : ");
            for(int x: arr)
            {
                if (x < 0)
                {
                    System.out.println("Elements:  " +x);
                }
                else
                {
                    break;
                }
                
            }
        }
    }
}
