//
//  submitViewController.h
//  Reno Suggestions
//
//  Created by Jack Angelo on 10/15/11.
//  Copyright (c) 2011 Apps42, Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBJson.h"

@interface submitViewController : UIViewController 
<UINavigationControllerDelegate, UIImagePickerControllerDelegate>

{
    
    
    UIButton*                   cancelButton;
    UIButton*                   cameraButton;
    UIButton*                   submitButton;
    
    BOOL                                mediaTypeCamera;
    UIImagePickerController*           imagePicker;
}

 
@property (nonatomic, retain) IBOutlet UIButton* cancelButton;
@property (nonatomic, retain) IBOutlet UIButton* cameraButton;
@property (nonatomic, retain) IBOutlet UIButton* submitButton;

-(IBAction) takeAPictureButtonPressed;
-(IBAction) cancelButtonPressed;
-(IBAction) submitButtonPressed;

- (void)showImagePicker:(UIImagePickerControllerSourceType)sourceType;
- (void)setupImagePicker:(UIImagePickerControllerSourceType)sourceType;
- (void)photoLibraryAction:(id)sender;
-(void)imagePickerController:(UIImagePickerController *)picker
didFinishPickingMediaWithInfo:(NSDictionary *)info;
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker;
-(UIImage*)useImage:(UIImage *)image;

@end
