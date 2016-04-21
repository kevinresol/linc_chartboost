#include "./linc_chartboost.h"

#include <hxcpp.h>
#include "SDL.h"
#include <jni.h>
#include <android/log.h>

namespace linc {

    namespace chartboost {
        
        JNIEnv* env = NULL;
        jclass clazz = NULL;
        
        ::cpp::Function < bool(::String) > shouldRequestInterstitial = 0;
        ::cpp::Function < bool(::String) > shouldDisplayInterstitial = 0;
        ::cpp::Function < Void(::String) > didDisplayInterstitial = 0;
        ::cpp::Function < Void(::String) > didCacheInterstitial = 0;
        ::cpp::Function < Void(::String, ::String) > didFailToLoadInterstitial = 0;
        ::cpp::Function < Void(::String) > didDismissInterstitial = 0;
        ::cpp::Function < Void(::String) > didCloseInterstitial = 0;
        ::cpp::Function < Void(::String) > didClickInterstitial = 0;
        ::cpp::Function < bool(::String) > shouldDisplayMoreApps = 0;
        ::cpp::Function < Void(::String) > didDisplayMoreApps = 0;
        ::cpp::Function < Void(::String) > didCacheMoreApps = 0;
        ::cpp::Function < Void(::String) > didDismissMoreApps = 0;
        ::cpp::Function < Void(::String) > didCloseMoreApps = 0;
        ::cpp::Function < Void(::String) > didClickMoreApps = 0;
        ::cpp::Function < Void(::String, ::String) > didFailToLoadMoreApps = 0;
        ::cpp::Function < bool(::String) > shouldDisplayRewardedVideo = 0;
        ::cpp::Function < Void(::String) > didDisplayRewardedVideo = 0;
        ::cpp::Function < Void(::String) > didCacheRewardedVideo = 0;
        ::cpp::Function < Void(::String, ::String) > didFailToLoadRewardedVideo = 0;
        ::cpp::Function < Void(::String) > didDismissRewardedVideo = 0;
        ::cpp::Function < Void(::String) > didCloseRewardedVideo = 0;
        ::cpp::Function < Void(::String) > didClickRewardedVideo = 0;
        ::cpp::Function < Void(::String, int) > didCompleteRewardedVideo = 0;
        ::cpp::Function < Void(::String) > willDisplayVideo = 0;
        ::cpp::Function < Void(::String) > didCacheInPlay = 0;
        ::cpp::Function < Void(::String, ::String) > didFailToLoadInPlay = 0;
        ::cpp::Function < Void(::String, ::String) > didFailToRecordClick = 0;
        ::cpp::Function < Void(::String) > didPauseClickForConfirmation = 0;
        
        jmethodID getStaticMethodID(const char* method_name, const char* signature) {
            if(env == NULL) {
                env = (JNIEnv*)SDL_AndroidGetJNIEnv();
            }
            if(clazz == NULL) {
                clazz = env->FindClass("com/chartboost/sdk/Chartboost");
            }
            return env->GetStaticMethodID(clazz, method_name, signature);
        } 
        
