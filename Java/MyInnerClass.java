class Outer {
    public void display() {
        System.out.println("Outer");
    }
    class Inner {
        public void display() {
            System.out.println("Inner");
        }
    }
}
public class MyInnerClass {
   public static void main(String[] args) {
        Outer out = new Outer();
        out.display();
        Outer.Inner in = out.new Inner();
        in.display();
   } 
}
