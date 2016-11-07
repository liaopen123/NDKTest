package com.doyouevershine.ndktest;

/**
 * Created by liaopenghui on 2016/11/7.
 */

public class HandlerNative {
    static {
        System.loadLibrary("native-lib");
    }

    public static  native int caculator(int x,int y);
}
