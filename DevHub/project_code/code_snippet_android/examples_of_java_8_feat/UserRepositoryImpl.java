package kamakura.lab.example_java8_feat;

import java.util.Arrays;
import java.util.List;

public class UserRepositoryImpl implements UserRepository {
    @Override
    public List<User> getUsers() {
        return Arrays.asList(
                new User("Alice", 20),
                new User("Bob", 30),
                new User("Charlie", 40)
        );
    }
}
