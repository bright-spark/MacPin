#import "TargetConditionals.h"
#import "WKFoundation.h"
#import "WKPreferences+Privates.h"
#import "_WKDiagnosticLoggingDelegate.h"
#import "_WKFindDelegate.h"
#import "_WKFindOptions.h"
#import "WKWebView+Privates.h"
#import "_WKThumbnailView.h"
#import "WKView+Privates.h"
#import "_WKProcessPoolConfiguration.h"
#import "_WKDownload.h"
#import "_WKDownloadDelegate.h"
#import "_WKInputDelegate.h"
#import "_WKFormInputSession.h"
#import "WKProcessPoolPrivate.h"
#import "JSContext+Privates.h"
#import "JSContextRefPrivate.h"
#import "WKPage.h"
#import "WKInspectorPrivateMac.h"
#import "WKIconDatabase.h"
#import "WKIconDatabaseCG.h"
#import "WKNavigationDelegatePrivate.h"
#import "WKNavigationResponsePrivate.h"
#import "WKUIDelegatePrivate.h"
#import "WKWebViewConfigurationPrivate.h"
#import "WKContextPrivate.h"
#import "WKString.h"
#import "WKStringCF.h"
#import "WKURL.h"
#import "WKURLCF.h"
#import "WKData.h"

/* things to integrate:
	better JS errors from wkwebviews: https://github.com/WebKit/webkit/commit/984d854e5c71da16cdf85c644fc292947aea43a1
	white/blacklisted WKUserScripts: https://github.com/WebKit/webkit/blob/21a4dcb584f205c2b5ecc326be846f0db7a7ecac/Source/WebKit2/UIProcess/API/Cocoa/WKUserScriptPrivate.h
	Remote debuggers for app.js: https://github.com/WebKit/webkit/commit/a06b5fecb8e69eccdc7ee2a668868740750d260c
	WKUserStyleSheet: https://github.com/WebKit/webkit/commit/543b286f525e3e9de69d9ac60b1e64dc2ad4da2e
*/

#if TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR || TARGET_OS_SIMULATOR
// no DnD on iOS
#else
#import "WebURLsWithTitles.h"
#endif
