
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRnCoreTestSpec.h"

@interface RnCoreTest : NSObject <NativeRnCoreTestSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RnCoreTest : NSObject <RCTBridgeModule>
#endif

@end
