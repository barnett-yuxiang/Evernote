package kamakura.yx.android.ea;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.os.Trace;
import android.util.Log;

public class MainActivity extends AppCompatActivity {
    private static final String TAG = "MainActivity";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        Trace.beginSection("MainActivity onCreate");
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Trace.endSection();
    }

    @Override
    protected void onResume() {
        Trace.beginSection("MainActivity onResume");
        super.onResume();
        Trace.endSection();

        getWindow().getDecorView().postDelayed(new Runnable() {
            @Override
            public void run() {
                Log.i(
                        TAG,
                        "Start Complete ts: "
                                + (System.currentTimeMillis() - MainApplication.APP_START_TIME)
                );
            }
        }, 100);
    }
}