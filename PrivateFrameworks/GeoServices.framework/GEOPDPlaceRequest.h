/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceRequest : PBRequest <NSCopying> {
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEOPDClientMetadata *_clientMetadata;
    NSMutableArray *_displayLocales;
    struct { 
        unsigned int requestType : 1; 
        unsigned int suppressResultsRequiringAttribution : 1; 
    } _has;
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    int _requestType;
    NSMutableArray *_requestedComponents;
    NSMutableArray *_spokenLocales;
    BOOL _suppressResultsRequiringAttribution;
}

@property (nonatomic, retain) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, retain) NSMutableArray *displayLocales;
@property (nonatomic, readonly) BOOL hasAnalyticMetadata;
@property (nonatomic, readonly) BOOL hasClientMetadata;
@property (nonatomic, readonly) BOOL hasPlaceRequestParameters;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) BOOL hasSuppressResultsRequiringAttribution;
@property (nonatomic, retain) GEOPDPlaceRequestParameters *placeRequestParameters;
@property (nonatomic) int requestType;
@property (nonatomic, retain) NSMutableArray *requestedComponents;
@property (nonatomic, retain) NSMutableArray *spokenLocales;
@property (nonatomic) BOOL suppressResultsRequiringAttribution;

- (void)addDisplayLocale:(id)arg1;
- (void)addRequestedComponent:(id)arg1;
- (void)addSpokenLocale:(id)arg1;
- (id)analyticMetadata;
- (void)clearDisplayLocales;
- (void)clearRequestedComponents;
- (void)clearSpokenLocales;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLocaleAtIndex:(unsigned int)arg1;
- (id)displayLocales;
- (unsigned int)displayLocalesCount;
- (BOOL)hasAnalyticMetadata;
- (BOOL)hasClientMetadata;
- (BOOL)hasPlaceRequestParameters;
- (BOOL)hasRequestType;
- (BOOL)hasSuppressResultsRequiringAttribution;
- (unsigned int)hash;
- (id)initWithAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)initWithCoordinateHint:(struct { double x1; double x2; })arg1 addressHint:(id)arg2 placeNameHint:(id)arg3 traits:(id)arg4;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(BOOL)arg2 includeETA:(BOOL)arg3 traits:(id)arg4;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned int)arg5 suppressResultsRequiringAttribution:(BOOL)arg6 includeETA:(BOOL)arg7 traits:(id)arg8;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)initWithTraits:(id)arg1 count:(unsigned int)arg2 includeETA:(BOOL)arg3 includeEntryPoints:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isForwardGeocoderRequest;
- (void)mergeFrom:(id)arg1;
- (id)placeRequestParameters;
- (BOOL)readFrom:(id)arg1;
- (int)requestType;
- (unsigned int)requestTypeCode;
- (id)requestedComponentAtIndex:(unsigned int)arg1;
- (id)requestedComponents;
- (unsigned int)requestedComponentsCount;
- (Class)responseClass;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setDisplayLocales:(id)arg1;
- (void)setHasRequestType:(BOOL)arg1;
- (void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1;
- (void)setPlaceRequestParameters:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setRequestedComponents:(id)arg1;
- (void)setSpokenLocales:(id)arg1;
- (void)setSuppressResultsRequiringAttribution:(BOOL)arg1;
- (id)spokenLocaleAtIndex:(unsigned int)arg1;
- (id)spokenLocales;
- (unsigned int)spokenLocalesCount;
- (BOOL)suppressResultsRequiringAttribution;
- (void)writeTo:(id)arg1;

@end
