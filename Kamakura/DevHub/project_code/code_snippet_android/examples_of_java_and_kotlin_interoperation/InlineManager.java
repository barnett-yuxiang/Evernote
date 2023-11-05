package kamakura.lab.kotlin_java_interop_example_01;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/**
 * The `InlineManager` class is a Java class that demonstrates the usage of Kotlin inline functions.
 * It contains an inner class named `Action` that implements the `Function0<Unit>` interface.
 * The `InlineManager` class also has a method named `performActions()` that creates an instance of the `Action` class and calls the `runTwice()` function from the `InlineUtilsKt` file.
 */
public class InlineManager {

    /**
     * The `Action` class is an inner class of `InlineManager` that implements the `Function0<Unit>` interface.
     * It represents an action that can be performed.
     */
    static class Action implements Function0<Unit> {
        
        /**
         * Executes the action.
         *
         * @return The result of the action.
         */
        @Override
        public Unit invoke() {
            System.out.println("Action running");
            return Unit.INSTANCE;
        }
    }

    /**
     * Performs the actions by creating an instance of the `Action` class and calling the `runTwice()` function from the `InlineUtilsKt` file.
     */
    public void performActions() {
        Action action = new Action();
        InlineUtilsKt.runTwice(action);
    }
}
