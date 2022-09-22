//
//  AWHBRouterService.h
//  AWHBoneRouter
//
//  Created by GeDaTing on 2022/1/22.
//

#import <Foundation/Foundation.h>
#import <AWHBoneRouter/AWHBActionRequestProtocol.h>
#import <AWHBoneRouter/AWHBRouterRedirectProtocol.h>
#import <AWHBoneRouter/AWHBRouterProtocol.h>
#import <AWHBoneRouter/UIViewController+AWHBRouter.h>

/**
 * 路由跳转回调
 * @param success 跳转是否成功
 * @param error 错误信息
 * @param params 扩展参数
 */
typedef void(^AWHBRouterOpenURLBlock) (BOOL success, NSError * error, NSDictionary * params);

NS_ASSUME_NONNULL_BEGIN

@interface AWHBRouterService : NSObject

void AWHBOpenURLWithParams(NSString *url, NSDictionary *params);

void AWHBOpenURL(NSString *url);

void AWHBNavigationOpenURLWithParams(NSString *url, NSDictionary *params, UINavigationController *navigationController);

void AWHBNavigationOpenURL(NSString *url, UINavigationController *navigationController);


/**
 * 注册业务路由类
 * @param url  业务路由地址 唯一标识
 */
+ (BOOL)registerURL:(NSURL *)url withHandler:(Class<AWHBRouterProtocol>)handlerClass;

/**
 * 注册容器路由处理类
 * @param handlerClass  路由处理类
 */
+ (BOOL)registerURLHandler:(Class<AWHBActionRequestProtocol>)handlerClass;

/**
 * 注册重定向容器路由处理实例
 * @param handler  重定向路由处理实例
 */
+ (BOOL)registerRedirectURLHandler:(id<AWHBRouterRedirectProtocol>)handler;

/**
 * 能否打开对应URL
 * @param url  对应URL
 * @param params  参数
 */
+ (BOOL)canOpenURL:(NSURL *)url params:(NSDictionary *)params;

/**
 * 能否打开对应URL字符串
 * @param urlStr  对应URL字符串
 * @param params  参数
 */
+ (BOOL)canOpenStringURL:(NSString *)urlStr params:(NSDictionary *)params;

/**
 * 打开对应URL
 * @param url  对应URL
 * @param params  参数
 */
+ (void)openURL:(NSURL *)url params:(NSDictionary *)params;

/**
 * 打开对应URL
 * @param url  对应URL
 * @param params  参数
 * @param callBack 路由跳转回调
 */
+ (void)openURL:(NSURL *)url params:(NSDictionary *)params callBack:(AWHBRouterOpenURLBlock)callBack;

/**
 * 打开对应URL字符串
 * @param urlStr  对应URL字符串
 * @param params  参数
 */
+ (void)openStringURL:(NSString *)urlStr params:(NSDictionary *)params;

/**
 * 打开对应URL字符串
 * @param urlStr  对应URL字符串
 * @param params  参数
 * @param callBack 路由跳转回调
 */
+ (void)openStringURL:(NSString *)urlStr params:(NSDictionary *)params callBack:(AWHBRouterOpenURLBlock)callBack;

+ (UIViewController<AWHBRouterProtocol> *)getViewControllerWithOpenURL:(NSURL *)url;

+ (UIViewController<AWHBRouterProtocol> *)getViewControllerWithOpenURL:(NSURL *)url params:(NSDictionary *)params;

+ (UIViewController<AWHBRouterProtocol> *)getViewControllerWithOpenStringURL:(NSString *)urlStr;

+ (UIViewController<AWHBRouterProtocol> *)getViewControllerWithOpenStringURL:(NSString *)urlStr params:(NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END
