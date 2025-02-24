#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class GuruSharedApiError, GuruSharedApiErrorApiException, GuruSharedApiErrorNetworkError, GuruSharedApiErrorParsingError, GuruSharedApiErrorUnknownError, GuruSharedAppEvent, GuruSharedAppEventCompanion, GuruSharedAppEventRequest, GuruSharedAppEventRequestCompanion, GuruSharedAuthError, GuruSharedAuthErrorCancellation, GuruSharedAuthErrorInvalidCredentials, GuruSharedAuthErrorProviderNotFound, GuruSharedAuthErrorServerError, GuruSharedAuthErrorUnexpectedException, GuruSharedAuthErrorUnknownError, GuruSharedAuthProviderType, GuruSharedAuthToken, GuruSharedBaseRequest, GuruSharedBaseRequestCompanion, GuruSharedBaseResp, GuruSharedBaseRespCompanion, GuruSharedBillingError, GuruSharedBillingErrorCancellation, GuruSharedBillingErrorProviderNotFound, GuruSharedBillingErrorServerError, GuruSharedBillingErrorUnauthorized, GuruSharedBillingErrorUnexpectedBillingResponse, GuruSharedBillingErrorUnexpectedException, GuruSharedBillingErrorUnexpectedQueryResults, GuruSharedBillingErrorUnknownError, GuruSharedBillingProviderType, GuruSharedDarwinBridge, GuruSharedDispatchersX, GuruSharedFacebookAuthCredentials, GuruSharedGoogleAuthCredentials, GuruSharedInitRequest, GuruSharedInitRequestCompanion, GuruSharedInitResp, GuruSharedInitRespCompanion, GuruSharedKoin_coreBeanDefinition<T>, GuruSharedKoin_coreCallbacks<T>, GuruSharedKoin_coreExtensionManager, GuruSharedKoin_coreInstanceContext, GuruSharedKoin_coreInstanceFactory<T>, GuruSharedKoin_coreInstanceFactoryCompanion, GuruSharedKoin_coreInstanceRegistry, GuruSharedKoin_coreKind, GuruSharedKoin_coreKoin, GuruSharedKoin_coreKoinDefinition<R>, GuruSharedKoin_coreLevel, GuruSharedKoin_coreLockable, GuruSharedKoin_coreLogger, GuruSharedKoin_coreModule, GuruSharedKoin_coreParametersHolder, GuruSharedKoin_coreParametersHolderCompanion, GuruSharedKoin_corePropertyRegistry, GuruSharedKoin_coreScope, GuruSharedKoin_coreScopeDSL, GuruSharedKoin_coreScopeRegistry, GuruSharedKoin_coreScopeRegistryCompanion, GuruSharedKoin_coreSingleInstanceFactory<T>, GuruSharedKotlinAbstractCoroutineContextElement, GuruSharedKotlinAbstractCoroutineContextKey<B, E>, GuruSharedKotlinArray<T>, GuruSharedKotlinEnum<E>, GuruSharedKotlinEnumCompanion, GuruSharedKotlinException, GuruSharedKotlinIllegalStateException, GuruSharedKotlinLazyThreadSafetyMode, GuruSharedKotlinNothing, GuruSharedKotlinRuntimeException, GuruSharedKotlinThrowable, GuruSharedKotlinx_coroutines_coreCoroutineDispatcher, GuruSharedKotlinx_coroutines_coreCoroutineDispatcherKey, GuruSharedKotlinx_serialization_coreSerialKind, GuruSharedKotlinx_serialization_coreSerializersModule, GuruSharedKotlinx_serialization_jsonJsonElement, GuruSharedKotlinx_serialization_jsonJsonElementCompanion, GuruSharedLogger, GuruSharedLoggerLogLevel, GuruSharedLoginRequest, GuruSharedLoginRequestCompanion, GuruSharedLoginResp, GuruSharedLoginRespCompanion, GuruSharedOrderRequest, GuruSharedOrderRequestCompanion, GuruSharedOrderResp, GuruSharedOrderRespCompanion, GuruSharedPlatformLogger, GuruSharedProductType, GuruSharedProductTypeCompanion, GuruSharedRefer, GuruSharedReferCompanion, GuruSharedSdkConfig, GuruSharedSdkConfigBuilder, GuruSharedSkuDetails, GuruSharedSkuOrderParams, GuruSharedSkuOrderParamsBuilder, GuruSharedSkuQueryParams, GuruSharedSkuQueryParamsBuilder, GuruSharedStorageKeys, GuruSharedVerifyReceiptRequest, GuruSharedVerifyReceiptRequestCompanion, GuruSharedVerifyReceiptResp, GuruSharedVerifyReceiptRespCompanion;

