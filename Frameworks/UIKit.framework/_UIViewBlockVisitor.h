/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewBlockVisitor : _UIViewVisitor {
    id /* block */ _visitorBlock;
}

@property (nonatomic, copy) id /* block */ visitorBlock;

- (BOOL)_visitView:(id)arg1;
- (void)dealloc;
- (id)initWithTraversalDirection:(unsigned int)arg1 visitorBlock:(id /* block */)arg2;
- (void)setVisitorBlock:(id /* block */)arg1;
- (id /* block */)visitorBlock;

@end
