class Sample {
    private int x;

    void setX(int a) {
        x = a;
    }

    void display() {
        System.out.println("Value of x: " + x);
    }
}

public class Main {
    public static void main(String[] args) {
        Sample obj = new Sample();
        obj.setX(10);
        obj.display();
    }
}
