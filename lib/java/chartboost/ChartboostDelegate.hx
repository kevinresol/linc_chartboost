package chartboost;

import com.chartboost.sdk.model.CBError.CBError_CBImpressionError;
import com.chartboost.sdk.model.CBError.CBError_CBClickError;

@:keep
@:build(chartboost.Macro.build())
class ChartboostDelegate extends com.chartboost.sdk.ChartboostDelegate
{
	function shouldRequestInterstitial(location:String):Bool;
	function shouldDisplayInterstitial(location:String):Bool;
	function didDisplayInterstitial(location:String):Void;
	function didCacheInterstitial(location:String):Void;
	function didFailToLoadInterstitial(location:String, error:CBError_CBImpressionError):Void;
	function didDismissInterstitial(location:String):Void;
	function didCloseInterstitial(location:String):Void;
	function didClickInterstitial(location:String):Void;
	function shouldDisplayMoreApps(location:String):Bool;
	function didDisplayMoreApps(location:String):Void;
	function didCacheMoreApps(location:String):Void;
	function didDismissMoreApps(location:String):Void;
	function didCloseMoreApps(location:String):Void;
	function didClickMoreApps(location:String):Void;
	function didFailToLoadMoreApps(location:String, error:CBError_CBImpressionError):Void;
	function shouldDisplayRewardedVideo(location:String):Bool;
	function didDisplayRewardedVideo(location:String):Void;
	function didCacheRewardedVideo(location:String):Void;
	function didFailToLoadRewardedVideo(location:String, error:CBError_CBImpressionError):Void;
	function didDismissRewardedVideo(location:String):Void;
	function didCloseRewardedVideo(location:String):Void;
	function didClickRewardedVideo(location:String):Void;
	function didCompleteRewardedVideo(location:String, reward:Int):Void;
	function willDisplayVideo(location:String):Void;
	function didCacheInPlay(location:String):Void;
	function didFailToLoadInPlay(location:String, error:CBError_CBImpressionError):Void;
	function didFailToRecordClick(uri:String, error:CBError_CBClickError):Void;
	
	// function didPauseClickForConfirmation(activity:android.app.Activity):Void;
}