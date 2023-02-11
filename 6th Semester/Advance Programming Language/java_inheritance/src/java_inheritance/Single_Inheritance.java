package java_inheritance;

class Box {

    double width, height, depth;

    Box(double w, double h, double d) {
        width = w;
        height = h;
        depth = d;
    }

    Box(Box ob) {
        width = ob.width;
        height = ob.height;
        depth = ob.depth;
    }
    
    Box(){
        
        width = -1;
        height = -1;
        depth = -1;
    }

    void volume() {
        System.out.println(width * height * depth);
    }

}

class BoxWeight extends Box {

    double weight;

    BoxWeight(double w, double h, double d, double m) {
//            width = w;
//            height = h;
//            depth = d;

        super(w, h, d);

        weight = m;

    }

    BoxWeight(BoxWeight ob) {
            width = ob.width;
            height = ob.height;
            depth = ob.depth;

        //super(ob);
        weight = ob.weight;

        //  System.out.println(ob.depth*ob.height*ob.depth*ob.weight);
    }
    
     void volume2() {
        System.out.println(width * height * depth);
    }
}

public class Single_Inheritance {

    public static void main(String[] args) {

        BoxWeight ob1 = new BoxWeight(10, 20, 30, 40);
        BoxWeight ob2 = new BoxWeight(ob1);
        
        ob1.volume();
        ob1.volume2();
        
        ob2.volume();
        ob2.volume2();
    }
}