        void startWithAppId(const char* appId, const char* appSignature, 
            ::cpp::Function < bool(::String) > _shouldRequestInterstitial,
            ::cpp::Function < bool(::String) > _shouldDisplayInterstitial,
            ::cpp::Function < Void(::String) > _didDisplayInterstitial,
            ::cpp::Function < Void(::String) > _didCacheInterstitial,
            ::cpp::Function < Void(::String, ::String) > _didFailToLoadInterstitial,
            ::cpp::Function < Void(::String) > _didDismissInterstitial,
            ::cpp::Function < Void(::String) > _didCloseInterstitial,
            ::cpp::Function < Void(::String) > _didClickInterstitial,
            ::cpp::Function < bool(::String) > _shouldDisplayMoreApps,
            ::cpp::Function < Void(::String) > _didDisplayMoreApps,
            ::cpp::Function < Void(::String) > _didCacheMoreApps,
            ::cpp::Function < Void(::String) > _didDismissMoreApps,
            ::cpp::Function < Void(::String) > _didCloseMoreApps,
            ::cpp::Function < Void(::String) > _didClickMoreApps,
            ::cpp::Function < Void(::String, ::String) > _didFailToLoadMoreApps,
            ::cpp::Function < bool(::String) > _shouldDisplayRewardedVideo,
            ::cpp::Function < Void(::String) > _didDisplayRewardedVideo,
            ::cpp::Function < Void(::String) > _didCacheRewardedVideo,
            ::cpp::Function < Void(::String, ::String) > _didFailToLoadRewardedVideo,
            ::cpp::Function < Void(::String) > _didDismissRewardedVideo,
            ::cpp::Function < Void(::String) > _didCloseRewardedVideo,
            ::cpp::Function < Void(::String) > _didClickRewardedVideo,
            ::cpp::Function < Void(::String, int) > _didCompleteRewardedVideo,
            ::cpp::Function < Void(::String) > _willDisplayVideo,
            ::cpp::Function < Void(::String) > _didCacheInPlay,
            ::cpp::Function < Void(::String, ::String) > _didFailToLoadInPlay,
            ::cpp::Function < Void(::String, ::String) > _didFailToRecordClick
        ) {
            // jmethodID method_id = getStaticMethodID("startWithAppId", "(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V");
            // jstring jappId = env->NewStringUTF(appId);
            // jstring jappSignature = env->NewStringUTF(appSignature);
            // jobject activity = (jobject) SDL_AndroidGetActivity();
            // env->CallStaticVoidMethod(clazz, method_id, activity, jappId, jappSignature);
            // 
            // jmethodID method_id2 = getStaticMethodID("onCreate", "(Landroid/app/Activity;)V");
            // env->CallStaticVoidMethod(clazz, method_id2, activity);
            // 
            // env->DeleteLocalRef(jappId);
            // env->DeleteLocalRef(jappSignature);
            // env->DeleteLocalRef(activity);
            
            shouldRequestInterstitial = _shouldRequestInterstitial;
            shouldDisplayInterstitial = _shouldDisplayInterstitial;
            didDisplayInterstitial = _didDisplayInterstitial;
            didCacheInterstitial = _didCacheInterstitial;
            didFailToLoadInterstitial = _didFailToLoadInterstitial;
            didDismissInterstitial = _didDismissInterstitial;
            didCloseInterstitial = _didCloseInterstitial;
            didClickInterstitial = _didClickInterstitial;
            shouldDisplayMoreApps = _shouldDisplayMoreApps;
            didDisplayMoreApps = _didDisplayMoreApps;
            didCacheMoreApps = _didCacheMoreApps;
            didDismissMoreApps = _didDismissMoreApps;
            didCloseMoreApps = _didCloseMoreApps;
            didClickMoreApps = _didClickMoreApps;
            didFailToLoadMoreApps = _didFailToLoadMoreApps;
            shouldDisplayRewardedVideo = _shouldDisplayRewardedVideo;
            didDisplayRewardedVideo = _didDisplayRewardedVideo;
            didCacheRewardedVideo = _didCacheRewardedVideo;
            didFailToLoadRewardedVideo = _didFailToLoadRewardedVideo;
            didDismissRewardedVideo = _didDismissRewardedVideo;
            didCloseRewardedVideo = _didCloseRewardedVideo;
            didClickRewardedVideo = _didClickRewardedVideo;
            didCompleteRewardedVideo = _didCompleteRewardedVideo;
            willDisplayVideo = _willDisplayVideo;
            didCacheInPlay = _didCacheInPlay;
            didFailToLoadInPlay = _didFailToLoadInPlay;
            didFailToRecordClick = _didFailToRecordClick;
        }

        void showInterstitial(const char* location) {
            jmethodID method_id = getStaticMethodID("showInterstitial", "(Ljava/lang/String;)V");
            jstring jlocation = env->NewStringUTF(location);
            env->CallStaticVoidMethod(clazz, method_id, jlocation);
            env->DeleteLocalRef(jlocation);
        }
        
        void cacheInterstitial(const char* location) {
            jmethodID method_id = getStaticMethodID("cacheInterstitial", "(Ljava/lang/String;)V");
            jstring jlocation = env->NewStringUTF(location);
            env->CallStaticVoidMethod(clazz, method_id, jlocation);
            env->DeleteLocalRef(jlocation);
        }
        
        bool hasInterstitial(const char* location) {
            jmethodID method_id = getStaticMethodID("hasInterstitial", "(Ljava/lang/String;)Z");
            jstring jlocation = env->NewStringUTF(location);
            jboolean result = env->CallStaticBooleanMethod(clazz, method_id, jlocation);
            env->DeleteLocalRef(jlocation);
            return (bool)result;
        }
        
        
        void showRewardedVideo(const char* location) {
            JNIEnv* env = (JNIEnv*)SDL_AndroidGetJNIEnv();
            jclass clazz = env->FindClass("com/chartboost/sdk/Chartboost");
            jmethodID method_id = env->GetStaticMethodID(clazz, "showRewardedVideo", "(Ljava/lang/String;)V");
            jstring jlocation = env->NewStringUTF(location);
            env->CallStaticVoidMethod(clazz, method_id, jlocation);
            env->DeleteLocalRef(jlocation);
        }
        
        void cacheRewardedVideo(const char* location) {
            jmethodID method_id = getStaticMethodID("cacheRewardedVideo", "(Ljava/lang/String;)V");
            jstring jlocation = env->NewStringUTF(location);
            env->CallStaticVoidMethod(clazz, method_id, jlocation);
            env->DeleteLocalRef(jlocation);
        }
        
        bool hasRewardedVideo(const char* location) {
            jmethodID method_id = getStaticMethodID("hasRewardedVideo", "(Ljava/lang/String;)Z");
            jstring jlocation = env->NewStringUTF(location);
            jboolean result = env->CallStaticBooleanMethod(clazz, method_id, jlocation);
            env->DeleteLocalRef(jlocation);
            return (bool)result;
        }

    } //chartboost namespace

} //linc

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jboolean Java_chartboost_ChartboostDelegate__1shouldRequestInterstitial(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1shouldRequestInterstitial");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    bool result = linc::chartboost::shouldRequestInterstitial(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
    return (jboolean)result;
}

