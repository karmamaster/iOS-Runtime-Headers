/* Generated by RuntimeBrowser.
 */

@protocol TSKStyleMapper <NSObject>

@required

- (BOOL)clientsMustRemap;
- (TSSStyle *)mappedStyleForStyle:(TSSStyle *)arg1;
- (void)popMappingContext:(id)arg1;
- (void)pushMappingContext:(id)arg1;
- (TSSStylesheet *)targetStylesheet;

@end