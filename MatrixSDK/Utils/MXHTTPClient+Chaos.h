#import "MXHTTPClient.h"

@interface MXHTTPClient (Chaos)

+ (void)setChaosDelay:(NSUInteger)delayMs;
+ (void)setJitter:(NSUInteger)jitterMs;
+ (void)setChaosDropRate:(double)dropRate;
+ (void)removeAllDelays;

@end
