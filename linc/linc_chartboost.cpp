#include "./linc_chartboost.h"

#include <hxcpp.h>
#include "SDL.h"
#include <jni.h>

namespace linc {

    namespace chartboost {

        void showInterstitial(const char* location) {
            JNIEnv* env = (JNIEnv*)SDL_AndroidGetJNIEnv();
            jclass clazz = env->FindClass("com/chartboost/sdk/Chartboost");
            jmethodID method_id = env->GetStaticMethodID(clazz, "showInterstitial", "(Ljava/lang/String;)V");
            jstring jlocation = env->NewStringUTF(location);
            env->CallStaticVoidMethod(clazz, method_id, jlocation);
            env->DeleteLocalRef(jlocation);
            env->DeleteLocalRef(clazz);
        }
        
        void cacheInterstitial(const char* location) {
            JNIEnv* env = (JNIEnv*)SDL_AndroidGetJNIEnv();
            jclass clazz = env->FindClass("com/chartboost/sdk/Chartboost");
            jmethodID method_id = env->GetStaticMethodID(clazz, "cacheInterstitial", "(Ljava/lang/String;)V");
            jstring jlocation = env->NewStringUTF(location);
            env->CallStaticVoidMethod(clazz, method_id, jlocation);
            env->DeleteLocalRef(jlocation);
            env->DeleteLocalRef(clazz);
        }
        
        bool hasInterstitial(const char* location) {
            JNIEnv* env = (JNIEnv*)SDL_AndroidGetJNIEnv();
            jclass clazz = env->FindClass("com/chartboost/sdk/Chartboost");
            jmethodID method_id = env->GetStaticMethodID(clazz, "hasInterstitial", "(Ljava/lang/String;)Z");
            jstring jlocation = env->NewStringUTF(location);
            jboolean result = env->CallStaticBooleanMethod(clazz, method_id, jlocation);
            env->DeleteLocalRef(jlocation);
            env->DeleteLocalRef(clazz);
            return (bool)result;
        }
        
        
        void showRewardedVideo(const char* location) {
            JNIEnv* env = (JNIEnv*)SDL_AndroidGetJNIEnv();
            jclass clazz = env->FindClass("com/chartboost/sdk/Chartboost");
            jmethodID method_id = env->GetStaticMethodID(clazz, "showRewardedVideo", "(Ljava/lang/String;)V");
            jstring jlocation = env->NewStringUTF(location);
            env->CallStaticVoidMethod(clazz, method_id, jlocation);
            env->DeleteLocalRef(jlocation);
            env->DeleteLocalRef(clazz);
        }
        
        void cacheRewardedVideo(const char* location) {
            JNIEnv* env = (JNIEnv*)SDL_AndroidGetJNIEnv();
            jclass clazz = env->FindClass("com/chartboost/sdk/Chartboost");
            jmethodID method_id = env->GetStaticMethodID(clazz, "cacheRewardedVideo", "(Ljava/lang/String;)V");
            jstring jlocation = env->NewStringUTF(location);
            env->CallStaticVoidMethod(clazz, method_id, jlocation);
            env->DeleteLocalRef(jlocation);
            env->DeleteLocalRef(clazz);
        }
        
        bool hasRewardedVideo(const char* location) {
            JNIEnv* env = (JNIEnv*)SDL_AndroidGetJNIEnv();
            jclass clazz = env->FindClass("com/chartboost/sdk/Chartboost");
            jmethodID method_id = env->GetStaticMethodID(clazz, "hasRewardedVideo", "(Ljava/lang/String;)Z");
            jstring jlocation = env->NewStringUTF(location);
            jboolean result = env->CallStaticBooleanMethod(clazz, method_id, jlocation);
            env->DeleteLocalRef(jlocation);
            env->DeleteLocalRef(clazz);
            return (bool)result;
        }

    } //chartboost namespace

} //linc