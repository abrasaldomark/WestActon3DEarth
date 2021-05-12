/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_CoordSystem */

#ifndef _Included_com_mousebird_maply_CoordSystem
#define _Included_com_mousebird_maply_CoordSystem
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_CoordSystem
 * Method:    geographicToLocal
 * Signature: (Lcom/mousebird/maply/Point3d;)Lcom/mousebird/maply/Point3d;
 */
JNIEXPORT jobject JNICALL Java_com_mousebird_maply_CoordSystem_geographicToLocal
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_CoordSystem
 * Method:    localToGeographic
 * Signature: (Lcom/mousebird/maply/Point3d;)Lcom/mousebird/maply/Point3d;
 */
JNIEXPORT jobject JNICALL Java_com_mousebird_maply_CoordSystem_localToGeographic
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_CoordSystem
 * Method:    localToGeocentric
 * Signature: (Lcom/mousebird/maply/Point3d;)Lcom/mousebird/maply/Point3d;
 */
JNIEXPORT jobject JNICALL Java_com_mousebird_maply_CoordSystem_localToGeocentric
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_CoordSystem
 * Method:    geocentricToLocal
 * Signature: (Lcom/mousebird/maply/Point3d;)Lcom/mousebird/maply/Point3d;
 */
JNIEXPORT jobject JNICALL Java_com_mousebird_maply_CoordSystem_geocentricToLocal
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_CoordSystem
 * Method:    CoordSystemConvert3d
 * Signature: (Lcom/mousebird/maply/CoordSystem;Lcom/mousebird/maply/CoordSystem;Lcom/mousebird/maply/Point3d;)Lcom/mousebird/maply/Point3d;
 */
JNIEXPORT jobject JNICALL Java_com_mousebird_maply_CoordSystem_CoordSystemConvert3d
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     com_mousebird_maply_CoordSystem
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_CoordSystem_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_mousebird_maply_CoordSystem
 * Method:    initialise
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_CoordSystem_initialise
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_CoordSystem
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_CoordSystem_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
