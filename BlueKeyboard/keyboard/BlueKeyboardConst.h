//
//  BlueKeyboardConst.h
//  BlueKeyboard
//
//  Created by biubiublue on 2018/4/21.
//  Copyright © 2018年biubiublue. All rights reserved.
//

#ifndef BlueKeyboardConst_h
#define BlueKeyboardConst_h

#import "SHColor.h"

#define kBLUE_SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define kBLUEL_SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)

#define IS_BLUE_IPHONE_X    ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? \
CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define kDSLSaveTwoPoints(k)  (roundf((k*100.0f))/100.0f)

#define kAllSlices 100.0f

#define kRatio                kDSLSaveTwoPoints(kBLUE_SCREEN_WIDTH/kAllSlices)
#define kValue(k)             (kRatio*(k))
#define kReuseIdentifier_BlueKeyboardCell @"BlueKeyboardCell"

#define kDSLCarKeyBoardControllorProvinceArr @[@10,@10,@10,@7]
#define kDSLCarKeyBoardControllorABC123Arr   @[@10,@10,@10,@9]


//省市简称
#define kProvinceRow1 @[@"京",@"津",@"渝",@"沪",@"冀",@"晋",@"辽",@"吉",@"黑",@"苏"]
#define kProvinceRow2 @[@"浙",@"皖",@"闽",@"赣",@"鲁",@"豫",@"鄂",@"湘",@"粤",@"琼"]
#define kProvinceRow3 @[@"川",@"贵",@"云",@"陕",@"甘",@"青",@"蒙",@"桂",@"宁",@"新"]
#define kProvinceRow4 @[@"藏",@"使",@"领",@"警",@"学",@"港",@"澳"]
#define kProvinceAll @[kProvinceRow1,kProvinceRow2,kProvinceRow3,kProvinceRow4]

typedef NS_ENUM(NSInteger, BlueKeyboardType)
{
    BlueKeyboardType_AccountNum = 0,//大写0-9 壹贰叁
    BlueKeyboardType_tiangandizhi = 1,//天干地支
    BlueKeyboardType_Province = 3,
    BlueKeyboardType_ABC123 = 4
    
};

typedef NS_ENUM(NSInteger, BlueKeyButtonType)
{
    BlueKeyButtonType_Normal = 0,//一般按钮
    BlueKeyButtonType_Change = 1,//切换按钮
    BlueKeyButtonType_Delete = 2,//删除按钮
    BlueKeyButtonType_Cap    = 3,//大小写切换按钮
    BlueKeyButtonType_Empty  = 4//占位按钮 透明
};

typedef void(^BlueKeyboardCallBackBlcok) (NSString *text,BlueKeyButtonType btnType);

#endif /* BlueKeyboardConst_h */
