public class Person {

    private String name;
    private int age;

    public Person(String n, int a){
        this.name = n;
        this.age = a;
    }

    public String toString[]{
        return "NAME: " + this.name + "AGE: " this.age;
    }

    public static void main(String[] args){
        Person a = new Person("John", 23);
        Person b = new Person("Paul", 24);
        System.out.println(a);
        System.out.println(b);
    }
}