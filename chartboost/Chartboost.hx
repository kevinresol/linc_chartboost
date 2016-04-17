package chartboost;

@:keep
@:include('linc_chartboost.h')
#if !display
@:build(linc.Linc.touch())
@:build(linc.Linc.xml('chartboost'))
#end
extern class Chartboost {

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

} // Chartboost