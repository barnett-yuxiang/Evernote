package kamakura.yx.hook_sample;

import android.os.Bundle;
import android.os.Trace;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    static {
        Trace.beginSection("load libmytest.so");
        System.loadLibrary("mytest");
        Trace.endSection();
    }

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        getWindow().getDecorView().post(new Runnable() {
            @Override
            public void run() {
                new Local().readMapFile();
            }
        });
    }
}
