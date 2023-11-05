package kamakura.lab.example_java8_feat;

public class Task implements Runnable {
    private final int number;

    public Task(int number) {
        this.number = number;
    }

    @Override
    public void run() {
        System.out.println(
                "Task #" + number + " is running on the thread " + Thread.currentThread().getName()
        );
    }
}
