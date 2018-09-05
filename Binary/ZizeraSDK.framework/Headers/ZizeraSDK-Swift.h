// Generated by Apple Swift version 4.1.2 effective-3.3.2 (swiftlang-902.0.54 clang-902.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
@import CoreLocation;
@import UIKit;
@import CoreGraphics;
@import WebKit;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ZizeraSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// DBHelper class for database operations
SWIFT_CLASS("_TtC9ZizeraSDK8DBHelper")
@interface DBHelper : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (void)closeConnection;
/// Method to get DB path
///
/// returns:
/// return the SQlite DB file path
- (NSString * _Nonnull)getDBPath SWIFT_WARN_UNUSED_RESULT;
/// Adds column to an existing table
/// \param tableName name of the table
///
/// \param columnName name of the column
///
/// \param columnType type of the column to be added with default value as “String”
///
///
/// throws:
/// throws any data error or exception
- (BOOL)addColumnWithTableName:(NSString * _Nonnull)tableName columnName:(NSString * _Nonnull)columnName columnType:(NSString * _Nonnull)columnType error:(NSError * _Nullable * _Nullable)error;
/// Method to delete table with column name and column value
/// \param tableName name of the table
///
/// \param columnName name of the columns
///
/// \param columnValue Data’s for the columns
///
///
/// throws:
/// throws any data error or exception
- (BOOL)deleteDataWithTableName:(NSString * _Nonnull)tableName columnName:(NSString * _Nonnull)columnName columnValue:(NSString * _Nonnull)columnValue error:(NSError * _Nullable * _Nullable)error;
/// Delete table using column name
/// \param tablename name of the table
///
///
/// throws:
/// throws any data error or exception
- (BOOL)deleteTableWithTablename:(NSString * _Nonnull)tablename error:(NSError * _Nullable * _Nullable)error;
/// Method to select all data from the table
/// \param tablename name of the table
///
///
/// throws:
/// throws any data error or exception
///
/// returns:
/// return the array of value
- (NSArray * _Nullable)findAllWithTablename:(NSString * _Nonnull)tablename error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Update the table with column name and column value
/// \param tablename name of the table
///
/// \param columnName Coluumn name to update the value
///
/// \param columnValue value to be update
///
///
/// throws:
/// throws any data error or exception
- (BOOL)updateWithTablename:(NSString * _Nonnull)tablename columnName:(NSString * _Nonnull)columnName columnValue:(NSString * _Nonnull)columnValue error:(NSError * _Nullable * _Nullable)error;
/// Method to drop a table
/// \param tablename name of the table to drop
///
///
/// throws:
/// throws any data error or exception
- (BOOL)dropTableWithTablename:(NSString * _Nonnull)tablename error:(NSError * _Nullable * _Nullable)error;
@end


/// Class for resource download status
SWIFT_CLASS("_TtC9ZizeraSDK22ResourceDownloadStatus")
@interface ResourceDownloadStatus : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9ZizeraSDK18ZizeraImageHandler")
@interface ZizeraImageHandler : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class CLLocationManager;
@class CLLocation;

SWIFT_CLASS("_TtC9ZizeraSDK21ZizeraLocationManager")
@interface ZizeraLocationManager : NSObject <CLLocationManagerDelegate>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZizeraLocationManager * _Nonnull mInstance;)
+ (ZizeraLocationManager * _Nonnull)mInstance SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isGPSEnabled;)
+ (BOOL)isGPSEnabled SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didFailWithError:(NSError * _Nonnull)error;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
- (double)calculateUserDistanceWithLatitude:(double)latitude langitude:(double)langitude unit:(NSString * _Nonnull)unit SWIFT_WARN_UNUSED_RESULT;
- (double)calculateUserDistanceWithLocation:(CLLocation * _Nonnull)location unit:(NSString * _Nonnull)unit SWIFT_WARN_UNUSED_RESULT;
- (void)checkAndRequestAuthorization;
@end

@class UIViewController;
@class NSBundle;
@class NSCoder;

/// Class for Zizera Navigation Controller
SWIFT_CLASS("_TtC9ZizeraSDK26ZizeraNavigationController")
@interface ZizeraNavigationController : UINavigationController
/// Delegate method for ViewController
- (void)viewDidLoad;
/// Delegate method for ViewController
- (void)didReceiveMemoryWarning;
/// Delegate method for ViewController for orientation
@property (nonatomic, readonly) BOOL shouldAutorotate;
/// Delegate method for ViewController for supportedInterfaceOrientations
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=5.0);
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// Class for ZizeraPageView
SWIFT_CLASS("_TtC9ZizeraSDK14ZizeraPageView")
@interface ZizeraPageView : UIView
/// Initialization
/// \param frame frame value for the UIView
///
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
/// required init method
/// \param aDecoder NSCoder value
///
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9ZizeraSDK20ZizeraSearchDBHelper")
@interface ZizeraSearchDBHelper : NSObject
- (nonnull instancetype)initWithPubId:(NSString * _Nonnull)pubId OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)getSearchDBPathWithPubId:(NSString * _Nonnull)pubId SWIFT_WARN_UNUSED_RESULT;
- (BOOL)createSearchTableWithTableName:(NSString * _Nonnull)tableName columns:(NSArray<NSString *> * _Nonnull)columns error:(NSError * _Nullable * _Nullable)error;
- (NSArray * _Nullable)findAllWithTablename:(NSString * _Nonnull)tablename error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (BOOL)updateWithTablename:(NSString * _Nonnull)tablename columnName:(NSString * _Nonnull)columnName columnValue:(NSString * _Nonnull)columnValue error:(NSError * _Nullable * _Nullable)error;
- (BOOL)dropSearchTableWithTablename:(NSString * _Nonnull)tablename error:(NSError * _Nullable * _Nullable)error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// ZizeraViewController
SWIFT_CLASS("_TtC9ZizeraSDK20ZizeraViewController")
@interface ZizeraViewController : UIViewController
/// variable for launch url
@property (nonatomic, copy) NSString * _Nonnull launchURL;
/// onChange state method
/// \param state state to load
///
- (void)onchangeStateWithState:(NSString * _Nonnull)state;
/// By default status bar hided
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
/// Delegate method for view controller
- (void)viewDidLoad;
/// Delegate method for view controller
- (void)didReceiveMemoryWarning;
/// Delegate method for view controller
/// \param animated boolean value
///
- (void)viewWillAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class WKWebView;
@class WKUserContentController;
@class WKScriptMessage;
@class WKNavigation;
@class WKNavigationAction;

SWIFT_CLASS("_TtC9ZizeraSDK21ZizeraWebViewDelegate")
@interface ZizeraWebViewDelegate : NSObject <WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate>
- (nonnull instancetype)initWithWebview:(WKWebView * _Nonnull)webview OBJC_DESIGNATED_INITIALIZER;
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
- (void)webViewSetup;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (void)webView:(WKWebView * _Nonnull)webView didFinishNavigation:(WKNavigation * _Null_unspecified)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFailProvisionalNavigation:(WKNavigation * _Null_unspecified)navigation withError:(NSError * _Nonnull)error;
- (void)webView:(WKWebView * _Nonnull)webView decidePolicyForNavigationAction:(WKNavigationAction * _Nonnull)navigationAction decisionHandler:(void (^ _Nonnull)(WKNavigationActionPolicy))decisionHandler;
- (void)callJSLayerWithData:(id _Nonnull)data;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
