package kamakura.lab.example_java8_feat;

import java.util.HashMap;
import java.util.Map;

public class Cache<K, V> {
    private final Map<K, V> storage = new HashMap<>();

    /**
     * Puts a key-value pair into the storage.
     *
     * @param  key   the key to be inserted
     * @param  value the value associated with the key
     */
    public void put(K key, V value) {
        storage.put(key, value);
    }

    /**
     * Retrieves the value associated with the specified key.
     *
     * @param  key  the key whose associated value is to be retrieved
     * @return      the value to which the specified key is mapped, or null if this map contains no mapping for the key
     */
    public V get(K key) {
        return storage.get(key);
    }

    public boolean containsKey(K key) {
        return storage.containsKey(key);
    }
}
