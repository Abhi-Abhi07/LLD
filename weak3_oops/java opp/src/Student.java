public class Student {
    // Attributes
    public int id;
    public String name;
    public int age;
    public int numOfSub;

    private String gf;
    // ctor or default ctor
    public Student(){
        System.out.println("Default ctor called !");
    }

    // parameterized ctor
    public Student(int id, String name, int age, int nos,String gf){
        System.out.println("Parameterized ctor called !");
        this.id=id;
        this.name=name;
        this.age=age;
        this.numOfSub=nos;
        this.gf=gf;
    }

    // copy ctor
    public Student(Student obj){
        System.out.println("copy ctor called !");
        this.id=obj.id;
        this.name=obj.name;
        this.age=obj.age;
        this.numOfSub=obj.numOfSub;
        this.gf=obj.gf;
    }

    // Behaviour or method
    public void sleep(){
        System.out.println(name + " Sleeping");
    }
    public void bunk(){
        System.out.println(name + " Bunking");
    }
    public void study(){
        System.out.println(name + " Studing");
    }

    public String getGf() {
        return this.gf;
    }
}
