package kamakura.yx.android.ea;

import android.app.Application;
import android.content.Context;
import android.os.Trace;

public class MainApplication extends Application {

    public static long APP_START_TIME = System.currentTimeMillis();

    @Override
    protected void attachBaseContext(Context base) {
        Trace.beginSection("MainApplication attachBaseContext");
        super.attachBaseContext(base);
        Trace.endSection();
    }

    @Override
    public void onCreate() {
        Trace.beginSection("MainApplication attachBaseContext");
        super.onCreate();
        Trace.endSection();
    }
}
