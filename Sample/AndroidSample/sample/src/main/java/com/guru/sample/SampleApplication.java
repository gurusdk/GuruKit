package com.guru.sample;

import android.app.Application;
import android.util.Log;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

import com.guru.android.GuruSdk;
import com.guru.common.interfaces.CommonCallback;
import com.guru.common.log.Logger;

public class SampleApplication extends Application {
    @Override
    public void onCreate() {
        super.onCreate();
        GuruSdk.initialize(this, new CommonCallback() {
            @Override
            public void onSuccess(@Nullable String json) {
                Log.d("TAG", "SDK initialize suc:" + json);
            }

            @Override
            public void onFailed(@NonNull Throwable error) {
                Log.d("TAG", "SDK initialize failed:" + error.getMessage());
            }
        });
         GuruSdk.setLogEnabled(false);
         GuruSdk.setLogLevel(Logger.LogLevel.DEBUG);
    }
}
