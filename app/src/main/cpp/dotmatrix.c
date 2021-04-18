/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>
#include <math.h>
#include <stdint.h>
#include <linux/fcntl.h>
#include <sys/ioctl.h>
#include <bits/ioctl.h>
#include <android/log.h>
/* Header for class com_example_puyopuyo_GameSurface */

#ifndef _Included_com_example_puyopuyo_GameSurface
#define _Included_com_example_puyopuyo_GameSurface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_puyopuyo_GameSurface
 * Method:    dotmatirxWrite
 * Signature: ()I
 */

#define DOTM_MAGIC 0xBC
#define DOTM_EXPLOSION1 _IOW(DOTM_MAGIC, 2, 0)
#define DOTM_EXPLOSION2 _IOW(DOTM_MAGIC, 3, 0)
#define DOTM_EXPLOSION3 _IOW(DOTM_MAGIC, 4, 0)
#define DOTM_EXPLOSION4 _IOW(DOTM_MAGIC, 5, 0)
#define DOTM_EXPLOSION5 _IOW(DOTM_MAGIC, 6, 0)
#define DOTM_EXPLOSION6 _IOW(DOTM_MAGIC, 7, 0)
#define DOTM_EXPLOSION7 _IOW(DOTM_MAGIC, 8, 0)

JNIEXPORT jint JNICALL Java_com_example_puyopuyo_GameSurface_makeExplosion(JNIEnv * jenv, jobject self){
    int fd;

    fd = open("/dev/dotmatrix", O_WRONLY);
    if(fd != -1){
        ioctl(fd, DOTM_EXPLOSION1, NULL, _IOC_SIZE(DOTM_EXPLOSION1));
        usleep(20000);
        ioctl(fd, DOTM_EXPLOSION2, NULL, _IOC_SIZE(DOTM_EXPLOSION2));
        usleep(20000);
        ioctl(fd, DOTM_EXPLOSION3, NULL, _IOC_SIZE(DOTM_EXPLOSION3));
        usleep(20000);
        ioctl(fd, DOTM_EXPLOSION4, NULL, _IOC_SIZE(DOTM_EXPLOSION4));
        usleep(20000);
        ioctl(fd, DOTM_EXPLOSION5, NULL, _IOC_SIZE(DOTM_EXPLOSION5));
        usleep(20000);
        ioctl(fd, DOTM_EXPLOSION6, NULL, _IOC_SIZE(DOTM_EXPLOSION6));
        usleep(20000);
        ioctl(fd, DOTM_EXPLOSION7, NULL, _IOC_SIZE(DOTM_EXPLOSION7));
        close(fd);
    }
    else {

        //__android_log_print(ANDROID_LOG_ERROR, "dotmatrix", "Dotmatrix Open Failed\n");
        return -1;
    }

    return 0;
}

#ifdef __cplusplus
}
#endif
#endif
