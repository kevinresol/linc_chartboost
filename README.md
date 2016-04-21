# linc_chartboost

Haxe/hxcpp @:native bindings for [Chartboost](https://www.chartboost.com/)

## Prepare

#### Android

##### Include chartboost_delegate.jar

Make sure you are using Java 1.7. (you can use the command `javac -version` to check the version and use `jenv` to handle multiple Java versions on your machine if needed). Build `lib/java/build.hxml` then drag the output `chartboost_delegate.jar` into your Android Studio project and add it as library. This little jar redirects all the chartboost delegate calls to Haxe through JNI.

##### Follow the SDK doc

Set up your android project following the [SDK doc](https://answers.chartboost.com/hc/en-us/articles/201219545-Download-Integrate-the-Chartboost-SDK-for-Android).
Also, set the chartboost delegate right after `Chartboost.onCreate(this);`.

```java
public void onCreate(Bundle savedInstanceState) {
    
    super.onCreate(savedInstanceState);

    Chartboost.startWithAppId(this, "your-app-id", "your-app-signature");
    Chartboost.onCreate(this);
	
	// chartboost.ChartboostDelegate is from chartboost_delegate.jar
    Chartboost.setDelegate(new chartboost.ChartboostDelegate());
}
/* ... other overrides */
```

#### iOS

##### Follow the SDK doc
Set up your XCode project following the [SDK doc](https://answers.chartboost.com/hc/en-us/articles/201220095-Download-Integrate-the-Chartboost-SDK-for-iOS#linkframeworks).

##### Prepare a copy of Chartboost.framework

In order to help hxcpp compile, put a copy of Chartboost.framework under `linc_chartboost/lib`


#### Haxe

```haxe

// note that on android, the appId and appSignature here is not used
// because they are initialized in Java (See prepare section).
// But the parameters are kept here just for cross-platform consistency
Chartboost.startWithAppId("your-app-id", "your-app-signature", {
	didCacheRewardedVideo: function(location:String) trace("didCacheRewardedVideo", location),
	didCompleteRewardedVideo: function(location:String, reward:Int) trace("didCompleteRewardedVideo", location, reward),
});

Chartboost.cacheRewardedVideo('Default');
trace(Chartboost.hasRewardedVideo('Default'));
Chartboost.showRewardedVideo('Default');

```

## Note

On android it requires SDL because it uses `SDL_AndroidGetJNIEnv()` to fetch
the Java VM environment for all the JNI stuffs. However, I believe it can be
easily replaced by other equivalent functions if you don't use SDL.