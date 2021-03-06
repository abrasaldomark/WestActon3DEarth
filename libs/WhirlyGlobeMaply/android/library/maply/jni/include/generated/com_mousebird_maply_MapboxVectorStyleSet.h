/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_MapboxVectorStyleSet */

#ifndef _Included_com_mousebird_maply_MapboxVectorStyleSet
#define _Included_com_mousebird_maply_MapboxVectorStyleSet
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_MapboxVectorStyleSet
 * Method:    setArealShaderNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_MapboxVectorStyleSet_setArealShaderNative
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_mousebird_maply_MapboxVectorStyleSet
 * Method:    backgroundColorForZoomNative
 * Signature: (D)I
 */
JNIEXPORT jint JNICALL Java_com_mousebird_maply_MapboxVectorStyleSet_backgroundColorForZoomNative
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     com_mousebird_maply_MapboxVectorStyleSet
 * Method:    getZoomSlot
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mousebird_maply_MapboxVectorStyleSet_getZoomSlot
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_MapboxVectorStyleSet
 * Method:    setZoomSlot
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_MapboxVectorStyleSet_setZoomSlot
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_MapboxVectorStyleSet
 * Method:    initialise
 * Signature: (Lcom/mousebird/maply/Scene;Lcom/mousebird/maply/CoordSystem;Lcom/mousebird/maply/VectorStyleSettings;Lcom/mousebird/maply/AttrDictionary;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_MapboxVectorStyleSet_initialise
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject);

/*
 * Class:     com_mousebird_maply_MapboxVectorStyleSet
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_MapboxVectorStyleSet_dispose
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_MapboxVectorStyleSet
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_MapboxVectorStyleSet_nativeInit
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