JNIEXPORT jboolean Java_chartboost_ChartboostDelegate__1shouldDisplayInterstitial(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1shouldDisplayInterstitial");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    bool result = linc::chartboost::shouldDisplayInterstitial(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
    return (jboolean)result;
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didDisplayInterstitial(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didDisplayInterstitial");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didDisplayInterstitial(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didCacheInterstitial(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didCacheInterstitial");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didCacheInterstitial(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didFailToLoadInterstitial(JNIEnv *env, jobject thiz, jstring location, jstring error) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didFailToLoadInterstitial");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    const char* _error = env->GetStringUTFChars(error, JNI_FALSE);
    linc::chartboost::didFailToLoadInterstitial(::String(_location), ::String(_error));
    env->ReleaseStringUTFChars(location, _location);
    env->ReleaseStringUTFChars(error, _error);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didDismissInterstitial(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didDismissInterstitial");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didDismissInterstitial(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didCloseInterstitial(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didCloseInterstitial");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didCloseInterstitial(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didClickInterstitial(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didClickInterstitial");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didClickInterstitial(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT jboolean Java_chartboost_ChartboostDelegate__1shouldDisplayMoreApps(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1shouldDisplayMoreApps");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    bool result = linc::chartboost::shouldDisplayMoreApps(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
    return (jboolean)result;
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didDisplayMoreApps(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didDisplayMoreApps");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didDisplayMoreApps(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didCacheMoreApps(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didCacheMoreApps");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didCacheMoreApps(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didDismissMoreApps(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didDismissMoreApps");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didDismissMoreApps(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didCloseMoreApps(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didCloseMoreApps");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didCloseMoreApps(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didClickMoreApps(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didClickMoreApps");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didClickMoreApps(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didFailToLoadMoreApps(JNIEnv *env, jobject thiz, jstring location, jstring error) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didFailToLoadMoreApps");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    const char* _error = env->GetStringUTFChars(error, JNI_FALSE);
    linc::chartboost::didFailToLoadMoreApps(::String(_location), ::String(_error));
    env->ReleaseStringUTFChars(location, _location);
    env->ReleaseStringUTFChars(error, _error);
}

JNIEXPORT jboolean Java_chartboost_ChartboostDelegate__1shouldDisplayRewardedVideo(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1shouldDisplayRewardedVideo");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    bool result = linc::chartboost::shouldDisplayRewardedVideo(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
    return (jboolean)result;
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didDisplayRewardedVideo(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didDisplayRewardedVideo");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didDisplayRewardedVideo(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didCacheRewardedVideo(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didCacheRewardedVideo");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didCacheRewardedVideo(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didFailToLoadRewardedVideo(JNIEnv *env, jobject thiz, jstring location, jstring error) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didFailToLoadRewardedVideo");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    const char* _error = env->GetStringUTFChars(error, JNI_FALSE);
    linc::chartboost::didFailToLoadRewardedVideo(::String(_location), ::String(_error));
    env->ReleaseStringUTFChars(location, _location);
    env->ReleaseStringUTFChars(error, _error);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didDismissRewardedVideo(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didDismissRewardedVideo");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didDismissRewardedVideo(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didCloseRewardedVideo(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didCloseRewardedVideo");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didCloseRewardedVideo(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didClickRewardedVideo(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didClickRewardedVideo");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didClickRewardedVideo(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didCompleteRewardedVideo(JNIEnv *env, jobject thiz, jstring location, jint reward) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didCompleteRewardedVideo");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didCompleteRewardedVideo(::String(_location), (int)reward);
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1willDisplayVideo(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1willDisplayVideo");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::willDisplayVideo(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didCacheInPlay(JNIEnv *env, jobject thiz, jstring location) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didCacheInPlay");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    linc::chartboost::didCacheInPlay(::String(_location));
    env->ReleaseStringUTFChars(location, _location);
}

JNIEXPORT void Java_chartboost_ChartboostDelegate__1didFailToLoadInPlay(JNIEnv *env, jobject thiz, jstring location, jstring error) {
    linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didFailToLoadInPlay");
    const char* _location = env->GetStringUTFChars(location, JNI_FALSE);
    const char* _error = env->GetStringUTFChars(error, JNI_FALSE);
    linc::chartboost::didFailToLoadInPlay(::String(_location), ::String(_error));
    env->ReleaseStringUTFChars(location, _location);
    env->ReleaseStringUTFChars(error, _error);
}

// JNIEXPORT void Java_chartboost_ChartboostDelegate__1didFailToRecordClick(JNIEnv *env, jobject thiz, jstring uri, jstring error) {
//     linc::chartboost::AutoHaxe haxe("Java_chartboost_ChartboostDelegate__1didFailToRecordClick");
//     const char* _uri = env->GetStringUTFChars(uri, JNI_FALSE);
//     linc::chartboost::didFailToRecordClick(::String(_uri));
//     env->ReleaseStringUTFChars(uri, _uri);
// }

#ifdef __cplusplus
}
#endif
