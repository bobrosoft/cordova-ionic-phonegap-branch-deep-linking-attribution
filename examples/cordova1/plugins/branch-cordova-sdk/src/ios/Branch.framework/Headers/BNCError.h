//
//  BNCError.h
//  Branch-SDK
//
//  Created by Qinwei Gong on 11/17/14.
//  Copyright (c) 2014 Branch Metrics. All rights reserved.
//

@import Foundation;

FOUNDATION_EXPORT NSString *_Nonnull const BNCErrorDomain;

typedef NS_ENUM(NSInteger, BNCErrorCode) {
    BNCInitError                    = 1000,
    BNCDuplicateResourceError       = 1001,
    BNCRedeemCreditsError           = 1002,
    BNCBadRequestError              = 1003,
    BNCServerProblemError           = 1004,
    BNCNilLogError                  = 1005, // Not used at the moment.
    BNCVersionError                 = 1006, // Not used at the moment.
    BNCNetworkServiceInterfaceError = 1007,
    BNCInvalidNetworkPublicKeyError = 1008,
    BNCContentIdentifierError       = 1009,
    BNCSpotlightNotAvailableError   = 1010,
    BNCSpotlightTitleError          = 1011,
    BNCRedeemZeroCreditsError       = 1012,
    BNCHighestError,
};

@interface NSError (Branch)
+ (NSError*_Nonnull) branchErrorWithCode:(BNCErrorCode)errorCode;
+ (NSError*_Nonnull) branchErrorWithCode:(BNCErrorCode)errorCode error:(NSError*_Nullable)error;
+ (NSError*_Nonnull) branchErrorWithCode:(BNCErrorCode)errorCode localizedMessage:(NSString*_Nullable)message;
@end

void BNCForceNSErrorCategoryToLoad(void) __attribute__((constructor));
