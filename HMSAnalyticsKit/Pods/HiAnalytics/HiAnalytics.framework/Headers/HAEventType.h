//
//  HAEventType.h
//  HiAnalytics
//
//  Created by cbg_bigdata on 2020/2/19.
//  Copyright © 2020 cbg_bigdata. All rights reserved.
//

#import <Foundation/Foundation.h>

/// 添加支付信息
static NSString *const kHAEventCreatePaymentInfo = @"$CreatePaymentInfo";
/// 加入购物车
static NSString *const kHAEventAddProduct2Cart = @"$AddProduct2Cart";
/// 加入收藏夹
static NSString *const kHAEventAddProduct2WishList = @"$AddProduct2WishList";
/// 打开应用
static NSString *const kHAEventStartApp = @"$StartApp";
/// 开始结算
static NSString *const kHAEventStartCheckout = @"$StartCheckout";
/// 参与营销
static NSString *const kHAEventViewCampaign = @"$ViewCampaign";
/// 结算过程
static NSString *const kHAEventViewCheckoutStep = @"$ViewCheckoutStep";
/// 获取虚拟币
static NSString *const kHAEventWinVirtualCoin = @"$WinVirtualCoin";
/// 购买商品
static NSString *const kHAEventCompletePurchase = @"$CompletePurchase";
/// 获取线索
static NSString *const kHAEventObtainLeads = @"$ObtainLeads";
/// 加入群组
static NSString *const kHAEventJoinUserGroup = @"$JoinUserGroup";
/// 开启关卡
static NSString *const kHAEventCompleteLevel = @"$CompleteLevel";
/// 完成关卡
static NSString *const kHAEventStartLevel = @"$StartLevel";
/// 等级提升
static NSString *const kHAEventUpgradeLevel = @"$UpgradeLevel";
/// 登录
static NSString *const kHAEventSignIn = @"$SignIn";
/// 提交分数
static NSString *const kHAEventSubmitScore = @"$SubmitScore";
/// 展示订单
static NSString *const kHAEventCreateOrder = @"$CreateOrder";
/// 退款
static NSString *const kHAEventRefundOrder = @"$RefundOrder";
/// 移除购物车中商品
static NSString *const kHAEventDelProductFromCart = @"$DelProductFromCart";
/// 搜索
static NSString *const kHAEventSearch = @"$Search";
/// 点击内容
static NSString *const kHAEventViewContent = @"$ViewContent";
/// 填写结算选项
static NSString *const kHAEventUpdateCheckoutOption = @"$UpdateCheckoutOption";
/// 分享
static NSString *const kHAEventShareContent = @"$ShareContent";
/// 注册
static NSString *const kHAEventRegisterAccount = @"$RegisterAccount";
/// 消费虚拟币
static NSString *const kHAEventConsumeVirtualCoin = @"$ConsumeVirtualCoin";
/// 开启教程
static NSString *const kHAEventStartTutorial = @"$StartTutorial";
/// 完成教程
static NSString *const kHAEventCompleteTutorial = @"$CompleteTutorial";
/// 解锁成就
static NSString *const kHAEventObtainAchivement = @"$ObtainAchivement";
/// 查看商品
static NSString *const kHAEventViewProduct = @"$ViewProduct";
/// 查看商品列表
static NSString *const kHAEventViewProductList = @"$ViewProductList";
/// 查看搜索结果
static NSString *const kHAEventViewSearchResult = @"$ViewSearchResult";
/// 更新会员等级
static NSString *const kHAEventUpdateMembershipLevel = @"$UpdateMembershipLevel";
/// 筛选商品
static NSString *const kHAEventFiltrateProduct = @"$FiltrateProduct";
/// 查看商品分类
static NSString *const kHAEventViewCategory = @"$ViewCategory";
/// 更新订单
static NSString *const kHAEventUpdateOrder = @"$UpdateOrder";
/// 取消订单
static NSString *const kHAEventCancelOrder = @"$CancelOrder";
/// 订单完成
static NSString *const kHAEventCompleteOrder = @"$CompleteOrder";
/// 取消支付
static NSString *const kHAEventCancelCheckout = @"$CancelCheckout";
/// 领取优惠券
static NSString *const kHAEventObtainVoucher = @"$ObtainVoucher";
