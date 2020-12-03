import java.util.ArrayList;
import java.util.List;

public class ThreadTable {

    public static class Row {
        int id;
        boolean isMainThread = false;

        public Row(int id, boolean isMainThread) {
            this.id = id;
            this.isMainThread = isMainThread;
        }

        @Override
        public String toString() {
            return "Row{" +
                    "id=" + id +
                    ", isMainThread=" + isMainThread +
                    '}';
        }
    }

    public List<Row> rows = new ArrayList<>();

    public ThreadTable() {
        rows.add(new Row(1, true));
        rows.add(new Row(2, true));
    }
}
