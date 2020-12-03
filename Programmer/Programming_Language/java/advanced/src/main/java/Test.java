public class Test {

    public static void main(String[] args) {
        ThreadTable tt = new ThreadTable();
        System.out.println(tt.rows);
        tt.rows.get(1).isMainThread = false;
        System.out.println(tt.rows);
    }
}
