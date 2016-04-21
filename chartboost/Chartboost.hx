package chartboost;

import cpp.vm.Deque;
import cpp.Callable;

// avoid header name clash on ios (Chartboost.h)
typedef Chartboost = ChartboostImpl;

class ChartboostImpl {
    static var delegate:ChartboostDelegate;
    
    public static function startWithAppId(appId:String, appSignature:String, delegate:ChartboostDelegate):Void {
        ChartboostImpl.delegate = delegate;
        ChartboostExtern.startWithAppId(appId, appSignature, 
            Callable.fromStaticFunction(shouldRequestInterstitial),
            Callable.fromStaticFunction(shouldDisplayInterstitial),
            Callable.fromStaticFunction(didDisplayInterstitial),
            Callable.fromStaticFunction(didCacheInterstitial),
            Callable.fromStaticFunction(didFailToLoadInterstitial),
            Callable.fromStaticFunction(didDismissInterstitial),
            Callable.fromStaticFunction(didCloseInterstitial),
            Callable.fromStaticFunction(didClickInterstitial),
            Callable.fromStaticFunction(shouldDisplayMoreApps),
            Callable.fromStaticFunction(didDisplayMoreApps),
            Callable.fromStaticFunction(didCacheMoreApps),
            Callable.fromStaticFunction(didDismissMoreApps),
            Callable.fromStaticFunction(didCloseMoreApps),
            Callable.fromStaticFunction(didClickMoreApps),
            Callable.fromStaticFunction(didFailToLoadMoreApps),
            Callable.fromStaticFunction(shouldDisplayRewardedVideo),
            Callable.fromStaticFunction(didDisplayRewardedVideo),
            Callable.fromStaticFunction(didCacheRewardedVideo),
            Callable.fromStaticFunction(didFailToLoadRewardedVideo),
            Callable.fromStaticFunction(didDismissRewardedVideo),
            Callable.fromStaticFunction(didCloseRewardedVideo),
            Callable.fromStaticFunction(didClickRewardedVideo),
            Callable.fromStaticFunction(didCompleteRewardedVideo),
            Callable.fromStaticFunction(willDisplayVideo),
            Callable.fromStaticFunction(didCacheInPlay),
            Callable.fromStaticFunction(didFailToLoadInPlay),
            Callable.fromStaticFunction(didFailToRecordClick)
        );
    }
    public static function showInterstitial(location:String):Void {
        ChartboostExtern.showInterstitial(location);
    }
    public static function cacheInterstitial(location:String):Void {
        ChartboostExtern.cacheInterstitial(location);
    }
    public static function hasInterstitial(location:String):Bool {
        return ChartboostExtern.hasInterstitial(location);
    }
    public static function showRewardedVideo(location:String):Void {
        ChartboostExtern.showRewardedVideo(location);
    }
    public static function cacheRewardedVideo(location:String):Void {
        ChartboostExtern.cacheRewardedVideo(location);
    }
    public static function hasRewardedVideo(location:String):Bool {
        return ChartboostExtern.hasRewardedVideo(location);
    }
    
