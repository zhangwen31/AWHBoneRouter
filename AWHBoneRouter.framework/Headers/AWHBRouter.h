//
//  AWHBRouter.h
//  AWHBoneRouter
//
//  Created by GeDaTing on 2022/1/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBRouter : NSObject

/**
 最终路由地址
 */
@property (nonatomic, strong, readonly) NSURL *url;

/**
 最终路由参数
 */
@property (nonatomic, strong, readonly) NSDictionary *params;

+ (instancetype)routerWithURL:(NSURL *)url params:(NSDictionary *)params;

- (instancetype)initWithURL:(NSURL *)url params:(NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END
