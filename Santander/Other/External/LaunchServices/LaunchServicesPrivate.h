//
//  LaunchServicesPrivate.h
//  Santander
//
//  Created by Serena on 15/08/2022.
//

#ifndef LaunchServicesPrivate_h
#define LaunchServicesPrivate_h
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSApplicationProxy
@property (readonly, nonatomic) NSString *applicationType;
@property (getter=isDeletable, readonly, nonatomic) BOOL deletable;
@property (getter=isBetaApp, readonly, nonatomic) BOOL betaApp;
@property (getter=isRestricted, readonly, nonatomic) BOOL restricted;
@property (readonly, nonatomic) NSSet <NSString *> *claimedURLSchemes;
@property (readonly, nonatomic) NSString *teamID;
@property (getter=isContainerized, readonly, nonatomic) BOOL containerized;
@property (readonly, nonatomic) NSDictionary <NSString *, id> *entitlements;

+ (LSApplicationProxy*)applicationProxyForIdentifier:(id)identifier;
- (NSString *)applicationIdentifier;
- (NSURL *)containerURL;
- (NSURL *)bundleURL;
- (NSString *)localizedName;
@end


@interface LSApplicationWorkspace
+ (instancetype) defaultWorkspace;
- (NSArray <LSApplicationProxy *>*)allInstalledApplications;
- (BOOL)openApplicationWithBundleID:(NSString *)arg0 ;
@end

@interface UIImage (Private)
+ (instancetype)_applicationIconImageForBundleIdentifier:(NSString*)bundleIdentifier format:(int)format scale:(CGFloat)scale;
@end

NS_ASSUME_NONNULL_END

#endif /* LaunchServicesPrivate_h */