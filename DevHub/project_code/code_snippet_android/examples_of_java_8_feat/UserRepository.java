package kamakura.lab.example_java8_feat;

import java.util.List;
import java.util.concurrent.CompletableFuture;

public interface UserRepository {
    default CompletableFuture<List<User>> getUserAsync() {
        return CompletableFuture.supplyAsync(this::getUsers);
    }

    List<User> getUsers();

    static void printUser(User user) {
        System.out.println(user.getName() + ", " + user.getAge());
    }
}
