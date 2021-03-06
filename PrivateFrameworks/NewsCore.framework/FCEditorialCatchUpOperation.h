/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEditorialCatchUpOperation : FCOperation {
    FCCloudContext * _context;
    NSDate * _date;
    <FCChannelProviding> * _editorialChannel;
    NSArray * _editorialSections;
    NSError * _error;
    NSDictionary * _feedContextByFeedID;
    NSArray * _feedItems;
}

@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) NSDate *date;
@property (copy) <FCChannelProviding> *editorialChannel;
@property (copy) NSArray *editorialSections;
@property (retain) NSError *error;
@property (copy) NSDictionary *feedContextByFeedID;
@property (copy) NSArray *feedItems;

- (void).cxx_destruct;
- (void)_checkShouldShowEditorialWithCompletionHandler:(id /* block */)arg1;
- (id)context;
- (id)date;
- (id)editorialChannel;
- (id)editorialSections;
- (id)error;
- (id)feedContextByFeedID;
- (id)feedItems;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setContext:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setEditorialChannel:(id)arg1;
- (void)setEditorialSections:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFeedContextByFeedID:(id)arg1;
- (void)setFeedItems:(id)arg1;
- (bool)validateOperation;

@end
