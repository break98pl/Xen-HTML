//
//  XENHWidgetConfiguration.h
//  Xen HTML
//
//  Created by Matt Clarke on 18/05/2020.
//

#import <Foundation/Foundation.h>

/**
 Represents the configuration of a widget.
 
 Counterpart to the widgetMetadata field in preferences
 */
@interface XENHWidgetConfiguration : NSObject

@property (nonatomic, readwrite) CGFloat width;
@property (nonatomic, readwrite) CGFloat height;
@property (nonatomic, readwrite) CGFloat x;
@property (nonatomic, readwrite) CGFloat y;
@property (nonatomic, readwrite) BOOL isFullscreen;
@property (nonatomic, strong) NSDictionary *options;

/**
 Generates default configuration for the widget at the specified path
 */
+ (instancetype)defaultConfigurationForPath:(NSString*)path;

/**
 Constucts a configuration from a previously serialised dictionary
 */
+ (instancetype)configurationFromDictionary:(NSDictionary*)dictionary;

/**
 Serialises the widget configuration to a dictionary, ready for storage
 */
- (NSDictionary*)serialise;

@end
