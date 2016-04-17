#ifndef _LINC_CHARTBOOST_H_
#define _LINC_CHARTBOOST_H_
    
// #include "../lib/____"

#include <hxcpp.h>

namespace linc {

    namespace chartboost {

        extern void showInterstitial(const char* location);
        extern void cacheInterstitial(const char* location);
        extern bool hasInterstitial(const char* location);

        extern void showRewardedVideo(const char* location);
        extern void cacheRewardedVideo(const char* location);
        extern bool hasRewardedVideo(const char* location);

    } //chartboost

} //linc

#endif //_LINC_CHARTBOOST_H_
