//
//  DLPhotoCollection.h
//  DLPhotoPicker
//
//  Created by 沧海无际 on 16/2/20.
//  Copyright © 2016年 darling0825. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface DLPhotoCollection : NSObject

@property (nonatomic, strong) PHAssetCollection *assetCollection;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
@property (nonatomic, strong) ALAssetsGroup *assetGroup;
#pragma clang diagnostic pop
@property (nonatomic, strong) PHFetchResult *fetchResult;

@property (nonatomic, readonly) NSUInteger count;
@property (nonatomic, readwrite) NSUInteger countOfAssetsWithVideoType;
@property (nonatomic, readwrite) NSUInteger countOfAssetsWithImageType;
@property (nonatomic, readonly, copy)NSString *title;

- (id)initWithAssetCollection:(id)assetCollection;

- (UIImage *)badgeImage;
- (BOOL)isSmartAlbum;
- (BOOL)deletable;

@end
