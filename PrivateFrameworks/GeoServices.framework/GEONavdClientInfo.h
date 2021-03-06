/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _canonicalName;
    NSString * _uniqueClientId;
}

@property (nonatomic, copy) NSString *canonicalName;
@property (nonatomic, copy) NSString *uniqueClientId;

+ (id)clientInfoForNavdPredictions;
+ (bool)supportsSecureCoding;

- (id)canonicalName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isCalendarClientInfo;
- (bool)isEqual:(id)arg1;
- (bool)isNavdClientInfo;
- (void)setCanonicalName:(id)arg1;
- (void)setUniqueClientId:(id)arg1;
- (id)uniqueClientId;

@end
