/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPowerDownViewController : UIViewController <SBUIPowerDownViewControllerInterface, SBUIPowerDownViewDelegate> {
    <SBUIPowerDownViewControllerDelegate> * powerDownDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <SBUIPowerDownViewControllerDelegate> *powerDownDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_powerDownView;
- (void)loadView;
- (id)powerDownDelegate;
- (void)powerDownViewAnimateOutCompleted:(id)arg1;
- (void)powerDownViewRequestCancel:(id)arg1;
- (void)powerDownViewRequestPowerDown:(id)arg1;
- (void)setPowerDownDelegate:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
