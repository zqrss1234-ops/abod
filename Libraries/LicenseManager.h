#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

extern NSString *const kLicenseServerURL;
extern NSString *const kLocalPasscode;

@interface LicenseManager : NSObject

+ (instancetype)sharedInstance;

- (void)checkLicense;
- (BOOL)isLicenseValid;
- (void)validateKey:(NSString *)key completion:(void (^)(BOOL valid, NSString *message))completion;
- (BOOL)validateLocalCode:(NSString *)code;

@end
