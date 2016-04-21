#include "./linc_chartboost.h"

#include <hxcpp.h>

#import <Chartboost/Chartboost.h>
#import <Foundation/Foundation.h>

@implementation ChartboostDelegate : NSObject

- (BOOL) shouldRequestInterstitial:(CBLocation)location { 
    return linc::chartboost::shouldRequestInterstitial(::String([location cStringUsingEncoding:NSASCIIStringEncoding])); 
}
- (BOOL) shouldDisplayInterstitial:(CBLocation)location {
    return linc::chartboost::shouldDisplayInterstitial(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didDisplayInterstitial:(CBLocation)location {
    linc::chartboost::didDisplayInterstitial(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didCacheInterstitial:(CBLocation)location {
    linc::chartboost::didCacheInterstitial(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didFailToLoadInterstitial:(CBLocation)location withError:(CBLoadError)error {
    linc::chartboost::didFailToLoadInterstitial(::String([location cStringUsingEncoding:NSASCIIStringEncoding]), ::String([self getErrorText:error]));
}
- (void) didDismissInterstitial:(CBLocation)location {
    linc::chartboost::didDismissInterstitial(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didCloseInterstitial:(CBLocation)location {
    linc::chartboost::didCloseInterstitial(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didClickInterstitial:(CBLocation)location {
    linc::chartboost::didClickInterstitial(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (BOOL) shouldDisplayMoreApps:(CBLocation)location {
    return linc::chartboost::shouldDisplayMoreApps(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didDisplayMoreApps:(CBLocation)location {
    linc::chartboost::didDisplayMoreApps(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didCacheMoreApps:(CBLocation)location {
    linc::chartboost::didCacheMoreApps(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didDismissMoreApps:(CBLocation)location {
    linc::chartboost::didDismissMoreApps(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didCloseMoreApps:(CBLocation)location {
    linc::chartboost::didCloseMoreApps(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didClickMoreApps:(CBLocation)location {
    linc::chartboost::didClickMoreApps(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didFailToLoadMoreApps:(CBLocation)location withError:(CBLoadError)error {
    linc::chartboost::didFailToLoadMoreApps(::String([location cStringUsingEncoding:NSASCIIStringEncoding]), ::String([self getErrorText:error]));
}
// - (void) didPrefetchVideos {
//     linc::chartboost::didPrefetchVideos(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
// }
- (BOOL) shouldDisplayRewardedVideo:(CBLocation)location {
    return linc::chartboost::shouldDisplayRewardedVideo(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didDisplayRewardedVideo:(CBLocation)location {
    linc::chartboost::didDisplayRewardedVideo(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didCacheRewardedVideo:(CBLocation)location {
    linc::chartboost::didCacheRewardedVideo(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didFailToLoadRewardedVideo:(CBLocation)location withError:(CBLoadError)error {
    linc::chartboost::didFailToLoadRewardedVideo(::String([location cStringUsingEncoding:NSASCIIStringEncoding]), ::String([self getErrorText:error]));
}
- (void) didDismissRewardedVideo:(CBLocation)location {
    linc::chartboost::didDismissRewardedVideo(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didCloseRewardedVideo:(CBLocation)location {
    linc::chartboost::didCloseRewardedVideo(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didClickRewardedVideo:(CBLocation)location {
    linc::chartboost::didClickRewardedVideo(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didCompleteRewardedVideo:(CBLocation)location withReward:(int)reward {
    linc::chartboost::didCompleteRewardedVideo(::String([location cStringUsingEncoding:NSASCIIStringEncoding]), reward);
}
- (void) willDisplayVideo:(CBLocation)location {
    linc::chartboost::willDisplayVideo(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
// - (void) didCompleteAppStoreSheetFlow {
//     linc::chartboost::didCompleteAppStoreSheetFlow(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
// }
- (void) didFailToRecordClick:(CBLocation)location withError:(CBClickError)error {
    linc::chartboost::didFailToRecordClick(::String([location cStringUsingEncoding:NSASCIIStringEncoding]), ::String([self getErrorText:error]));
}
// - (void) didInitialize:(BOOL)status {
//     linc::chartboost::didInitialize(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
// }
- (void) didCacheInPlay:(CBLocation)location {
    linc::chartboost::didCacheInPlay(::String([location cStringUsingEncoding:NSASCIIStringEncoding]));
}
- (void) didFailToLoadInPlay:(CBLocation)location withError:(CBLoadError)error {
    linc::chartboost::didFailToLoadInPlay(::String([location cStringUsingEncoding:NSASCIIStringEncoding]), ::String([self getErrorText:error]));
}

- (NSString *)getErrorText:(CBLoadError)e {
    NSString *errorText;
    switch(e){
        case CBLoadErrorInternal: {
            errorText = @"internal error !";
        } break;
        case CBLoadErrorInternetUnavailable: {
            errorText = @"no Internet connection !";
        } break;
        case CBLoadErrorTooManyConnections: {
            errorText = @"too many connections !";
        } break;
        case CBLoadErrorWrongOrientation: {
            errorText = @"wrong orientation !";
        } break;
        case CBLoadErrorFirstSessionInterstitialsDisabled: {
            errorText = @"first session !";
        } break;
        case CBLoadErrorNetworkFailure: {
            errorText = @"network error !";
        } break;
        case CBLoadErrorNoAdFound : {
            errorText = @"no ad found !";
        } break;
        case CBLoadErrorSessionNotStarted : {
            errorText = @"session not started !";
        } break;
        case CBLoadErrorImpressionAlreadyVisible : {
            errorText = @"impression already visible !";
        } break;
        case CBLoadErrorUserCancellation : {
            errorText = @"impression cancelled !";
        } break;
        case CBLoadErrorNoLocationFound : {
            errorText = @"missing location parameter !";
        } break;
        case CBLoadErrorAssetDownloadFailure : {
            errorText = @"asset download failed !";
        } break;
        case CBLoadErrorPrefetchingIncomplete : {
            errorText = @"prefetching of video content is incomplete !";
        } break;
        default: {
            errorText = [NSString stringWithFormat:@"unknown error %lul!", (long)e];
        }
    }
    return errorText;
}
@end

namespace linc {

    namespace chartboost {
        
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
            [Chartboost startWithAppId:[NSString stringWithUTF8String:appId]
                          appSignature:[NSString stringWithUTF8String:appSignature]
                              delegate:[[ChartboostDelegate alloc] init]];
                              
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
            [Chartboost showInterstitial:[NSString stringWithUTF8String:location]];
        }
        
        void cacheInterstitial(const char* location) {
            [Chartboost cacheInterstitial:[NSString stringWithUTF8String:location]];
        }
        
        bool hasInterstitial(const char* location) {
            return [Chartboost hasInterstitial:[NSString stringWithUTF8String:location]];
        }
        
        
        void showRewardedVideo(const char* location) {
            [Chartboost showRewardedVideo:[NSString stringWithUTF8String:location]];
        }
        
        void cacheRewardedVideo(const char* location) {
            [Chartboost cacheRewardedVideo:[NSString stringWithUTF8String:location]];
        }
        
        bool hasRewardedVideo(const char* location) {
            return [Chartboost hasRewardedVideo:[NSString stringWithUTF8String:location]];
        }

    } //chartboost namespace

} //linc