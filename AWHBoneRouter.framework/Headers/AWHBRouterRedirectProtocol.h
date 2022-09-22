//
//  AWHBRouterRedirectProtocol.h
//  AWHBoneRouter
//
//  Created by GeDaTing on 2022/1/22.
//

#import <Foundation/Foundation.h>

typedef void(^AWHBRedirectBlock) (NSError *error, NSURL *url, NSDictionary *params);

@protocol AWHBRouterRedirectProtocol <NSObject>

/**
 * 判断是否需要路由重定向
 * @param url 需要判断的URL
 * @param params 需要判断的URL对应查询参数
 * @return 需要路由重定向返回YES， 否则返回NO。
 */
- (BOOL)needRedirectWithURL:(NSURL *)url params:(NSDictionary *)params;

/**
 * 处理指定的URL对应的路由
 * @param url 需要处理的URL
 * @param params 需要处理的URL对应查询参数
 */
- (BOOL)handleURL:(NSURL *)url params:(NSDictionary *)params callBack:(AWHBRedirectBlock)callBack;

@end
