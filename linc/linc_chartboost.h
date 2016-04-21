#ifndef _LINC_CHARTBOOST_H_
#define _LINC_CHARTBOOST_H_
    
// #include "../lib/____"

#include <hxcpp.h>

namespace linc {

    namespace chartboost {
        
        extern ::cpp::Function < bool(::String) > shouldRequestInterstitial;
        extern ::cpp::Function < bool(::String) > shouldDisplayInterstitial;
        extern ::cpp::Function < Void(::String) > didDisplayInterstitial;
        extern ::cpp::Function < Void(::String) > didCacheInterstitial;
        extern ::cpp::Function < Void(::String, ::String) > didFailToLoadInterstitial;
        extern ::cpp::Function < Void(::String) > didDismissInterstitial;
        extern ::cpp::Function < Void(::String) > didCloseInterstitial;
        extern ::cpp::Function < Void(::String) > didClickInterstitial;
        extern ::cpp::Function < bool(::String) > shouldDisplayMoreApps;
        extern ::cpp::Function < Void(::String) > didDisplayMoreApps;
        extern ::cpp::Function < Void(::String) > didCacheMoreApps;
        extern ::cpp::Function < Void(::String) > didDismissMoreApps;
        extern ::cpp::Function < Void(::String) > didCloseMoreApps;
        extern ::cpp::Function < Void(::String) > didClickMoreApps;
        extern ::cpp::Function < Void(::String, ::String) > didFailToLoadMoreApps;
        extern ::cpp::Function < bool(::String) > shouldDisplayRewardedVideo;
        extern ::cpp::Function < Void(::String) > didDisplayRewardedVideo;
        extern ::cpp::Function < Void(::String) > didCacheRewardedVideo;
        extern ::cpp::Function < Void(::String, ::String) > didFailToLoadRewardedVideo;
        extern ::cpp::Function < Void(::String) > didDismissRewardedVideo;
        extern ::cpp::Function < Void(::String) > didCloseRewardedVideo;
        extern ::cpp::Function < Void(::String) > didClickRewardedVideo;
        extern ::cpp::Function < Void(::String, int) > didCompleteRewardedVideo;
        extern ::cpp::Function < Void(::String) > willDisplayVideo;
        extern ::cpp::Function < Void(::String) > didCacheInPlay;
        extern ::cpp::Function < Void(::String, ::String) > didFailToLoadInPlay;
        extern ::cpp::Function < Void(::String, ::String) > didFailToRecordClick;
        extern ::cpp::Function < Void(::String) > didPauseClickForConfirmation;
        
        extern void startWithAppId(const char* appId, const char* appSignature, 
            ::cpp::Function < bool(::String) > shouldRequestInterstitial,
            ::cpp::Function < bool(::String) > shouldDisplayInterstitial,
            ::cpp::Function < Void(::String) > didDisplayInterstitial,
            ::cpp::Function < Void(::String) > didCacheInterstitial,
            ::cpp::Function < Void(::String, ::String) > didFailToLoadInterstitial,
            ::cpp::Function < Void(::String) > didDismissInterstitial,
            ::cpp::Function < Void(::String) > didCloseInterstitial,
            ::cpp::Function < Void(::String) > didClickInterstitial,
            ::cpp::Function < bool(::String) > shouldDisplayMoreApps,
            ::cpp::Function < Void(::String) > didDisplayMoreApps,
            ::cpp::Function < Void(::String) > didCacheMoreApps,
            ::cpp::Function < Void(::String) > didDismissMoreApps,
            ::cpp::Function < Void(::String) > didCloseMoreApps,
            ::cpp::Function < Void(::String) > didClickMoreApps,
            ::cpp::Function < Void(::String, ::String) > didFailToLoadMoreApps,
            ::cpp::Function < bool(::String) > shouldDisplayRewardedVideo,
            ::cpp::Function < Void(::String) > didDisplayRewardedVideo,
            ::cpp::Function < Void(::String) > didCacheRewardedVideo,
            ::cpp::Function < Void(::String, ::String) > didFailToLoadRewardedVideo,
            ::cpp::Function < Void(::String) > didDismissRewardedVideo,
            ::cpp::Function < Void(::String) > didCloseRewardedVideo,
            ::cpp::Function < Void(::String) > didClickRewardedVideo,
            ::cpp::Function < Void(::String, int) > didCompleteRewardedVideo,
            ::cpp::Function < Void(::String) > willDisplayVideo,
            ::cpp::Function < Void(::String) > didCacheInPlay,
            ::cpp::Function < Void(::String, ::String) > didFailToLoadInPlay,
            ::cpp::Function < Void(::String, ::String) > didFailToRecordClick
        );
        
        extern void showInterstitial(const char* location);
        extern void cacheInterstitial(const char* location);
        extern bool hasInterstitial(const char* location);

        extern void showRewardedVideo(const char* location);
        extern void cacheRewardedVideo(const char* location);
        extern bool hasRewardedVideo(const char* location);
        
        #if defined(ANDROID)

           struct AutoHaxe {

              int base;
              const char *message;
              AutoHaxe(const char *inMessage) {  
                 base = 0;
                 message = inMessage;
                 ::hx::SetTopOfStack(&base, true);
              }

              ~AutoHaxe()
              {
                 ::hx::SetTopOfStack((int*)0, true);
              }
           };

       #endif

    } //chartboost

} //linc

#endif //_LINC_CHARTBOOST_H_
