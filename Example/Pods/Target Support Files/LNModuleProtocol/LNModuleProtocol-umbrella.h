#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "LNFeedModuleProtocol.h"
#import "LNLiveModuleProtocol.h"
#import "LNLoginModuleProtocol.h"
#import "LNModuleProtocol.h"
#import "LNVideoModuleProtocol.h"

FOUNDATION_EXPORT double LNModuleProtocolVersionNumber;
FOUNDATION_EXPORT const unsigned char LNModuleProtocolVersionString[];

