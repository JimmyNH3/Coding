class c1 {
    public static void main(String[] args) {
        c1.a1(45);
        c2.a1("hello");
    }

    static void a1(int num) {
        System.out.println(num * 10);
    }
}

class c2 {
    static void a1(String str) {
        System.out.println("22" + str);
    }
}