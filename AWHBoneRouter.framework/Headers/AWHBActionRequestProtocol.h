//
//  AWHBActionRequestProtocol.h
//  AWHBoneRouter
//
//  Created by GeDaTing on 2022/1/22.
//

#import <UIKit/UIKit.h>


@protocol AWHBActionRequestProtocol <NSObject>

/**
 * 能否处理指定的URL和对应的参数
 * @param url 需要处理的URL
 * @param params 需要处理的URL对应查询参数
 * @return 能够处理返回YES， 否则返回NO。
 */
+ (BOOL)canHandle:(NSURL *)url params:(NSDictionary *)params;

/**
 * 返回指定的URL和对应的参数视图控制器实例
 * @param url 需要处理的URL
 * @param params 需要处理的URL对应查询参数
 * @return 返回对应的视图控制器实例，不应该返回nil
 */
+ (UIViewController *)controllerWithURL:(NSURL *)url params:(NSDictionary *)params;

@end
