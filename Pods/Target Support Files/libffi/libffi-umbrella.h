#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ffi.h"
#import "fficonfig.h"
#import "fficonfig_i386.h"
#import "fficonfig_x86_64.h"
#import "ffitarget.h"
#import "ffitarget_i386.h"
#import "ffitarget_x86_64.h"
#import "ffi_common.h"
#import "ffi_i386.h"
#import "ffi_x86_64.h"

FOUNDATION_EXPORT double libffiVersionNumber;
FOUNDATION_EXPORT const unsigned char libffiVersionString[];

