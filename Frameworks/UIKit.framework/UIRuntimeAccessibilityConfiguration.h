/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRuntimeAccessibilityConfiguration : NSObject {
    NSString *accessibilityConfigurationHint;
    NSString *accessibilityConfigurationLabel;
    NSNumber *accessibilityConfigurationTraits;
    NSNumber *isAccessibilityConfigurationElement;
    NSObject *object;
}

@property (nonatomic, retain) NSString *accessibilityConfigurationHint;
@property (nonatomic, retain) NSString *accessibilityConfigurationLabel;
@property (nonatomic, retain) NSNumber *accessibilityConfigurationTraits;
@property (nonatomic, retain) NSNumber *isAccessibilityConfigurationElement;
@property (nonatomic, retain) NSObject *object;

- (id)accessibilityConfigurationHint;
- (id)accessibilityConfigurationLabel;
- (id)accessibilityConfigurationTraits;
- (void)applyConfiguration;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 label:(id)arg2 hint:(id)arg3 traits:(id)arg4 andIsAccessibilityElement:(id)arg5;
- (id)isAccessibilityConfigurationElement;
- (id)object;
- (void)setAccessibilityConfigurationHint:(id)arg1;
- (void)setAccessibilityConfigurationLabel:(id)arg1;
- (void)setAccessibilityConfigurationTraits:(id)arg1;
- (void)setIsAccessibilityConfigurationElement:(id)arg1;
- (void)setObject:(id)arg1;

@end