    // callbacks
    static function shouldRequestInterstitial(location:String):Bool {
        if(delegate.shouldRequestInterstitial != null) return delegate.shouldRequestInterstitial(location); return true;
    }
	static function shouldDisplayInterstitial(location:String):Bool {
        if(delegate.shouldDisplayInterstitial != null) return delegate.shouldDisplayInterstitial(location); return true;
    }
	static function didDisplayInterstitial(location:String):Void {
        if(delegate.didDisplayInterstitial != null) delegate.didDisplayInterstitial(location);
    }
	static function didCacheInterstitial(location:String):Void {
        if(delegate.didCacheInterstitial != null) delegate.didCacheInterstitial(location);
    }
	static function didFailToLoadInterstitial(location:String, error:String):Void {
        if(delegate.didFailToLoadInterstitial != null) delegate.didFailToLoadInterstitial(location, error);
    }
	static function didDismissInterstitial(location:String):Void {
        if(delegate.didDismissInterstitial != null) delegate.didDismissInterstitial(location);
    }
	static function didCloseInterstitial(location:String):Void {
        if(delegate.didCloseInterstitial != null) delegate.didCloseInterstitial(location);
    }
	static function didClickInterstitial(location:String):Void {
        if(delegate.didClickInterstitial != null) delegate.didClickInterstitial(location);
    }
	static function shouldDisplayMoreApps(location:String):Bool {
        if(delegate.shouldDisplayMoreApps != null) return delegate.shouldDisplayMoreApps(location); return true;
    }
	static function didDisplayMoreApps(location:String):Void {
        if(delegate.didDisplayMoreApps != null) delegate.didDisplayMoreApps(location);
    }
	static function didCacheMoreApps(location:String):Void {
        if(delegate.didCacheMoreApps != null) delegate.didCacheMoreApps(location);
    }
	static function didDismissMoreApps(location:String):Void {
        if(delegate.didDismissMoreApps != null) delegate.didDismissMoreApps(location);
    }
	static function didCloseMoreApps(location:String):Void {
        if(delegate.didCloseMoreApps != null) delegate.didCloseMoreApps(location);
    }
	static function didClickMoreApps(location:String):Void {
        if(delegate.didClickMoreApps != null) delegate.didClickMoreApps(location);
    }
	static function didFailToLoadMoreApps(location:String, error:String):Void {
        if(delegate.didFailToLoadMoreApps != null) delegate.didFailToLoadMoreApps(location, error);
    }
	static function shouldDisplayRewardedVideo(location:String):Bool {
        if(delegate.shouldDisplayRewardedVideo != null) return delegate.shouldDisplayRewardedVideo(location); return true;
    }
	static function didDisplayRewardedVideo(location:String):Void {
        if(delegate.didDisplayRewardedVideo != null) delegate.didDisplayRewardedVideo(location);
    }
	static function didCacheRewardedVideo(location:String):Void {
        if(delegate.didCacheRewardedVideo != null) delegate.didCacheRewardedVideo(location);
    }
	static function didFailToLoadRewardedVideo(location:String, error:String):Void {
        if(delegate.didFailToLoadRewardedVideo != null) delegate.didFailToLoadRewardedVideo(location, error);
    }
	static function didDismissRewardedVideo(location:String):Void {
        if(delegate.didDismissRewardedVideo != null) delegate.didDismissRewardedVideo(location);
    }
	static function didCloseRewardedVideo(location:String):Void {
        if(delegate.didCloseRewardedVideo != null) delegate.didCloseRewardedVideo(location);
    }
	static function didClickRewardedVideo(location:String):Void {
        if(delegate.didClickRewardedVideo != null) delegate.didClickRewardedVideo(location);
    }
	static function didCompleteRewardedVideo(location:String, reward:Int):Void {
        if(delegate.didCompleteRewardedVideo != null) delegate.didCompleteRewardedVideo(location, reward);
    }
	static function willDisplayVideo(location:String):Void {
        if(delegate.willDisplayVideo != null) delegate.willDisplayVideo(location);
    }
	static function didCacheInPlay(location:String):Void {
        if(delegate.didCacheInPlay != null) delegate.didCacheInPlay(location);
    }
	static function didFailToLoadInPlay(location:String, error:String):Void {
        if(delegate.didFailToLoadInPlay != null) delegate.didFailToLoadInPlay(location, error);
    }
	static function didFailToRecordClick(uri:String, error:String):Void {
        if(delegate.didFailToRecordClick != null) delegate.didFailToRecordClick(uri, error);
    }

}

