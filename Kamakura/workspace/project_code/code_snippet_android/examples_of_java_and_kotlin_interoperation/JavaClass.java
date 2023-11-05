package kamakura.lab.kotlin_java_interop_example_01;

public class JavaClass {
    public String callKotlinFunction() {
        KotlinClass kotlinClass = new KotlinClass();
        return kotlinClass.greet();
    }
}
