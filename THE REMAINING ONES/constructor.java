class Sample {
    private int x;

    Sample() {
        x = 0;
        System.out.println("Default constructor called, x = " + x);
    }

    void display() {
        System.out.println("Value of x: " + x);
    }
}

public class Main {
    public static void main(String[] args) {
        Sample obj = new Sample();
        obj.display();
    }
}
