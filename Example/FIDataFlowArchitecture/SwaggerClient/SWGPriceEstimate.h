#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol SWGPriceEstimate
@end

@interface SWGPriceEstimate : SWGObject

/* Unique identifier representing a specific product for a given latitude & longitude. For example, uberX in San Francisco will have a different product_id than uberX in Los Angeles [optional]
 */
@property(nonatomic) NSString* productId;
/* [ISO 4217](http://en.wikipedia.org/wiki/ISO_4217) currency code. [optional]
 */
@property(nonatomic) NSString* currencyCode;
/* Display name of product. [optional]
 */
@property(nonatomic) NSString* displayName;
/* Formatted string of estimate in local currency of the start location. Estimate could be a range, a single number (flat rate) or \"Metered\" for TAXI. [optional]
 */
@property(nonatomic) NSString* estimate;
/* Lower bound of the estimated price. [optional]
 */
@property(nonatomic) NSNumber* lowEstimate;
/* Upper bound of the estimated price. [optional]
 */
@property(nonatomic) NSNumber* highEstimate;
/* Expected surge multiplier. Surge is active if surge_multiplier is greater than 1. Price estimate already factors in the surge multiplier. [optional]
 */
@property(nonatomic) NSNumber* surgeMultiplier;

@end