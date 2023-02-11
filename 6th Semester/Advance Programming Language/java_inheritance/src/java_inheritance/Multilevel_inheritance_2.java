package java_inheritance;

class A{
    int i ;
    void show(int a){
        i = a;
        System.out.println(i);
    }
}

class B extends A{
    int j;
    
    void show(int a)
    {
        
       super.show(5);
       j = a;
        
        System.out.println(i+j);
    }
}


class C extends B{
    
    int k;
    
    void show(int a)
    {
        super.show(20);
        k = a;
        
        System.out.println(k+j+i);
    }
}


public class Multilevel_inheritance_2 {
    
    public static void main(String[] args) {    
        
        
        C ob = new C();
//        ob.show(10);
//        ob.show(20);
        ob.show(30);
    }
}