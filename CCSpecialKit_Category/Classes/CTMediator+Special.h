//
//  CTMediator+Special.h
//  CCSpecialKit_Category
//
//  Created by 陈成 on 2018/4/19.
//

#import <CTMediator/CTMediator.h>
#import <CCAPIsKit/APIRequest.h>
#import <CCAPIsKit/FFReformProtocol.h>
@interface CTMediator (Special)
- (UIViewController*)specialDetailController;

- (NSDictionary*)specialReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)specialReformer;

- (APIRequest*)specialAPIRequest;

@end
