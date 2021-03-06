/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKNumericSuggestionsEnterValueAlgorithm : PKNumericSuggestionsAlgorithm {
    NSDecimalNumber * _cardBalance;
    NSString * _currencyCode;
    long long  _decimalPrecision;
    NSArray * _defaultSuggestions;
    NSArray * _defaultValues;
    bool  _hasValidDefaultSuggestions;
    PKNumericSuggestionLastInput * _lastInput;
    NSDecimalNumber * _maxAmount;
    NSDecimalNumber * _minAmount;
    unsigned long long  _powerOfTenFactor;
    NSDecimalNumberHandler * _roundingBehavior;
    bool  _useBuiltInDefaults;
    NSArray * _valuesToDefaults;
}

@property (nonatomic, copy) NSDecimalNumber *cardBalance;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) long long decimalPrecision;
@property (nonatomic, copy) NSArray *defaultValues;
@property (nonatomic, readonly) bool hasValidDefaultSuggestions;
@property (nonatomic, copy) NSDecimalNumber *maxAmount;
@property (nonatomic, copy) NSDecimalNumber *minAmount;
@property (nonatomic) unsigned long long powerOfTenFactor;

- (void).cxx_destruct;
- (bool)_amountIsValid:(id)arg1;
- (void)_generateCalculatedSuggestions;
- (id)_generateDefaultSuggestions;
- (id)_generateValuesToDefaults;
- (id)_maxAmountSuggestion;
- (bool)_possibleAmountIsValidWithDefaultValue:(id)arg1 amount:(id)arg2;
- (id)_possibleValueForAmount:(id)arg1;
- (id)_useMaxAmountSuggestion;
- (id)cardBalance;
- (id)currencyCode;
- (long long)decimalPrecision;
- (id)defaultValues;
- (bool)hasValidDefaultSuggestions;
- (id)init;
- (id)initWithLastInput:(id)arg1;
- (id)maxAmount;
- (id)minAmount;
- (unsigned long long)powerOfTenFactor;
- (void)setCardBalance:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDecimalPrecision:(long long)arg1;
- (void)setDefaultValues:(id)arg1;
- (void)setMaxAmount:(id)arg1;
- (void)setMinAmount:(id)arg1;
- (void)setPowerOfTenFactor:(unsigned long long)arg1;
- (void)setUseBuiltInDefaults:(bool)arg1;
- (id)suggestionsWithAmount:(id)arg1;

@end
