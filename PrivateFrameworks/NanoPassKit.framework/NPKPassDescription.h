/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPassDescription : NSObject <NSCopying, NSSecureCoding> {
    PKColor *_backgroundColor;
    PKImage *_backgroundImage;
    NSData *_backgroundImageEncoded;
    BOOL _deletePending;
    PKColor *_foregroundColor;
    NSNumber *_groupID;
    NSDate *_ingestionDate;
    PKColor *_labelColor;
    PKImage *_logoImage;
    NSData *_logoImageEncoded;
    NSString *_logoText;
    NSData *_manifestHash;
    NSString *_passTypeIdentifier;
    PKPaymentApplication *_paymentApplication;
    NSDate *_relevantDate;
    int _style;
    NSString *_uniqueID;
}

@property (nonatomic, retain) PKColor *backgroundColor;
@property (nonatomic, retain) PKImage *backgroundImage;
@property (nonatomic, retain) NSData *backgroundImageEncoded;
@property (nonatomic) BOOL deletePending;
@property (nonatomic, retain) PKColor *foregroundColor;
@property (nonatomic, retain) NSNumber *groupID;
@property (nonatomic, retain) NSDate *ingestionDate;
@property (nonatomic, retain) PKColor *labelColor;
@property (nonatomic, retain) PKImage *logoImage;
@property (nonatomic, retain) NSData *logoImageEncoded;
@property (nonatomic, retain) NSString *logoText;
@property (nonatomic, retain) NSData *manifestHash;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic, retain) PKPaymentApplication *paymentApplication;
@property (nonatomic, retain) NSDate *relevantDate;
@property (nonatomic) int style;
@property (nonatomic, retain) NSString *uniqueID;

+ (BOOL)isCachingEnabled;
+ (void)setCachingEnabled:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)backgroundImage;
- (id)backgroundImageEncoded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)deletePending;
- (id)description;
- (id)encodeAsData:(id)arg1;
- (void)encodeObject:(id)arg1 asDataInCoder:(id)arg2 withKey:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)foregroundColor;
- (id)groupID;
- (unsigned int)hash;
- (id)ingestionDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithPass:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)labelColor;
- (id)logoImage;
- (id)logoImageEncoded;
- (id)logoText;
- (id)manifestHash;
- (id)passTypeIdentifier;
- (id)paymentApplication;
- (id)relevantDate;
- (id)safeUnarchiveObjectOfClass:(Class)arg1 WithData:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImageEncoded:(id)arg1;
- (void)setDeletePending:(BOOL)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setIngestionDate:(id)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setLogoImage:(id)arg1;
- (void)setLogoImageEncoded:(id)arg1;
- (void)setLogoText:(id)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setRelevantDate:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setUniqueID:(id)arg1;
- (int)style;
- (id)uniqueID;

@end
