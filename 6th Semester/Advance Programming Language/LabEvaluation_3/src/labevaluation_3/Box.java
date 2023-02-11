
package labevaluation_3;


public class Box {
    
    int len;
    int width =20 , height=10;
    
  
    Box(int len){
        this.len = len;
//      this.width = width;
//      this.height = height;
    }
    
    
    int volume(Box x){
      int area = (2*(x.len*width))+ (2*(width*height)) + (2*(height*x.len)) ;
      return area;
    }
    
    
    void display(){
        
        System.out.println("Length : "+len);
        System.out.println("Width : "+width);
        System.out.println("Height : "+height);
    }
    
}
