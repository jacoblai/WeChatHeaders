//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, UIImage, UIImagePickerController;

@protocol ImagePreviewDelegate <NSObject>

@optional
- (void)downloadFailInImagePreview;
- (void)returnFromImagePreview:(_Bool)arg1 andPicker:(UIImagePickerController *)arg2 andImage:(UIImage *)arg3;
- (void)selectFromImagePreview:(UIImagePickerController *)arg1 andImage:(UIImage *)arg2 andData:(NSData *)arg3;
@end
