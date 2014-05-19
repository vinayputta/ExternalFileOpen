//
//  VFExternalFileOpen.h
//  VFExternalFileOpen
//

#import <Cordova/CDVPlugin.h>

#define KEY_WIDTH_VIEW      @"viewWidth"
#define KEY_HEIGHT_VIEW     @"viewHeight"
#define KEY_POSX_VIEW       @"viewPosX"
#define KEY_POSY_VIEW       @"viewPosY"

@interface VFExternalFileOpen : CDVPlugin <UIDocumentInteractionControllerDelegate> {
    NSString *localFile;
}

@property (nonatomic, strong) UIDocumentInteractionController *docController;

- (void) openWith:(CDVInvokedUrlCommand*)command;
- (void) cleanupTempFile: (UIDocumentInteractionController *) controller;

@end
