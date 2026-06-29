class Point {

    private int x;
    private int y;

    public Point() {
        x = 0;
        y = 0;
    }

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void display() {
        System.out.println("x = " + x);
        System.out.println("y = " + y);
    }
}

public class PointDemo {

    public static void main(String[] args) {

        Point p = new Point();

        System.out.println("Default Constructor:");
        p.display();

        Point p1 = new Point(10, 20);

        System.out.println("\nParameterized Constructor:");
        p1.display();

        p1.setX(30);
        p1.setY(40);

        System.out.println("\nAfter setX() and setY():");
        p1.display();

        p1.setXY(50, 60);

        System.out.println("\nAfter setXY():");
        p1.display();
    }
}
