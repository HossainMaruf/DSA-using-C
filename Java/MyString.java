public class MyString {
    public static void main(String[] args) {
        String s = new String("hello");
        String ss = "hello";
        String sp= "hello";
        System.out.println(s.compareTo(ss));
        System.out.println(s==ss);
        System.out.println(s==sp);
        // Length of string
        System.out.println(s.length());
    }
}