/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoSendMessageRequest : PBRequest <NSCopying> {
    NSString *_body;
    NSMutableArray *_ccs;
    NSString *_subject;
    NSMutableArray *_tos;
}

@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSMutableArray *ccs;
@property (nonatomic, readonly) BOOL hasBody;
@property (nonatomic, readonly) BOOL hasSubject;
@property (nonatomic, retain) NSString *subject;
@property (nonatomic, retain) NSMutableArray *tos;

- (void).cxx_destruct;
- (void)addCc:(id)arg1;
- (void)addTo:(id)arg1;
- (id)body;
- (id)ccAtIndex:(unsigned int)arg1;
- (id)ccs;
- (unsigned int)ccsCount;
- (void)clearCcs;
- (void)clearTos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBody;
- (BOOL)hasSubject;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCcs:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTos:(id)arg1;
- (id)subject;
- (id)toAtIndex:(unsigned int)arg1;
- (id)tos;
- (unsigned int)tosCount;
- (void)writeTo:(id)arg1;

@end
