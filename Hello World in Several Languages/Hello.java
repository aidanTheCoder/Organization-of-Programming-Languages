public class Hello {
    public static void main(String[] args) {
        System.out.println("Hello Java!");
        Hello greeter = new Hello();
        for(int i = 0; i < args.length; ++i)
            greeter.greet(args[i]);
    }

    public void greet(String name) {
        System.out.println("Hello " + name + "!");
    }
}
