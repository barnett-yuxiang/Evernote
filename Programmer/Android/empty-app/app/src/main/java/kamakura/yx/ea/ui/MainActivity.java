package kamakura.yx.ea.ui;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;

import com.bytedance.platform.tracer.HawTracer;
import com.bytedance.platform.tracer.enhance.FF;

import kamakura.yx.ea.MainApplication;
import kamakura.yx.ea.R;

public class MainActivity extends AppCompatActivity {
    private static final String TAG = "MainActivity";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Log.i(TAG, "onCreate");
        setContentView(R.layout.activity_main);
        getWindow().getDecorView().postDelayed(
                () -> {
                    HawTracer.i("i compute time duration");
                    Log.w(TAG, "Report app time duration: " + (System.currentTimeMillis() - MainApplication.APP_START_TIME));
                    HawTracer.i("o compute time duration");
                },
                2000
        );
    }

    @Override
    protected void onResume() {
        super.onResume();
        Log.i(TAG, "onResume");
        FF ff = new FF();
        ff.b(1024);
    }
}