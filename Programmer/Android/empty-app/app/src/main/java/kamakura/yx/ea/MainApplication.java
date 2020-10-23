package kamakura.yx.ea;

import android.app.Application;
import android.content.Context;
import android.util.Log;

public class MainApplication extends Application {
    private static final String TAG = "MainApplication";

    public static long APP_START_TIME = System.currentTimeMillis();

    @Override
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);
        Log.i(TAG, "attachBaseContext");
    }

    @Override
    public void onCreate() {
        super.onCreate();
        Log.i(TAG, "onCreate");
    }
}
