//
//  TRBuoyView.h
//  LoiBuoyView
//
//  Created by Loi Wu on 12/22/15.
//  Copyright © 2015 Loi Wu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TRBuoyViewItem.h"

typedef NS_ENUM(NSInteger, TRBuoyViewStyle) {
    TRBuoyViewStylePlain,               // regular buoy view
};

#pragma mark 浮标点击类型点击类型
typedef NS_ENUM(NSInteger, TRBuoySelectedMode) {
    TRBuoySelectedModeControllerCenter, //浮标控制中心
    TRBuoySelectedModeVoucher,          //代金券
    TRBuoySelectedModeHome,             //首页
    TRBuoySelectedModeMessage,          //消息
    TRBuoySelectedModeGift,             //礼包
    TRBuoySelectedModeRecharge,         //充值
    TRBuoySelectedModeNone,             //没有点击
};

//浮标展开方向
typedef NS_ENUM(NSInteger, PPBuoyViewStretchDirection) {
    PPBuoyViewStretchDirectionUp = 0,   //向上
    PPBuoyViewStretchDirectionDown = 1, //向下
    PPBuoyViewStretchDirectionLeft = 2, //向左
    PPBuoyViewStretchDirectionRight = 3,//向右
};

@class TRBuoyView;
@protocol TRBuoyViewDelegate <NSObject>

// Selection
// Called after the user changes the selection.
- (void)buoyView:(TRBuoyView *)buoyView didSelectMenuAtIndex:(NSInteger)index;
- (void)buoyView:(TRBuoyView *)buoyView didDeselectRowAtIndexPath:(NSInteger)index;

@end

@interface TRBuoyView : UIView

@end

@protocol TRBuoyViewDataSource <NSObject>

@required

- (TRBuoyViewItem *)buoyView:(TRBuoyView *)buoyView itemForMenuAtIndex:(NSInteger)index;

@optional

- (NSInteger)numberOfMenusInBuoyView:(UITableView *)buoyView;              // Default is 1 if not implemented


@end
