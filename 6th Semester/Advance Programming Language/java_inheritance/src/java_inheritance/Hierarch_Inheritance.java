package java_inheritance;

class A {

    int i;

    void show(int a) {
        i = a;
        System.out.println("Showing Result :" + i);
    }
}

class B extends A {

    int j;

    void show2(int a, int b) {
        i = a;
        j = b;

        int sum = i + j;

        System.out.println("sum " + sum);

    }
}

class C extends A {

    int j, k;

    void show3(int a, int b, int c) {
        i = a;
        j = b;
        k = c;

        int sum = i + j + k;

        System.out.println("Sum: " + sum);

    }
}

public class Hierarch_Inheritance {

    public static void main(String[] args) {
        // TODO code application logic here
        B obj = new B();
        obj.show2(10, 20);

        C obj2 = new C();
        obj2.show3(10, 20, 30);

    }
}
