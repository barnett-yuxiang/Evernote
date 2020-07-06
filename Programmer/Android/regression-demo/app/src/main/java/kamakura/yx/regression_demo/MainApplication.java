package kamakura.yx.regression_demo;

import android.app.Application;
import android.content.Context;
import android.os.Trace;

public class MainApplication extends Application {
    @Override
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);
        Trace.beginSection("sleep 100ms");
        try {
            Thread.sleep(100);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        Trace.endSection();
    }
}
