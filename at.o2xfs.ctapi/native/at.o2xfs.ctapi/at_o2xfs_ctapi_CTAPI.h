/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class at_o2xfs_ctapi_CTAPI */

#ifndef _Included_at_o2xfs_ctapi_CTAPI
#define _Included_at_o2xfs_ctapi_CTAPI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     at_o2xfs_ctapi_CTAPI
 * Method:    loadLibrary0
 * Signature: (Lat/o2xfs/win32/ZSTR;)Lat/o2xfs/win32/Buffer;
 */
JNIEXPORT jobject JNICALL Java_at_o2xfs_ctapi_CTAPI_loadLibrary0
  (JNIEnv *, jobject, jobject);

/*
 * Class:     at_o2xfs_ctapi_CTAPI
 * Method:    getFunctionAddress0
 * Signature: (Lat/o2xfs/win32/Pointer;Lat/o2xfs/win32/ZSTR;)Lat/o2xfs/win32/Buffer;
 */
JNIEXPORT jobject JNICALL Java_at_o2xfs_ctapi_CTAPI_getFunctionAddress0
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     at_o2xfs_ctapi_CTAPI
 * Method:    init0
 * Signature: (Lat/o2xfs/win32/Pointer;Lat/o2xfs/win32/USHORT;Lat/o2xfs/win32/USHORT;)I
 */
JNIEXPORT jint JNICALL Java_at_o2xfs_ctapi_CTAPI_init0
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     at_o2xfs_ctapi_CTAPI
 * Method:    data0
 * Signature: (Lat/o2xfs/win32/Pointer;Lat/o2xfs/win32/USHORT;Lat/o2xfs/win32/UINT8;Lat/o2xfs/win32/UINT8;Lat/o2xfs/win32/ByteArray;Lat/o2xfs/win32/USHORT;Lat/o2xfs/win32/ByteArray;)I
 */
JNIEXPORT jint JNICALL Java_at_o2xfs_ctapi_CTAPI_data0
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject, jobject, jobject, jobject);

/*
 * Class:     at_o2xfs_ctapi_CTAPI
 * Method:    close0
 * Signature: (Lat/o2xfs/win32/Pointer;Lat/o2xfs/win32/USHORT;)I
 */
JNIEXPORT jint JNICALL Java_at_o2xfs_ctapi_CTAPI_close0
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     at_o2xfs_ctapi_CTAPI
 * Method:    freeLibrary0
 * Signature: (Lat/o2xfs/win32/Pointer;)V
 */
JNIEXPORT void JNICALL Java_at_o2xfs_ctapi_CTAPI_freeLibrary0
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