@:keep
@:include('linc_chartboost.h')
#if !display
@:build(linc.Linc.touch())
@:build(linc.Linc.xml('chartboost'))
#end
extern class ChartboostExtern {
    
    @:native('linc::chartboost::startWithAppId')
    static function startWithAppId(appId:String, appSignature:String, 
        shouldRequestInterstitial:Callable<String->Bool>,
        shouldDisplayInterstitial:Callable<String->Bool>,
        didDisplayInterstitial:Callable<String->Void>,
        didCacheInterstitial:Callable<String->Void>,
        didFailToLoadInterstitial:Callable<String->String->Void>,
        didDismissInterstitial:Callable<String->Void>,
        didCloseInterstitial:Callable<String->Void>,
        didClickInterstitial:Callable<String->Void>,
        shouldDisplayMoreApps:Callable<String->Bool>,
        didDisplayMoreApps:Callable<String->Void>,
        didCacheMoreApps:Callable<String->Void>,
        didDismissMoreApps:Callable<String->Void>,
        didCloseMoreApps:Callable<String->Void>,
        didClickMoreApps:Callable<String->Void>,
        didFailToLoadMoreApps:Callable<String->String->Void>,
        shouldDisplayRewardedVideo:Callable<String->Bool>,
        didDisplayRewardedVideo:Callable<String->Void>,
        didCacheRewardedVideo:Callable<String->Void>,
        didFailToLoadRewardedVideo:Callable<String->String->Void>,
        didDismissRewardedVideo:Callable<String->Void>,
        didCloseRewardedVideo:Callable<String->Void>,
        didClickRewardedVideo:Callable<String->Void>,
        didCompleteRewardedVideo:Callable<String->Int->Void>,
        willDisplayVideo:Callable<String->Void>,
        didCacheInPlay:Callable<String->Void>,
        didFailToLoadInPlay:Callable<String->String->Void>,
        didFailToRecordClick:Callable<String->String->Void>
    ):Void;
    
    @:native('linc::chartboost::showInterstitial')
    static function showInterstitial(location:String):Void;
    
    @:native('linc::chartboost::cacheInterstitial')
    static function cacheInterstitial(location:String):Void;
    
    @:native('linc::chartboost::hasInterstitial')
    static function hasInterstitial(location:String):Bool;

    @:native('linc::chartboost::showRewardedVideo')
    static function showRewardedVideo(location:String):Void;
    
    @:native('linc::chartboost::cacheRewardedVideo')
    static function cacheRewardedVideo(location:String):Void;
    
    @:native('linc::chartboost::hasRewardedVideo')
    static function hasRewardedVideo(location:String):Bool;

} // ChartboostExtern

typedef ChartboostDelegate = 
{
    ?shouldRequestInterstitial:String->Bool,
    ?shouldDisplayInterstitial:String->Bool,
    ?didDisplayInterstitial:String->Void,
    ?didCacheInterstitial:String->Void,
    ?didFailToLoadInterstitial:String->String->Void,
    ?didDismissInterstitial:String->Void,
    ?didCloseInterstitial:String->Void,
    ?didClickInterstitial:String->Void,
    ?shouldDisplayMoreApps:String->Bool,
    ?didDisplayMoreApps:String->Void,
    ?didCacheMoreApps:String->Void,
    ?didDismissMoreApps:String->Void,
    ?didCloseMoreApps:String->Void,
    ?didClickMoreApps:String->Void,
    ?didFailToLoadMoreApps:String->String->Void,
    ?shouldDisplayRewardedVideo:String->Bool,
    ?didDisplayRewardedVideo:String->Void,
    ?didCacheRewardedVideo:String->Void,
    ?didFailToLoadRewardedVideo:String->String->Void,
    ?didDismissRewardedVideo:String->Void,
    ?didCloseRewardedVideo:String->Void,
    ?didClickRewardedVideo:String->Void,
    ?didCompleteRewardedVideo:String->Int->Void,
    ?willDisplayVideo:String->Void,
    ?didCacheInPlay:String->Void,
    ?didFailToLoadInPlay:String->String->Void,
    ?didFailToRecordClick:String->String->Void
}