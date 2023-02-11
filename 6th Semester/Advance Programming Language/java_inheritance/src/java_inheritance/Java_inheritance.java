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

class C extends B {

    int k;

    void show3(int a, int b, int c) {
        i = a;
        j = b;
        k = c;

        int sum = i + j + k;

        System.out.println("Sum: " + sum);

    }
}

public class Java_inheritance {

    public static void main(String[] args) {
        // TODO code application logic here
        B obj = new B();
        obj.show2(10, 20);

        C obj2 = new C();
        obj2.show3(10, 20, 30);

    }
}
