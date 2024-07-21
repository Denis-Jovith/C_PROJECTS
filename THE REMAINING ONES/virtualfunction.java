class Base {
    void show() {
        System.out.println("Base class show function called.");
    }
}

class Derived extends Base {
    @Override
    void show() {
        System.out.println("Derived class show function called.");
    }
}

public class Main {
    public static void main(String[] args) {
        Base b = new Derived();
        b.show(); // This will call Derived class's show function due to method overriding
    }
}
