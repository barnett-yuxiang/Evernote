package kamakura.lab.example_java8_feat;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.Button;

import java.util.Comparator;
import java.util.List;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.stream.Collectors;

public class MainActivity extends AppCompatActivity {

    private final UserRepository userRepository = new UserRepositoryImpl();

    private ExecutorService executorService = Executors.newFixedThreadPool(4);

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // 201
        Button refreshButton = findViewById(R.id.button);
        refreshButton.setOnClickListener(v -> refreshUserList());

        // 301
        for (int i = 0; i < 10; i++) {
            Task task = new Task(i);
            executorService.submit(task);
        }
    }

    private void refreshUserList() {
        userRepository.getUserAsync().thenAccept(users -> {
            List<User> sortedUsers = users.stream()
                    .sorted(Comparator.comparing(User::getName))
                    .collect(Collectors.toList());
            sortedUsers.forEach(UserRepository::printUser);
        });
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        executorService.shutdown();
    }
}
