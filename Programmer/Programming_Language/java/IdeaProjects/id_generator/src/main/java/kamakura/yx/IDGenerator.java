package kamakura.yx;

import java.util.UUID;

public class IDGenerator {
    public static void main(String[] args) {
        UUID id = UUID.randomUUID();
        System.out.println(id.toString());
    }
}
