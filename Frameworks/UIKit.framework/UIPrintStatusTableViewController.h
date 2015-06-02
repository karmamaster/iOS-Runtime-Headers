/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintStatusTableViewController : UITableViewController {
    PKJob *_printJob;
    NSDateFormatter *_sentFormatter;
}

- (void)cancelPrinting;
- (void)dealloc;
- (id)initWithJob:(id)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)popToJobsView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)updateCancelButton;
- (void)updateJobInfo;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
