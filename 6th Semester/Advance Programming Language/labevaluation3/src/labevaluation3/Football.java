package labevaluation3;

public class Football {
    
    int radius, weight;
    
    Football(int radius, int weight){
        this.radius = radius;
        this.weight = weight;
    }
    
    Football()
    {
        radius = 1;
        weight = 2;
    }
    
    void display()
    {
        System.out.println("Radius: "+radius);
        System.out.println("Weight: "+weight);
    }
    
}
