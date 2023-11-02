package kamakura.lab.example_java8_feat;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.Button;

import java.util.Comparator;
import java.util.List;
import java.util.stream.Collectors;

public class MainActivity extends AppCompatActivity {

    private final UserRepository userRepository = new UserRepositoryImpl();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button refreshButton = findViewById(R.id.button);
        refreshButton.setOnClickListener(v -> refreshUserList());
    }

    private void refreshUserList() {
        userRepository.getUserAsync().thenAccept(users -> {
            List<User> sortedUsers = users.stream()
                    .sorted(Comparator.comparing(User::getName))
                    .collect(Collectors.toList());
            sortedUsers.forEach(UserRepository::printUser);
        });
    }
}
