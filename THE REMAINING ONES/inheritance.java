class Base {
    void display() {
        System.out.println("Base class display function.");
    }
}

class Derived extends Base {
    void show() {
        System.out.println("Derived class show function.");
    }
}

public class Main {
    public static void main(String[] args) {
        Derived obj = new Derived();
        obj.display(); // Calling base class function
        obj.show();    // Calling derived class function
    }
}
