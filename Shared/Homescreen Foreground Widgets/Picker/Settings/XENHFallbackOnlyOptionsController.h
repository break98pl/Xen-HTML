//
//  XENHFallbackOnlyOptionsController.h
//  Preferences
//
//  Created by Matt Clarke on 04/05/2018.
//

#import <Preferences/PSListController.h>
#import "../XENHHomescreenForegroundPickerDelegate.h"
#import "XENHFallbackDelegate-Protocol.h"

@interface XENHFallbackOnlyOptionsController : UITableViewController

@property (nonatomic, weak) id<XENHHomescreenForegroundPickerDelegate> delegate;
@property (nonatomic, readwrite) BOOL fallbackState;
@property (nonatomic, weak) id<XENHFallbackDelegate> fallbackDelegate;
@property (nonatomic, readwrite) BOOL showCancel;

@property (nonatomic, strong) NSString *widgetURL;

- (instancetype)initWithFallbackState:(BOOL)state;

@end