@protocol GuruSharedAuthProvider, GuruSharedCommonCallback, GuruSharedDarwinAuthProvider, GuruSharedDarwinAuthProviderFactory, GuruSharedDarwinBillingProvider, GuruSharedDarwinBillingProviderFactory, GuruSharedDarwinDeviceFeature, GuruSharedIBillingProviderHandler, GuruSharedKoin_coreKoinComponent, GuruSharedKoin_coreKoinExtension, GuruSharedKoin_coreKoinScopeComponent, GuruSharedKoin_coreQualifier, GuruSharedKoin_coreScopeCallback, GuruSharedKotlinAnnotation, GuruSharedKotlinComparable, GuruSharedKotlinContinuation, GuruSharedKotlinContinuationInterceptor, GuruSharedKotlinCoroutineContext, GuruSharedKotlinCoroutineContextElement, GuruSharedKotlinCoroutineContextKey, GuruSharedKotlinIterator, GuruSharedKotlinKAnnotatedElement, GuruSharedKotlinKClass, GuruSharedKotlinKClassifier, GuruSharedKotlinKDeclarationContainer, GuruSharedKotlinLazy, GuruSharedKotlinx_coroutines_coreFlow, GuruSharedKotlinx_coroutines_coreFlowCollector, GuruSharedKotlinx_coroutines_coreRunnable, GuruSharedKotlinx_coroutines_coreSharedFlow, GuruSharedKotlinx_coroutines_coreStateFlow, GuruSharedKotlinx_serialization_coreCompositeDecoder, GuruSharedKotlinx_serialization_coreCompositeEncoder, GuruSharedKotlinx_serialization_coreDecoder, GuruSharedKotlinx_serialization_coreDeserializationStrategy, GuruSharedKotlinx_serialization_coreEncoder, GuruSharedKotlinx_serialization_coreKSerializer, GuruSharedKotlinx_serialization_coreSerialDescriptor, GuruSharedKotlinx_serialization_coreSerializationStrategy, GuruSharedKotlinx_serialization_coreSerializersModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface GuruSharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface GuruSharedBase (GuruSharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface GuruSharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface GuruSharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorGuruSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface GuruSharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface GuruSharedByte : GuruSharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface GuruSharedUByte : GuruSharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface GuruSharedShort : GuruSharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface GuruSharedUShort : GuruSharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface GuruSharedInt : GuruSharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface GuruSharedUInt : GuruSharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface GuruSharedLong : GuruSharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface GuruSharedULong : GuruSharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface GuruSharedFloat : GuruSharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface GuruSharedDouble : GuruSharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface GuruSharedBoolean : GuruSharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("AuthProvider")))
@protocol GuruSharedAuthProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("login(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)logoutWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("logout(completionHandler:)")));
@property (readonly) GuruSharedAuthProviderType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthProviderFactory")))
@interface GuruSharedAuthProviderFactory : GuruSharedBase
- (instancetype)initWithConfig:(GuruSharedSdkConfig *)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)createAuthProviderType:(GuruSharedAuthProviderType *)authProviderType context:(id)context __attribute__((swift_name("create(authProviderType:context:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol GuruSharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface GuruSharedKotlinEnum<E> : GuruSharedBase <GuruSharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthProviderType")))
@interface GuruSharedAuthProviderType : GuruSharedKotlinEnum<GuruSharedAuthProviderType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) GuruSharedAuthProviderType *guest __attribute__((swift_name("guest")));
@property (class, readonly) GuruSharedAuthProviderType *google __attribute__((swift_name("google")));
@property (class, readonly) GuruSharedAuthProviderType *facebook __attribute__((swift_name("facebook")));
@property (class, readonly) GuruSharedAuthProviderType *apple __attribute__((swift_name("apple")));
+ (GuruSharedKotlinArray<GuruSharedAuthProviderType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GuruSharedAuthProviderType *> *entries __attribute__((swift_name("entries")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GuestAuthProvider")))
@interface GuruSharedGuestAuthProvider : GuruSharedBase <GuruSharedAuthProvider>
- (instancetype)initWithType:(GuruSharedAuthProviderType *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("login(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)logoutWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("logout(completionHandler:)")));
@property (readonly) GuruSharedAuthProviderType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface GuruSharedKotlinThrowable : GuruSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (GuruSharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GuruSharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("AuthError")))
@interface GuruSharedAuthError : GuruSharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthError.Cancellation")))
@interface GuruSharedAuthErrorCancellation : GuruSharedAuthError
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedAuthErrorCancellation *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthError.InvalidCredentials")))
@interface GuruSharedAuthErrorInvalidCredentials : GuruSharedAuthError
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedAuthErrorInvalidCredentials *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthError.ProviderNotFound")))
@interface GuruSharedAuthErrorProviderNotFound : GuruSharedAuthError
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedAuthErrorProviderNotFound *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthError.ServerError")))
@interface GuruSharedAuthErrorServerError : GuruSharedAuthError
- (instancetype)initWithException:(GuruSharedKotlinThrowable *)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedAuthErrorServerError *)doCopyException:(GuruSharedKotlinThrowable *)exception __attribute__((swift_name("doCopy(exception:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GuruSharedKotlinThrowable *exception __attribute__((swift_name("exception")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthError.UnexpectedException")))
@interface GuruSharedAuthErrorUnexpectedException : GuruSharedAuthError
- (instancetype)initWithException:(GuruSharedKotlinThrowable *)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedAuthErrorUnexpectedException *)doCopyException:(GuruSharedKotlinThrowable *)exception __attribute__((swift_name("doCopy(exception:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GuruSharedKotlinThrowable *exception __attribute__((swift_name("exception")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthError.UnknownError")))
@interface GuruSharedAuthErrorUnknownError : GuruSharedAuthError
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedAuthErrorUnknownError *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthToken")))
@interface GuruSharedAuthToken : GuruSharedBase
- (instancetype)initWithAppId:(NSString *)appId idToken:(NSString *)idToken user:(NSString * _Nullable)user web:(GuruSharedInt * _Nullable)web __attribute__((swift_name("init(appId:idToken:user:web:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedAuthToken *)doCopyAppId:(NSString *)appId idToken:(NSString *)idToken user:(NSString * _Nullable)user web:(GuruSharedInt * _Nullable)web __attribute__((swift_name("doCopy(appId:idToken:user:web:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appId __attribute__((swift_name("appId")));
@property (readonly) NSString *idToken __attribute__((swift_name("idToken")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@property (readonly) GuruSharedInt * _Nullable web __attribute__((swift_name("web")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FacebookAuthCredentials")))
@interface GuruSharedFacebookAuthCredentials : GuruSharedBase
- (instancetype)initWithAppId:(NSString *)appId protocolScheme:(NSString * _Nullable)protocolScheme redirectUri:(NSString * _Nullable)redirectUri __attribute__((swift_name("init(appId:protocolScheme:redirectUri:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedFacebookAuthCredentials *)doCopyAppId:(NSString *)appId protocolScheme:(NSString * _Nullable)protocolScheme redirectUri:(NSString * _Nullable)redirectUri __attribute__((swift_name("doCopy(appId:protocolScheme:redirectUri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appId __attribute__((swift_name("appId")));
@property (readonly) NSString * _Nullable protocolScheme __attribute__((swift_name("protocolScheme")));
@property (readonly) NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GoogleAuthCredentials")))
@interface GuruSharedGoogleAuthCredentials : GuruSharedBase
- (instancetype)initWithClientId:(NSString *)clientId protocolScheme:(NSString * _Nullable)protocolScheme redirectUri:(NSString * _Nullable)redirectUri __attribute__((swift_name("init(clientId:protocolScheme:redirectUri:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedGoogleAuthCredentials *)doCopyClientId:(NSString *)clientId protocolScheme:(NSString * _Nullable)protocolScheme redirectUri:(NSString * _Nullable)redirectUri __attribute__((swift_name("doCopy(clientId:protocolScheme:redirectUri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) NSString * _Nullable protocolScheme __attribute__((swift_name("protocolScheme")));
@property (readonly) NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@end

__attribute__((swift_name("BillingProvider")))
@protocol GuruSharedBillingProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)consumePurchaseId:(NSString *)id completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("consumePurchase(id:completionHandler:)")));
- (void)dispose __attribute__((swift_name("dispose()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)purchaseSkuOrderParams:(GuruSharedSkuOrderParams *)params developerPayload:(NSString *)developerPayload context:(id)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("purchaseSkuOrder(params:developerPayload:context:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)queryAndHandleUnconsumedPurchasesWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("queryAndHandleUnconsumedPurchases(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)querySkuDetailsParams:(NSArray<GuruSharedSkuQueryParams *> *)params completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("querySkuDetails(params:completionHandler:)")));
@property (readonly) id<GuruSharedIBillingProviderHandler> handler __attribute__((swift_name("handler")));
@property (readonly) GuruSharedBillingProviderType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingProviderFactory")))
@interface GuruSharedBillingProviderFactory : GuruSharedBase
- (instancetype)initWithConfig:(GuruSharedSdkConfig *)config context:(id)context __attribute__((swift_name("init(config:context:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)createBillingProviderType:(GuruSharedBillingProviderType *)billingProviderType handler:(id<GuruSharedIBillingProviderHandler>)handler __attribute__((swift_name("create(billingProviderType:handler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingProviderType")))
@interface GuruSharedBillingProviderType : GuruSharedKotlinEnum<GuruSharedBillingProviderType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) GuruSharedBillingProviderType *apple __attribute__((swift_name("apple")));
@property (class, readonly) GuruSharedBillingProviderType *googlePlay __attribute__((swift_name("googlePlay")));
+ (GuruSharedKotlinArray<GuruSharedBillingProviderType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GuruSharedBillingProviderType *> *entries __attribute__((swift_name("entries")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductType")))
@interface GuruSharedProductType : GuruSharedKotlinEnum<GuruSharedProductType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GuruSharedProductTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GuruSharedProductType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) GuruSharedProductType *inapp __attribute__((swift_name("inapp")));
@property (class, readonly) GuruSharedProductType *subs __attribute__((swift_name("subs")));
+ (GuruSharedKotlinArray<GuruSharedProductType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GuruSharedProductType *> *entries __attribute__((swift_name("entries")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)value __attribute__((swift_name("value()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductType.Companion")))
@interface GuruSharedProductTypeCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedProductTypeCompanion *shared __attribute__((swift_name("shared")));
- (GuruSharedProductType *)fromStringType:(NSString *)type __attribute__((swift_name("fromString(type:)")));
@end

__attribute__((swift_name("IBillingProviderHandler")))
@protocol GuruSharedIBillingProviderHandler
@required
- (void)onPurchaseCancelledProviderType:(GuruSharedBillingProviderType *)providerType __attribute__((swift_name("onPurchaseCancelled(providerType:)")));
- (void)onPurchaseFailureProviderType:(GuruSharedBillingProviderType *)providerType error:(GuruSharedBillingError *)error __attribute__((swift_name("onPurchaseFailure(providerType:error:)")));
- (void)onPurchaseTransactionVerifyProviderType:(GuruSharedBillingProviderType *)providerType productId:(NSString *)productId receipt:(NSString *)receipt __attribute__((swift_name("onPurchaseTransactionVerify(providerType:productId:receipt:)")));
@end

__attribute__((swift_name("IBillingPurchaseCallback")))
@protocol GuruSharedIBillingPurchaseCallback
@required
- (void)onErrorError:(GuruSharedKotlinThrowable *)error __attribute__((swift_name("onError(error:)")));
- (void)onSuccessProductId:(NSString *)productId __attribute__((swift_name("onSuccess(productId:)")));
- (void)onUserCancelled __attribute__((swift_name("onUserCancelled()")));
@end

__attribute__((swift_name("SkuDetailsQueryCallback")))
@protocol GuruSharedSkuDetailsQueryCallback
@required
- (void)onFailedError:(GuruSharedKotlinThrowable *)error __attribute__((swift_name("onFailed(error:)")));
- (void)onSuccessSkuDetails:(NSArray<GuruSharedSkuDetails *> *)skuDetails __attribute__((swift_name("onSuccess(skuDetails:)")));
@end

__attribute__((swift_name("BillingError")))
@interface GuruSharedBillingError : GuruSharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingError.Cancellation")))
@interface GuruSharedBillingErrorCancellation : GuruSharedBillingError
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedBillingErrorCancellation *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingError.ProviderNotFound")))
@interface GuruSharedBillingErrorProviderNotFound : GuruSharedBillingError
- (instancetype)initWithType:(GuruSharedBillingProviderType *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedBillingErrorProviderNotFound *)doCopyType:(GuruSharedBillingProviderType *)type __attribute__((swift_name("doCopy(type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) GuruSharedBillingProviderType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingError.ServerError")))
@interface GuruSharedBillingErrorServerError : GuruSharedBillingError
- (instancetype)initWithException:(GuruSharedKotlinThrowable *)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedBillingErrorServerError *)doCopyException:(GuruSharedKotlinThrowable *)exception __attribute__((swift_name("doCopy(exception:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GuruSharedKotlinThrowable *exception __attribute__((swift_name("exception")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingError.Unauthorized")))
@interface GuruSharedBillingErrorUnauthorized : GuruSharedBillingError
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedBillingErrorUnauthorized *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingError.UnexpectedBillingResponse")))
@interface GuruSharedBillingErrorUnexpectedBillingResponse : GuruSharedBillingError
- (instancetype)initWithCode:(int32_t)code debugMessage:(NSString *)debugMessage __attribute__((swift_name("init(code:debugMessage:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedBillingErrorUnexpectedBillingResponse *)doCopyCode:(int32_t)code debugMessage:(NSString *)debugMessage __attribute__((swift_name("doCopy(code:debugMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *debugMessage __attribute__((swift_name("debugMessage")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingError.UnexpectedException")))
@interface GuruSharedBillingErrorUnexpectedException : GuruSharedBillingError
- (instancetype)initWithException:(GuruSharedKotlinThrowable *)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedBillingErrorUnexpectedException *)doCopyException:(GuruSharedKotlinThrowable *)exception __attribute__((swift_name("doCopy(exception:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GuruSharedKotlinThrowable *exception __attribute__((swift_name("exception")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingError.UnexpectedQueryResults")))
@interface GuruSharedBillingErrorUnexpectedQueryResults : GuruSharedBillingError
- (instancetype)initWithProductId:(NSString *)productId __attribute__((swift_name("init(productId:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedBillingErrorUnexpectedQueryResults *)doCopyProductId:(NSString *)productId __attribute__((swift_name("doCopy(productId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString *productId __attribute__((swift_name("productId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingError.UnknownError")))
@interface GuruSharedBillingErrorUnknownError : GuruSharedBillingError
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedBillingErrorUnknownError *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkuDetails")))
@interface GuruSharedSkuDetails : GuruSharedBase
- (instancetype)initWithProductId:(NSString *)productId amount:(NSString *)amount currency:(NSString *)currency productType:(NSString *)productType formattedPrice:(NSString *)formattedPrice title:(NSString *)title description:(NSString * _Nullable)description __attribute__((swift_name("init(productId:amount:currency:productType:formattedPrice:title:description:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedSkuDetails *)doCopyProductId:(NSString *)productId amount:(NSString *)amount currency:(NSString *)currency productType:(NSString *)productType formattedPrice:(NSString *)formattedPrice title:(NSString *)title description:(NSString * _Nullable)description __attribute__((swift_name("doCopy(productId:amount:currency:productType:formattedPrice:title:description:)")));
- (NSString *)dump __attribute__((swift_name("dump()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *formattedPrice __attribute__((swift_name("formattedPrice")));
@property (readonly) NSString *productId __attribute__((swift_name("productId")));
@property (readonly) NSString *productType __attribute__((swift_name("productType")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkuOrderParams")))
@interface GuruSharedSkuOrderParams : GuruSharedBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *callbackUrl __attribute__((swift_name("callbackUrl")));
@property (readonly) NSString *checksum __attribute__((swift_name("checksum")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) NSString *merchantId __attribute__((swift_name("merchantId")));
@property (readonly) NSString *orderId __attribute__((swift_name("orderId")));
@property (readonly) NSString *productId __attribute__((swift_name("productId")));
@property (readonly) NSString *productType __attribute__((swift_name("productType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkuOrderParams.Builder")))
@interface GuruSharedSkuOrderParamsBuilder : GuruSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (GuruSharedSkuOrderParams *)build __attribute__((swift_name("build()")));
- (GuruSharedSkuOrderParamsBuilder *)setAmountAmount:(NSString *)amount __attribute__((swift_name("setAmount(amount:)")));
- (GuruSharedSkuOrderParamsBuilder *)setCallbackUrlCallbackUrl:(NSString *)callbackUrl __attribute__((swift_name("setCallbackUrl(callbackUrl:)")));
- (GuruSharedSkuOrderParamsBuilder *)setChecksumChecksum:(NSString *)checksum __attribute__((swift_name("setChecksum(checksum:)")));
- (GuruSharedSkuOrderParamsBuilder *)setCurrencyCurrency:(NSString *)currency __attribute__((swift_name("setCurrency(currency:)")));
- (GuruSharedSkuOrderParamsBuilder *)setMerchantIdMerchantId:(NSString *)merchantId __attribute__((swift_name("setMerchantId(merchantId:)")));
- (GuruSharedSkuOrderParamsBuilder *)setOrderIdOrderId:(NSString *)orderId __attribute__((swift_name("setOrderId(orderId:)")));
- (GuruSharedSkuOrderParamsBuilder *)setProductIdProductId:(NSString *)productId __attribute__((swift_name("setProductId(productId:)")));
- (GuruSharedSkuOrderParamsBuilder *)setProductTypeProductType:(NSString *)productType __attribute__((swift_name("setProductType(productType:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkuQueryParams")))
@interface GuruSharedSkuQueryParams : GuruSharedBase
- (NSString *)dump __attribute__((swift_name("dump()")));
@property (readonly) NSString *productId __attribute__((swift_name("productId")));
@property (readonly) NSString *productType __attribute__((swift_name("productType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkuQueryParams.Builder")))
@interface GuruSharedSkuQueryParamsBuilder : GuruSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (GuruSharedSkuQueryParams *)build __attribute__((swift_name("build()")));
- (GuruSharedSkuQueryParamsBuilder *)setProductIdProductId:(NSString *)productId __attribute__((swift_name("setProductId(productId:)")));
- (GuruSharedSkuQueryParamsBuilder *)setProductTypeProductType:(GuruSharedProductType *)productType __attribute__((swift_name("setProductType(productType:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkConfig")))
@interface GuruSharedSdkConfig : GuruSharedBase
- (instancetype)initWithAppid:(NSString *)appid channel:(NSString *)channel serverUrl:(NSString * _Nullable)serverUrl googleAuthCredentials:(GuruSharedGoogleAuthCredentials * _Nullable)googleAuthCredentials facebookAuthCredentials:(GuruSharedFacebookAuthCredentials * _Nullable)facebookAuthCredentials __attribute__((swift_name("init(appid:channel:serverUrl:googleAuthCredentials:facebookAuthCredentials:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedSdkConfig *)doCopyAppid:(NSString *)appid channel:(NSString *)channel serverUrl:(NSString * _Nullable)serverUrl googleAuthCredentials:(GuruSharedGoogleAuthCredentials * _Nullable)googleAuthCredentials facebookAuthCredentials:(GuruSharedFacebookAuthCredentials * _Nullable)facebookAuthCredentials __attribute__((swift_name("doCopy(appid:channel:serverUrl:googleAuthCredentials:facebookAuthCredentials:)")));
- (NSString *)dump __attribute__((swift_name("dump()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appid __attribute__((swift_name("appid")));
@property (readonly) NSString *channel __attribute__((swift_name("channel")));
@property (readonly) GuruSharedFacebookAuthCredentials * _Nullable facebookAuthCredentials __attribute__((swift_name("facebookAuthCredentials")));
@property (readonly) GuruSharedGoogleAuthCredentials * _Nullable googleAuthCredentials __attribute__((swift_name("googleAuthCredentials")));
@property (readonly) NSString * _Nullable serverUrl __attribute__((swift_name("serverUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkConfig.Builder")))
@interface GuruSharedSdkConfigBuilder : GuruSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (GuruSharedSdkConfig *)build __attribute__((swift_name("build()")));
- (GuruSharedSdkConfigBuilder *)setAppidAppid:(NSString *)appid __attribute__((swift_name("setAppid(appid:)")));
- (GuruSharedSdkConfigBuilder *)setChannelChannel:(NSString *)channel __attribute__((swift_name("setChannel(channel:)")));
- (GuruSharedSdkConfigBuilder *)setFacebookAuthCredentialsCredentials:(GuruSharedFacebookAuthCredentials *)credentials __attribute__((swift_name("setFacebookAuthCredentials(credentials:)")));
- (GuruSharedSdkConfigBuilder *)setGoogleAuthCredentialsCredentials:(GuruSharedGoogleAuthCredentials *)credentials __attribute__((swift_name("setGoogleAuthCredentials(credentials:)")));
- (GuruSharedSdkConfigBuilder *)setServerUrlServerUrl:(NSString *)serverUrl __attribute__((swift_name("setServerUrl(serverUrl:)")));
@end

__attribute__((swift_name("CommonCallback")))
@protocol GuruSharedCommonCallback
@required
- (void)onFailedError:(GuruSharedKotlinThrowable *)error __attribute__((swift_name("onFailed(error:)")));
- (void)onSuccessJson:(NSString * _Nullable)json __attribute__((swift_name("onSuccess(json:)")));
@end

__attribute__((swift_name("LoginCallback")))
@protocol GuruSharedLoginCallback
@required
- (void)onErrorError:(GuruSharedKotlinThrowable *)error __attribute__((swift_name("onError(error:)")));
- (void)onSuccessType:(GuruSharedAuthProviderType *)type result:(GuruSharedLoginResp *)result __attribute__((swift_name("onSuccess(type:result:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger")))
@interface GuruSharedLogger : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedLogger *shared __attribute__((swift_name("shared")));
- (void)clearLogCache __attribute__((swift_name("clearLogCache()")));
- (void)debugMessage:(NSString *)message tag:(NSString * _Nullable)tag __attribute__((swift_name("debug(message:tag:)")));
- (void)errorMessage:(NSString *)message tag:(NSString * _Nullable)tag __attribute__((swift_name("error(message:tag:)")));
- (int32_t)getLogColorLogLevel:(GuruSharedLoggerLogLevel *)logLevel __attribute__((swift_name("getLogColor(logLevel:)")));
- (void)infoMessage:(NSString *)message tag:(NSString * _Nullable)tag __attribute__((swift_name("info(message:tag:)")));
- (BOOL)isEnabled __attribute__((swift_name("isEnabled()")));
- (void)setEnabledEnabled:(BOOL)enabled __attribute__((swift_name("setEnabled(enabled:)")));
- (void)warnMessage:(NSString *)message tag:(NSString * _Nullable)tag __attribute__((swift_name("warn(message:tag:)")));
@property (readonly) id<GuruSharedKotlinx_coroutines_coreStateFlow> logCache __attribute__((swift_name("logCache")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger.LogLevel")))
@interface GuruSharedLoggerLogLevel : GuruSharedKotlinEnum<GuruSharedLoggerLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) GuruSharedLoggerLogLevel *all __attribute__((swift_name("all")));
@property (class, readonly) GuruSharedLoggerLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) GuruSharedLoggerLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) GuruSharedLoggerLogLevel *warn __attribute__((swift_name("warn")));
@property (class, readonly) GuruSharedLoggerLogLevel *error __attribute__((swift_name("error")));
+ (GuruSharedKotlinArray<GuruSharedLoggerLogLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GuruSharedLoggerLogLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformLogger")))
@interface GuruSharedPlatformLogger : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platformLogger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedPlatformLogger *shared __attribute__((swift_name("shared")));
- (void)logMessage:(NSString *)message level:(GuruSharedLoggerLogLevel *)level tag:(NSString * _Nullable)tag __attribute__((swift_name("log(message:level:tag:)")));
@end

__attribute__((swift_name("ApiError")))
@interface GuruSharedApiError : GuruSharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiError.ApiException")))
@interface GuruSharedApiErrorApiException : GuruSharedApiError
- (instancetype)initWithMessage:(NSString *)message code:(int32_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedApiErrorApiException *)doCopyMessage:(NSString *)message code:(int32_t)code __attribute__((swift_name("doCopy(message:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiError.NetworkError")))
@interface GuruSharedApiErrorNetworkError : GuruSharedApiError
- (instancetype)initWithMessage:(NSString *)message code:(int32_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedApiErrorNetworkError *)doCopyMessage:(NSString *)message code:(int32_t)code __attribute__((swift_name("doCopy(message:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiError.ParsingError")))
@interface GuruSharedApiErrorParsingError : GuruSharedApiError
- (instancetype)initWithThrowable:(GuruSharedKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedApiErrorParsingError *)doCopyThrowable:(GuruSharedKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) GuruSharedKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiError.UnknownError")))
@interface GuruSharedApiErrorUnknownError : GuruSharedApiError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedApiErrorUnknownError *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppEvent")))
@interface GuruSharedAppEvent : GuruSharedBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value timestamp:(NSString *)timestamp context:(NSString * _Nullable)context params:(GuruSharedMutableDictionary<NSString *, NSString *> * _Nullable)params __attribute__((swift_name("init(name:value:timestamp:context:params:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedAppEventCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedAppEvent *)doCopyName:(NSString *)name value:(NSString *)value timestamp:(NSString *)timestamp context:(NSString * _Nullable)context params:(GuruSharedMutableDictionary<NSString *, NSString *> * _Nullable)params __attribute__((swift_name("doCopy(name:value:timestamp:context:params:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable context __attribute__((swift_name("context")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) GuruSharedMutableDictionary<NSString *, NSString *> * _Nullable params __attribute__((swift_name("params")));
@property (readonly) NSString *timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppEvent.Companion")))
@interface GuruSharedAppEventCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedAppEventCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppEventRequest")))
@interface GuruSharedAppEventRequest : GuruSharedBase
- (instancetype)initWithEvents:(NSArray<GuruSharedAppEvent *> *)events __attribute__((swift_name("init(events:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedAppEventRequestCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedAppEventRequest *)doCopyEvents:(NSArray<GuruSharedAppEvent *> *)events __attribute__((swift_name("doCopy(events:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<GuruSharedAppEvent *> *events __attribute__((swift_name("events")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppEventRequest.Companion")))
@interface GuruSharedAppEventRequestCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedAppEventRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseRequest")))
@interface GuruSharedBaseRequest : GuruSharedBase
- (instancetype)initWithVersion:(NSString *)version appid:(NSString *)appid channel:(NSString *)channel devid:(NSString *)devid idfa:(NSString *)idfa session:(NSString *)session openid:(NSString *)openid timestamp:(NSString *)timestamp data:(NSDictionary<NSString *, GuruSharedKotlinx_serialization_jsonJsonElement *> * _Nullable)data __attribute__((swift_name("init(version:appid:channel:devid:idfa:session:openid:timestamp:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedBaseRequestCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedBaseRequest *)doCopyVersion:(NSString *)version appid:(NSString *)appid channel:(NSString *)channel devid:(NSString *)devid idfa:(NSString *)idfa session:(NSString *)session openid:(NSString *)openid timestamp:(NSString *)timestamp data:(NSDictionary<NSString *, GuruSharedKotlinx_serialization_jsonJsonElement *> * _Nullable)data __attribute__((swift_name("doCopy(version:appid:channel:devid:idfa:session:openid:timestamp:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appid __attribute__((swift_name("appid")));
@property (readonly) NSString *channel __attribute__((swift_name("channel")));
@property (readonly) NSDictionary<NSString *, GuruSharedKotlinx_serialization_jsonJsonElement *> * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString *devid __attribute__((swift_name("devid")));
@property (readonly) NSString *idfa __attribute__((swift_name("idfa")));
@property (readonly) NSString *openid __attribute__((swift_name("openid")));
@property (readonly) NSString *session __attribute__((swift_name("session")));
@property (readonly) NSString *timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseRequest.Companion")))
@interface GuruSharedBaseRequestCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedBaseRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseResp")))
@interface GuruSharedBaseResp : GuruSharedBase
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message data:(GuruSharedKotlinx_serialization_jsonJsonElement *)data __attribute__((swift_name("init(code:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedBaseRespCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedBaseResp *)doCopyCode:(int32_t)code message:(NSString *)message data:(GuruSharedKotlinx_serialization_jsonJsonElement *)data __attribute__((swift_name("doCopy(code:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) GuruSharedKotlinx_serialization_jsonJsonElement *data __attribute__((swift_name("data")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseResp.Companion")))
@interface GuruSharedBaseRespCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedBaseRespCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitRequest")))
@interface GuruSharedInitRequest : GuruSharedBase
- (instancetype)initWithDevice_name:(NSString *)device_name lang:(NSString *)lang sysversion:(NSString *)sysversion features:(NSString *)features gps_lat:(GuruSharedDouble * _Nullable)gps_lat gps_long:(GuruSharedDouble * _Nullable)gps_long refer:(GuruSharedRefer *)refer __attribute__((swift_name("init(device_name:lang:sysversion:features:gps_lat:gps_long:refer:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedInitRequestCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedInitRequest *)doCopyDevice_name:(NSString *)device_name lang:(NSString *)lang sysversion:(NSString *)sysversion features:(NSString *)features gps_lat:(GuruSharedDouble * _Nullable)gps_lat gps_long:(GuruSharedDouble * _Nullable)gps_long refer:(GuruSharedRefer *)refer __attribute__((swift_name("doCopy(device_name:lang:sysversion:features:gps_lat:gps_long:refer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *device_name __attribute__((swift_name("device_name")));
@property (readonly) NSString *features __attribute__((swift_name("features")));
@property (readonly) GuruSharedDouble * _Nullable gps_lat __attribute__((swift_name("gps_lat")));
@property (readonly) GuruSharedDouble * _Nullable gps_long __attribute__((swift_name("gps_long")));
@property (readonly) NSString *lang __attribute__((swift_name("lang")));
@property (readonly) GuruSharedRefer *refer __attribute__((swift_name("refer")));
@property (readonly) NSString *sysversion __attribute__((swift_name("sysversion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitRequest.Companion")))
@interface GuruSharedInitRequestCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedInitRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitResp")))
@interface GuruSharedInitResp : GuruSharedBase
- (instancetype)initWithNewbie:(int32_t)newbie __attribute__((swift_name("init(newbie:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedInitRespCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedInitResp *)doCopyNewbie:(int32_t)newbie __attribute__((swift_name("doCopy(newbie:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t newbie __attribute__((swift_name("newbie")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitResp.Companion")))
@interface GuruSharedInitRespCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedInitRespCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequest")))
@interface GuruSharedLoginRequest : GuruSharedBase
- (instancetype)initWithPf:(NSString *)pf pf_appid:(NSString * _Nullable)pf_appid p_openid:(NSString * _Nullable)p_openid p_token:(NSString * _Nullable)p_token web:(GuruSharedInt * _Nullable)web __attribute__((swift_name("init(pf:pf_appid:p_openid:p_token:web:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedLoginRequestCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedLoginRequest *)doCopyPf:(NSString *)pf pf_appid:(NSString * _Nullable)pf_appid p_openid:(NSString * _Nullable)p_openid p_token:(NSString * _Nullable)p_token web:(GuruSharedInt * _Nullable)web __attribute__((swift_name("doCopy(pf:pf_appid:p_openid:p_token:web:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable p_openid __attribute__((swift_name("p_openid")));
@property (readonly) NSString * _Nullable p_token __attribute__((swift_name("p_token")));
@property (readonly) NSString *pf __attribute__((swift_name("pf")));
@property (readonly) NSString * _Nullable pf_appid __attribute__((swift_name("pf_appid")));
@property (readonly) GuruSharedInt * _Nullable web __attribute__((swift_name("web")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequest.Companion")))
@interface GuruSharedLoginRequestCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedLoginRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResp")))
@interface GuruSharedLoginResp : GuruSharedBase
- (instancetype)initWithOpenid:(NSString *)openid token:(NSString *)token newbie:(int32_t)newbie __attribute__((swift_name("init(openid:token:newbie:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedLoginRespCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedLoginResp *)doCopyOpenid:(NSString *)openid token:(NSString *)token newbie:(int32_t)newbie __attribute__((swift_name("doCopy(openid:token:newbie:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t newbie __attribute__((swift_name("newbie")));
@property (readonly) NSString *openid __attribute__((swift_name("openid")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResp.Companion")))
@interface GuruSharedLoginRespCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedLoginRespCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrderRequest")))
@interface GuruSharedOrderRequest : GuruSharedBase
- (instancetype)initWithOrderId:(NSString *)orderId payMode:(NSString *)payMode merchantId:(NSString *)merchantId amount:(NSString *)amount currency:(NSString *)currency callbackUrl:(NSString *)callbackUrl productId:(NSString *)productId productType:(NSString *)productType checksum:(NSString *)checksum __attribute__((swift_name("init(orderId:payMode:merchantId:amount:currency:callbackUrl:productId:productType:checksum:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedOrderRequestCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedOrderRequest *)doCopyOrderId:(NSString *)orderId payMode:(NSString *)payMode merchantId:(NSString *)merchantId amount:(NSString *)amount currency:(NSString *)currency callbackUrl:(NSString *)callbackUrl productId:(NSString *)productId productType:(NSString *)productType checksum:(NSString *)checksum __attribute__((swift_name("doCopy(orderId:payMode:merchantId:amount:currency:callbackUrl:productId:productType:checksum:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="amount")
*/
@property (readonly) NSString *amount __attribute__((swift_name("amount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="callback_url")
*/
@property (readonly) NSString *callbackUrl __attribute__((swift_name("callbackUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="checksum")
*/
@property (readonly) NSString *checksum __attribute__((swift_name("checksum")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="currency")
*/
@property (readonly) NSString *currency __attribute__((swift_name("currency")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="merchant_id")
*/
@property (readonly) NSString *merchantId __attribute__((swift_name("merchantId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderid")
*/
@property (readonly) NSString *orderId __attribute__((swift_name("orderId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pay_mode")
*/
@property (readonly) NSString *payMode __attribute__((swift_name("payMode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_id")
*/
@property (readonly) NSString *productId __attribute__((swift_name("productId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_type")
*/
@property (readonly) NSString *productType __attribute__((swift_name("productType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrderRequest.Companion")))
@interface GuruSharedOrderRequestCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedOrderRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrderResp")))
@interface GuruSharedOrderResp : GuruSharedBase
- (instancetype)initWithM_orderid:(NSString *)m_orderid __attribute__((swift_name("init(m_orderid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedOrderRespCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedOrderResp *)doCopyM_orderid:(NSString *)m_orderid __attribute__((swift_name("doCopy(m_orderid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *m_orderid __attribute__((swift_name("m_orderid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrderResp.Companion")))
@interface GuruSharedOrderRespCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedOrderRespCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Refer")))
@interface GuruSharedRefer : GuruSharedBase
- (instancetype)initWithGg:(NSString *)gg fb:(NSString *)fb adjust:(NSString *)adjust __attribute__((swift_name("init(gg:fb:adjust:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedReferCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedRefer *)doCopyGg:(NSString *)gg fb:(NSString *)fb adjust:(NSString *)adjust __attribute__((swift_name("doCopy(gg:fb:adjust:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *adjust __attribute__((swift_name("adjust")));
@property (readonly) NSString *fb __attribute__((swift_name("fb")));
@property (readonly) NSString *gg __attribute__((swift_name("gg")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Refer.Companion")))
@interface GuruSharedReferCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedReferCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyReceiptRequest")))
@interface GuruSharedVerifyReceiptRequest : GuruSharedBase
- (instancetype)initWithPay_mode:(NSString *)pay_mode receipt:(NSString *)receipt __attribute__((swift_name("init(pay_mode:receipt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedVerifyReceiptRequestCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedVerifyReceiptRequest *)doCopyPay_mode:(NSString *)pay_mode receipt:(NSString *)receipt __attribute__((swift_name("doCopy(pay_mode:receipt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *pay_mode __attribute__((swift_name("pay_mode")));
@property (readonly) NSString *receipt __attribute__((swift_name("receipt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyReceiptRequest.Companion")))
@interface GuruSharedVerifyReceiptRequestCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedVerifyReceiptRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyReceiptResp")))
@interface GuruSharedVerifyReceiptResp : GuruSharedBase
- (instancetype)initWithOrderid:(NSString *)orderid txnid:(NSString *)txnid amount:(double)amount currency:(NSString *)currency product_id:(NSString *)product_id product_type:(NSString *)product_type status:(int32_t)status checksum:(NSString *)checksum ptoken:(NSString *)ptoken __attribute__((swift_name("init(orderid:txnid:amount:currency:product_id:product_type:status:checksum:ptoken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedVerifyReceiptRespCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedVerifyReceiptResp *)doCopyOrderid:(NSString *)orderid txnid:(NSString *)txnid amount:(double)amount currency:(NSString *)currency product_id:(NSString *)product_id product_type:(NSString *)product_type status:(int32_t)status checksum:(NSString *)checksum ptoken:(NSString *)ptoken __attribute__((swift_name("doCopy(orderid:txnid:amount:currency:product_id:product_type:status:checksum:ptoken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) NSString *checksum __attribute__((swift_name("checksum")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) NSString *orderid __attribute__((swift_name("orderid")));
@property (readonly) NSString *product_id __attribute__((swift_name("product_id")));
@property (readonly) NSString *product_type __attribute__((swift_name("product_type")));
@property (readonly) NSString *ptoken __attribute__((swift_name("ptoken")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) NSString *txnid __attribute__((swift_name("txnid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyReceiptResp.Companion")))
@interface GuruSharedVerifyReceiptRespCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedVerifyReceiptRespCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceFeature")))
@interface GuruSharedDeviceFeature : GuruSharedBase
- (instancetype)initWithContext:(id)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAdvertisingIdWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAdvertisingId(completionHandler:)")));
- (NSString * _Nullable)getAppVersion __attribute__((swift_name("getAppVersion()")));
- (NSString * _Nullable)getDeviceFeatures __attribute__((swift_name("getDeviceFeatures()")));
- (NSString *)getDeviceId __attribute__((swift_name("getDeviceId()")));
- (NSString * _Nullable)getDeviceName __attribute__((swift_name("getDeviceName()")));
- (NSString * _Nullable)getSystemLanguage __attribute__((swift_name("getSystemLanguage()")));
- (NSString * _Nullable)getSystemVersion __attribute__((swift_name("getSystemVersion()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatchersX")))
@interface GuruSharedDispatchersX : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dispatchersX __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedDispatchersX *shared __attribute__((swift_name("shared")));
@property (readonly) GuruSharedKotlinx_coroutines_coreCoroutineDispatcher *Default __attribute__((swift_name("Default")));
@property (readonly) GuruSharedKotlinx_coroutines_coreCoroutineDispatcher *IO __attribute__((swift_name("IO")));
@property (readonly) GuruSharedKotlinx_coroutines_coreCoroutineDispatcher *Main __attribute__((swift_name("Main")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstallReferrer")))
@interface GuruSharedInstallReferrer : GuruSharedBase
- (instancetype)initWithContext:(id)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)getFacebookAppLinkContext:(id)context __attribute__((swift_name("getFacebookAppLink(context:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFacebookDeferredLinkWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFacebookDeferredLink(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getGooglePlayLinkWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getGooglePlayLink(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Resources")))
@interface GuruSharedResources : GuruSharedBase
- (instancetype)initWithContext:(id)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
- (NSString *)getStringStringName:(NSString *)stringName __attribute__((swift_name("getString(stringName:)")));
- (NSArray<NSString *> *)getUrlSchemesByNameName:(NSString *)name __attribute__((swift_name("getUrlSchemesByName(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Storage")))
@interface GuruSharedStorage : GuruSharedBase
- (instancetype)initWithContext:(id)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)getStringKey:(NSString *)key default:(NSString * _Nullable)default_ __attribute__((swift_name("getString(key:default:)")));
- (BOOL)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemCache")))
@interface GuruSharedMemCache : GuruSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getKey:(NSString *)key default:(NSString * _Nullable)default_ completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("get(key:default:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putKey:(NSString *)key value:(NSString *)value completionHandler:(void (^)(GuruSharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("put(key:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeKey:(NSString *)key completionHandler:(void (^)(GuruSharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(key:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StorageKeys")))
@interface GuruSharedStorageKeys : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)storageKeys __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedStorageKeys *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ADVERTISING_ID __attribute__((swift_name("ADVERTISING_ID")));
@property (readonly) NSString *DEVICE_ID __attribute__((swift_name("DEVICE_ID")));
@property (readonly) NSString *FB_LINK __attribute__((swift_name("FB_LINK")));
@property (readonly) NSString *GP_LINK __attribute__((swift_name("GP_LINK")));
@property (readonly) NSString *LAST_LOGIN_PROVIDER __attribute__((swift_name("LAST_LOGIN_PROVIDER")));
@property (readonly) NSString *NAME __attribute__((swift_name("NAME")));
@property (readonly) NSString *OPEN_ID __attribute__((swift_name("OPEN_ID")));
@property (readonly) NSString *TOKEN __attribute__((swift_name("TOKEN")));
@end

__attribute__((swift_name("DarwinAuthProvider")))
@protocol GuruSharedDarwinAuthProvider
@required
- (void)loginOnSuccess:(void (^)(GuruSharedAuthToken *))onSuccess onError:(void (^)(GuruSharedKotlinThrowable *))onError __attribute__((swift_name("login(onSuccess:onError:)")));
- (void)logoutOnSuccess:(void (^)(void))onSuccess onError:(void (^)(GuruSharedKotlinThrowable *))onError __attribute__((swift_name("logout(onSuccess:onError:)")));
@property (readonly) GuruSharedAuthProviderType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("DarwinAuthProviderFactory")))
@protocol GuruSharedDarwinAuthProviderFactory
@required
- (id<GuruSharedDarwinAuthProvider> _Nullable)createAuthProviderType:(GuruSharedAuthProviderType *)authProviderType config:(GuruSharedSdkConfig *)config __attribute__((swift_name("create(authProviderType:config:)")));
@end

__attribute__((swift_name("DarwinBillingProvider")))
@protocol GuruSharedDarwinBillingProvider
@required
- (void)consumePurchaseId:(NSString *)id onSuccess:(void (^)(void))onSuccess onError:(void (^)(GuruSharedKotlinThrowable *))onError __attribute__((swift_name("consumePurchase(id:onSuccess:onError:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)purchaseSkuOrderParams:(GuruSharedSkuOrderParams *)params developerPayload:(NSString *)developerPayload onSuccess:(void (^)(void))onSuccess onError:(void (^)(GuruSharedKotlinThrowable *))onError __attribute__((swift_name("purchaseSkuOrder(params:developerPayload:onSuccess:onError:)")));
- (void)queryAndHandleUnconsumedPurchasesOnSuccess:(void (^)(void))onSuccess onError:(void (^)(GuruSharedKotlinThrowable *))onError __attribute__((swift_name("queryAndHandleUnconsumedPurchases(onSuccess:onError:)")));
- (void)querySkuDetailsParams:(NSArray<GuruSharedSkuQueryParams *> *)params onSuccess:(void (^)(NSArray<GuruSharedSkuDetails *> *))onSuccess onError:(void (^)(GuruSharedKotlinThrowable *))onError __attribute__((swift_name("querySkuDetails(params:onSuccess:onError:)")));
@property (readonly) id<GuruSharedIBillingProviderHandler> handler __attribute__((swift_name("handler")));
@property (readonly) GuruSharedBillingProviderType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("DarwinBillingProviderFactory")))
@protocol GuruSharedDarwinBillingProviderFactory
@required
- (id<GuruSharedDarwinBillingProvider> _Nullable)createBillingProviderType:(GuruSharedBillingProviderType *)billingProviderType handler:(id<GuruSharedIBillingProviderHandler>)handler config:(GuruSharedSdkConfig *)config __attribute__((swift_name("create(billingProviderType:handler:config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DarwinBridge")))
@interface GuruSharedDarwinBridge : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)darwinBridge __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedDarwinBridge *shared __attribute__((swift_name("shared")));
- (NSString *)dumpConfig __attribute__((swift_name("dumpConfig()")));
- (NSString *)getAdvertisingId __attribute__((swift_name("getAdvertisingId()")));
- (NSString *)getAppVersion __attribute__((swift_name("getAppVersion()")));
- (NSString *)getDeviceId __attribute__((swift_name("getDeviceId()")));
- (void)initializeCallback:(id<GuruSharedCommonCallback> _Nullable)callback __attribute__((swift_name("initialize(callback:)")));
- (void)logEventName:(NSString *)name value:(NSString * _Nullable)value params:(GuruSharedMutableDictionary<NSString *, NSString *> * _Nullable)params __attribute__((swift_name("logEvent(name:value:params:)")));
- (void)loginAuthProviderType:(GuruSharedAuthProviderType *)authProviderType onSuccess:(void (^)(GuruSharedAuthProviderType *, GuruSharedLoginResp *))onSuccess onError:(void (^)(GuruSharedKotlinThrowable *))onError __attribute__((swift_name("login(authProviderType:onSuccess:onError:)")));
- (void)logout __attribute__((swift_name("logout()")));
- (void)onAppBackgrounded __attribute__((swift_name("onAppBackgrounded()")));
- (void)onAppForegrounded __attribute__((swift_name("onAppForegrounded()")));
- (void)purchaseParams:(GuruSharedSkuOrderParams *)params onSuccess:(void (^)(NSString *))onSuccess onError:(void (^)(GuruSharedKotlinThrowable *))onError onUserCancelled:(void (^)(void))onUserCancelled __attribute__((swift_name("purchase(params:onSuccess:onError:onUserCancelled:)")));
- (void)queryAndHandleUnconsumedPurchases __attribute__((swift_name("queryAndHandleUnconsumedPurchases()")));
- (void)querySkuDetailsParams:(NSArray<GuruSharedSkuQueryParams *> *)params onSuccess:(void (^)(NSArray<GuruSharedSkuDetails *> *))onSuccess onError:(void (^)(GuruSharedKotlinThrowable *))onError __attribute__((swift_name("querySkuDetails(params:onSuccess:onError:)")));
@property id<GuruSharedDarwinAuthProviderFactory> _Nullable authProviderFactory __attribute__((swift_name("authProviderFactory")));
@property id<GuruSharedDarwinBillingProviderFactory> _Nullable billingProviderFactory __attribute__((swift_name("billingProviderFactory")));
@property id<GuruSharedDarwinDeviceFeature> _Nullable deviceFeature __attribute__((swift_name("deviceFeature")));
@end

__attribute__((swift_name("DarwinDeviceFeature")))
@protocol GuruSharedDarwinDeviceFeature
@required
- (NSString * _Nullable)getDeviceFeatures __attribute__((swift_name("getDeviceFeatures()")));
- (NSString *)getDeviceId __attribute__((swift_name("getDeviceId()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface GuruSharedKotlinx_serialization_jsonJsonElement : GuruSharedBase
@property (class, readonly, getter=companion) GuruSharedKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

@interface GuruSharedKotlinx_serialization_jsonJsonElement (Extensions)
- (id _Nullable)toDataClass __attribute__((swift_name("toDataClass()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtensionKt")))
@interface GuruSharedExtensionKt : GuruSharedBase
+ (NSDictionary<NSString *, GuruSharedKotlinx_serialization_jsonJsonElement *> *)toJsonObject:(id _Nullable)receiver __attribute__((swift_name("toJsonObject(_:)")));
+ (NSString *)toJsonString:(id _Nullable)receiver __attribute__((swift_name("toJsonString(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModuleKt")))
@interface GuruSharedModuleKt : GuruSharedBase
+ (GuruSharedKoin_coreModule *)sharedModuleContext:(id)context config:(GuruSharedSdkConfig *)config __attribute__((swift_name("sharedModule(context:config:)")));
@end

__attribute__((swift_name("KotlinException")))
@interface GuruSharedKotlinException : GuruSharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface GuruSharedKotlinRuntimeException : GuruSharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface GuruSharedKotlinIllegalStateException : GuruSharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface GuruSharedKotlinCancellationException : GuruSharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GuruSharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface GuruSharedKotlinEnumCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface GuruSharedKotlinArray<T> : GuruSharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(GuruSharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<GuruSharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol GuruSharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<GuruSharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol GuruSharedKotlinx_coroutines_coreSharedFlow <GuruSharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol GuruSharedKotlinx_coroutines_coreStateFlow <GuruSharedKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly, getter=value_) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol GuruSharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<GuruSharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<GuruSharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol GuruSharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<GuruSharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<GuruSharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol GuruSharedKotlinx_serialization_coreKSerializer <GuruSharedKotlinx_serialization_coreSerializationStrategy, GuruSharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol GuruSharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<GuruSharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<GuruSharedKotlinCoroutineContextElement> _Nullable)getKey:(id<GuruSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<GuruSharedKotlinCoroutineContext>)minusKeyKey:(id<GuruSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<GuruSharedKotlinCoroutineContext>)plusContext:(id<GuruSharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol GuruSharedKotlinCoroutineContextElement <GuruSharedKotlinCoroutineContext>
@required
@property (readonly) id<GuruSharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface GuruSharedKotlinAbstractCoroutineContextElement : GuruSharedBase <GuruSharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<GuruSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<GuruSharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol GuruSharedKotlinContinuationInterceptor <GuruSharedKotlinCoroutineContextElement>
@required
- (id<GuruSharedKotlinContinuation>)interceptContinuationContinuation:(id<GuruSharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<GuruSharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface GuruSharedKotlinx_coroutines_coreCoroutineDispatcher : GuruSharedKotlinAbstractCoroutineContextElement <GuruSharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<GuruSharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GuruSharedKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<GuruSharedKotlinCoroutineContext>)context block:(id<GuruSharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<GuruSharedKotlinCoroutineContext>)context block:(id<GuruSharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<GuruSharedKotlinContinuation>)interceptContinuationContinuation:(id<GuruSharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<GuruSharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (GuruSharedKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (GuruSharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(GuruSharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<GuruSharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface GuruSharedKotlinx_serialization_jsonJsonElementCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface GuruSharedKoin_coreModule : GuruSharedBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (GuruSharedKoin_coreKoinDefinition<id> *)factoryQualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(GuruSharedKoin_coreScope *, GuruSharedKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(GuruSharedKotlinArray<GuruSharedKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(NSArray<GuruSharedKoin_coreModule *> *)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(GuruSharedKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(GuruSharedKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<GuruSharedKoin_coreModule *> *)plusModules:(NSArray<GuruSharedKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<GuruSharedKoin_coreModule *> *)plusModule:(GuruSharedKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(GuruSharedKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(GuruSharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<GuruSharedKoin_coreQualifier>)qualifier scopeSet:(void (^)(GuruSharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (GuruSharedKoin_coreKoinDefinition<id> *)singleQualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(GuruSharedKoin_coreScope *, GuruSharedKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) GuruSharedMutableSet<GuruSharedKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<GuruSharedKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) GuruSharedMutableDictionary<NSString *, GuruSharedKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol GuruSharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol GuruSharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol GuruSharedKotlinx_serialization_coreEncoder
@required
- (id<GuruSharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<GuruSharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<GuruSharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<GuruSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<GuruSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) GuruSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol GuruSharedKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<GuruSharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<GuruSharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) GuruSharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol GuruSharedKotlinx_serialization_coreDecoder
@required
- (id<GuruSharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<GuruSharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (GuruSharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<GuruSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<GuruSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) GuruSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol GuruSharedKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol GuruSharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<GuruSharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface GuruSharedKotlinAbstractCoroutineContextKey<B, E> : GuruSharedBase <GuruSharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<GuruSharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<GuruSharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface GuruSharedKotlinx_coroutines_coreCoroutineDispatcherKey : GuruSharedKotlinAbstractCoroutineContextKey<id<GuruSharedKotlinContinuationInterceptor>, GuruSharedKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<GuruSharedKotlinCoroutineContextKey>)baseKey safeCast:(id<GuruSharedKotlinCoroutineContextElement> _Nullable (^)(id<GuruSharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol GuruSharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface GuruSharedKoin_coreKoinDefinition<R> : GuruSharedBase
- (instancetype)initWithModule:(GuruSharedKoin_coreModule *)module factory:(GuruSharedKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedKoin_coreKoinDefinition<R> *)doCopyModule:(GuruSharedKoin_coreModule *)module factory:(GuruSharedKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GuruSharedKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) GuruSharedKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol GuruSharedKoin_coreQualifier
@required
@property (readonly, getter=value_) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface GuruSharedKoin_coreLockable : GuruSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface GuruSharedKoin_coreScope : GuruSharedKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<GuruSharedKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(GuruSharedKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (GuruSharedKoin_coreScope *)doCopyScopeQualifier:(id<GuruSharedKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(GuruSharedKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<GuruSharedKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id)getQualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier parameters:(GuruSharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<GuruSharedKotlinKClass>)clazz qualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier parameters:(GuruSharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<GuruSharedKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (GuruSharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier parameters:(GuruSharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<GuruSharedKotlinKClass>)clazz qualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier parameters:(GuruSharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (GuruSharedKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()"))) __attribute__((deprecated("No need to use getSource(). You can an use get() directly.")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<GuruSharedKotlinLazy>)injectQualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier mode:(GuruSharedKotlinLazyThreadSafetyMode *)mode parameters:(GuruSharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<GuruSharedKotlinLazy>)injectOrNullQualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier mode:(GuruSharedKotlinLazyThreadSafetyMode *)mode parameters:(GuruSharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(GuruSharedKotlinArray<GuruSharedKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<GuruSharedKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(GuruSharedKotlinArray<GuruSharedKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<GuruSharedKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) GuruSharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<GuruSharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface GuruSharedKoin_coreParametersHolder : GuruSharedBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (GuruSharedKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<GuruSharedKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<GuruSharedKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (GuruSharedKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface GuruSharedKoin_coreInstanceFactory<T> : GuruSharedKoin_coreLockable
- (instancetype)initWithBeanDefinition:(GuruSharedKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) GuruSharedKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(GuruSharedKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(GuruSharedKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (T _Nullable)getContext:(GuruSharedKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isCreatedContext:(GuruSharedKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) GuruSharedKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface GuruSharedKoin_coreSingleInstanceFactory<T> : GuruSharedKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(GuruSharedKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(GuruSharedKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(GuruSharedKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(GuruSharedKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(GuruSharedKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface GuruSharedKoin_coreScopeDSL : GuruSharedBase
- (instancetype)initWithScopeQualifier:(id<GuruSharedKoin_coreQualifier>)scopeQualifier module:(GuruSharedKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedKoin_coreKoinDefinition<id> *)factoryQualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(GuruSharedKoin_coreScope *, GuruSharedKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (GuruSharedKoin_coreKoinDefinition<id> *)scopedQualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(GuruSharedKoin_coreScope *, GuruSharedKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@property (readonly) GuruSharedKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<GuruSharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol GuruSharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<GuruSharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<GuruSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<GuruSharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) GuruSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface GuruSharedKotlinx_serialization_coreSerializersModule : GuruSharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<GuruSharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GuruSharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<GuruSharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<GuruSharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GuruSharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<GuruSharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GuruSharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<GuruSharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol GuruSharedKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface GuruSharedKotlinx_serialization_coreSerialKind : GuruSharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol GuruSharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<GuruSharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<GuruSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<GuruSharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<GuruSharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) GuruSharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface GuruSharedKotlinNothing : GuruSharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface GuruSharedKoin_coreKoin : GuruSharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (GuruSharedKoin_coreScope *)createScopeT:(id<GuruSharedKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (GuruSharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (GuruSharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (GuruSharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<GuruSharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<GuruSharedKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier parameters:(GuruSharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<GuruSharedKotlinKClass>)clazz qualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier parameters:(GuruSharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (GuruSharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (GuruSharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<GuruSharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier parameters:(GuruSharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<GuruSharedKotlinKClass>)clazz qualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier parameters:(GuruSharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (GuruSharedKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (GuruSharedKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<GuruSharedKotlinLazy>)injectQualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier mode:(GuruSharedKotlinLazyThreadSafetyMode *)mode parameters:(GuruSharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<GuruSharedKotlinLazy>)injectOrNullQualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier mode:(GuruSharedKotlinLazyThreadSafetyMode *)mode parameters:(GuruSharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<GuruSharedKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(GuruSharedKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<GuruSharedKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) GuruSharedKoin_coreExtensionManager *extensionManager __attribute__((swift_name("extensionManager")));
@property (readonly) GuruSharedKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) GuruSharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) GuruSharedKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) GuruSharedKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol GuruSharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol GuruSharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol GuruSharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol GuruSharedKotlinKClass <GuruSharedKotlinKDeclarationContainer, GuruSharedKotlinKAnnotatedElement, GuruSharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol GuruSharedKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly, getter=value_) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface GuruSharedKotlinLazyThreadSafetyMode : GuruSharedKotlinEnum<GuruSharedKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) GuruSharedKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) GuruSharedKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) GuruSharedKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (GuruSharedKotlinArray<GuruSharedKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GuruSharedKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol GuruSharedKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(GuruSharedKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface GuruSharedKoin_coreLogger : GuruSharedBase
- (instancetype)initWithLevel:(GuruSharedKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(GuruSharedKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(GuruSharedKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(GuruSharedKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(GuruSharedKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@property GuruSharedKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface GuruSharedKoin_coreParametersHolderCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface GuruSharedKoin_coreBeanDefinition<T> : GuruSharedBase
- (instancetype)initWithScopeQualifier:(id<GuruSharedKoin_coreQualifier>)scopeQualifier primaryType:(id<GuruSharedKotlinKClass>)primaryType qualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(GuruSharedKoin_coreScope *, GuruSharedKoin_coreParametersHolder *))definition kind:(GuruSharedKoin_coreKind *)kind secondaryTypes:(NSArray<id<GuruSharedKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<GuruSharedKoin_coreQualifier>)scopeQualifier primaryType:(id<GuruSharedKotlinKClass>)primaryType qualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(GuruSharedKoin_coreScope *, GuruSharedKoin_coreParametersHolder *))definition kind:(GuruSharedKoin_coreKind *)kind secondaryTypes:(NSArray<id<GuruSharedKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<GuruSharedKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<GuruSharedKotlinKClass>)clazz qualifier:(id<GuruSharedKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<GuruSharedKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property GuruSharedKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(GuruSharedKoin_coreScope *, GuruSharedKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) GuruSharedKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<GuruSharedKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<GuruSharedKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<GuruSharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<GuruSharedKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface GuruSharedKoin_coreInstanceFactoryCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface GuruSharedKoin_coreInstanceContext : GuruSharedBase
- (instancetype)initWithLogger:(GuruSharedKoin_coreLogger *)logger scope:(GuruSharedKoin_coreScope *)scope parameters:(GuruSharedKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(logger:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) GuruSharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) GuruSharedKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) GuruSharedKoin_coreScope *scope __attribute__((swift_name("scope")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol GuruSharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<GuruSharedKotlinKClass>)kClass provider:(id<GuruSharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<GuruSharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<GuruSharedKotlinKClass>)kClass serializer:(id<GuruSharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<GuruSharedKotlinKClass>)baseClass actualClass:(id<GuruSharedKotlinKClass>)actualClass actualSerializer:(id<GuruSharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<GuruSharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<GuruSharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<GuruSharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<GuruSharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<GuruSharedKotlinKClass>)baseClass defaultSerializerProvider:(id<GuruSharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol GuruSharedKoin_coreKoinComponent
@required
- (GuruSharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol GuruSharedKoin_coreKoinScopeComponent <GuruSharedKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()"))) __attribute__((deprecated("not used internaly anymore")));
@property (readonly) GuruSharedKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreExtensionManager")))
@interface GuruSharedKoin_coreExtensionManager : GuruSharedBase
- (instancetype)initWith_koin:(GuruSharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<GuruSharedKoin_coreKoinExtension>)getExtensionId:(NSString *)id __attribute__((swift_name("getExtension(id:)")));
- (id<GuruSharedKoin_coreKoinExtension> _Nullable)getExtensionOrNullId:(NSString *)id __attribute__((swift_name("getExtensionOrNull(id:)")));
- (void)registerExtensionId:(NSString *)id extension:(id<GuruSharedKoin_coreKoinExtension>)extension __attribute__((swift_name("registerExtension(id:extension:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface GuruSharedKoin_coreInstanceRegistry : GuruSharedBase
- (instancetype)initWith_koin:(GuruSharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(GuruSharedKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) GuruSharedKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, GuruSharedKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface GuruSharedKoin_corePropertyRegistry : GuruSharedBase
- (instancetype)initWith_koin:(GuruSharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface GuruSharedKoin_coreScopeRegistry : GuruSharedBase
- (instancetype)initWith_koin:(GuruSharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GuruSharedKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<GuruSharedKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) GuruSharedKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<GuruSharedKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface GuruSharedKoin_coreLevel : GuruSharedKotlinEnum<GuruSharedKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) GuruSharedKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) GuruSharedKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) GuruSharedKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) GuruSharedKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) GuruSharedKoin_coreLevel *none __attribute__((swift_name("none")));
+ (GuruSharedKotlinArray<GuruSharedKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface GuruSharedKoin_coreKind : GuruSharedKotlinEnum<GuruSharedKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) GuruSharedKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) GuruSharedKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) GuruSharedKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (GuruSharedKotlinArray<GuruSharedKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface GuruSharedKoin_coreCallbacks<T> : GuruSharedBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (GuruSharedKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

__attribute__((swift_name("Koin_coreKoinExtension")))
@protocol GuruSharedKoin_coreKoinExtension
@required
- (void)onClose __attribute__((swift_name("onClose()")));
@property GuruSharedKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface GuruSharedKoin_coreScopeRegistryCompanion : GuruSharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GuruSharedKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
