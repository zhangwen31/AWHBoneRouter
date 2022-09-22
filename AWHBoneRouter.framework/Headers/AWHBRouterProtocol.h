//
//  AWHBRouterProtocol.h
//  AWHBoneRouter
//
//  Created by GeDaTing on 2022/1/22.
//

#import <UIKit/UIKit.h>

@protocol AWHBRouterProtocol <NSObject>

@optional
+ (UIViewController<AWHBRouterProtocol> *)controllerWithURL:(NSURL *)url params:(NSDictionary *)params;

@end
