package kamakura.lab.kotlin_java_interop_example_01;

public class OperationManager {
    public void performOperation() {
        int result = FunctionUtilsKt.applyOperation(5, 3, FunctionUtilsKt.getSum());
        System.out.println("Result: " + result);
    }
}
