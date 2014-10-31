#include "com_patito_buho_ndkapp01_MainActivity.h"
/*
 * Class:     com_patito_buho_ndkapp01_MainActivity
 * Method:    getStringFromNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_patito_buho_ndkapp01_MainActivity_getStringFromNative
  (JNIEnv *env, jobject obj)
  {
    return (*env)->NewStringUTF(env, "Hello from C Native");
  }
