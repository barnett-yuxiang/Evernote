package kamakura.lab.example_java8_feat;

import junit.framework.TestCase;

public class CacheTest extends TestCase {

    private Cache<String, Integer> cache = new Cache<>();

    public void testPut() {
        cache.put("key1", 1);
        assertTrue(cache.containsKey("key1"));
    }

    public void testGet() {
        cache.put("key1", 1);
        Integer value = cache.get("key1");
        assertEquals(Integer.valueOf(1), value);
    }

    public void testContainsKey() {
    }
}