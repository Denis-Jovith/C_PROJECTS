class Base {
    void show() {
        System.out.println("Base class show function.");
    }
}

class Derived extends Base {
    @Override
    void show() {
        System.out.println("Derived class show function.");
    }
}

public class Main {
    public static void main(String[] args) {
        Base b = new Derived();
        b.show(); // This will call Derived class's show function due to dynamic binding
    }
}
