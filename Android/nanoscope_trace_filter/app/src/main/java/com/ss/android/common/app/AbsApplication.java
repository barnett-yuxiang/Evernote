package com.ss.android.common.app;

import android.app.Application;
import android.content.Context;
import android.util.Log;

public class AbsApplication extends Application {

    @Override
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);
        Log.d("AbsApplication", "AbsApplication attachBaseContext");
    }
}
