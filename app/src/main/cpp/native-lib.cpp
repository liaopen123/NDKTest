#include <jni.h>
#include <string>


extern "C"{
JNIEXPORT jint JNICALL
Java_com_doyouevershine_ndktest_HandlerNative_caculator(JNIEnv *env, jclass type, jint x, jint y) {
    //TO-DO
    int k = x+y;
    return k;

}


jstring
Java_com_doyouevershine_ndktest_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
};
