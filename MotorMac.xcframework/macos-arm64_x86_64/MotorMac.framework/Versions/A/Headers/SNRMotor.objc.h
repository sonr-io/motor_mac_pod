// Objective-C API for talking to github.com/sonr-io/sonr/bind/motor-mobile Go package.
//   gobind -lang=objc -prefix="SNR" github.com/sonr-io/sonr/bind/motor-mobile
//
// File is generated by gobind. Do not edit.

#ifndef __SNRMotor_H__
#define __SNRMotor_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@protocol SNRMotorMotorCallback;
@class SNRMotorMotorCallback;

@protocol SNRMotorMotorCallback <NSObject>
- (void)onDiscover:(NSData* _Nullable)data;
@end

/**
 * TODO: refactor this such that it accepts a CID
 */
FOUNDATION_EXPORT BOOL SNRMotorAddBucketObject(NSString* _Nullable bucketDid, NSData* _Nullable obj, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorBuyAlias(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT BOOL SNRMotorConnect(NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorCreateAccount(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorCreateAccountWithKeys(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorCreateBucket(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorCreateSchema(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorGetBucketObject(NSString* _Nullable bucketDid, NSString* _Nullable cid, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorGetBucketObjects(NSString* _Nullable bucketDid, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorGetDocument(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorInit(NSData* _Nullable buf, id<SNRMotorMotorCallback> _Nullable cb, NSError* _Nullable* _Nullable error);

/**
 * IssuePayment creates a send/receive token request to the specified address.
 */
FOUNDATION_EXPORT NSData* _Nullable SNRMotorIssuePayment(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorLogin(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorLoginWithKeys(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorQueryBucket(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorQueryBucketByCreator(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorQuerySchema(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorQuerySchemaByCreator(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorQuerySchemaByDid(NSString* _Nullable did, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT BOOL SNRMotorRemoveBucketObject(NSString* _Nullable bucketDid, NSString* _Nullable cid, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT BOOL SNRMotorResolveBucket(NSString* _Nullable did, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT BOOL SNRMotorResolveSubBucket(NSString* _Nullable bucketDid, NSString* _Nullable subBucketDid, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorSellAlias(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

/**
 * Stat returns general information about the Motor node its wallet and accompanying Account.
 */
FOUNDATION_EXPORT NSData* _Nullable SNRMotorStat(NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorTransferAlias(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT BOOL SNRMotorUpdateBucketLabel(NSString* _Nullable bucketDid, NSString* _Nullable label, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT BOOL SNRMotorUpdateBucketVisibility(NSString* _Nullable bucketDid, long vis, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT NSData* _Nullable SNRMotorUploadDocument(NSData* _Nullable buf, NSError* _Nullable* _Nullable error);

@class SNRMotorMotorCallback;

@interface SNRMotorMotorCallback : NSObject <goSeqRefInterface, SNRMotorMotorCallback> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)onDiscover:(NSData* _Nullable)data;
@end

#endif