/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class gov_nasa_arc_dert_raster_proj_Proj4 */

#ifndef _Included_gov_nasa_arc_dert_raster_proj_Proj4
#define _Included_gov_nasa_arc_dert_raster_proj_Proj4
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     gov_nasa_arc_dert_raster_proj_Proj4
 * Method:    createProj4
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_gov_nasa_arc_dert_raster_proj_Proj4_createProj4
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gov_nasa_arc_dert_raster_proj_Proj4
 * Method:    destroyProj4
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_gov_nasa_arc_dert_raster_proj_Proj4_destroyProj4
  (JNIEnv *, jclass, jlong);

/*
 * Class:     gov_nasa_arc_dert_raster_proj_Proj4
 * Method:    setProjPath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_gov_nasa_arc_dert_raster_proj_Proj4_setProjPath
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gov_nasa_arc_dert_raster_proj_Proj4
 * Method:    transform
 * Signature: (JJJI[D[D[D)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gov_nasa_arc_dert_raster_proj_Proj4_transform
  (JNIEnv *, jobject, jlong, jlong, jlong, jint, jdoubleArray, jdoubleArray, jdoubleArray);

#ifdef __cplusplus
}
#endif
#endif
