//
//  DebugBEEPController.h
//  SubEthaEdit
//
//  Created by Martin Ott on Fri Apr 30 2004.
//  Copyright (c) 2004 TheCodingMonkeys. All rights reserved.
//

#ifndef TCM_NO_DEBUG


#import <Cocoa/Cocoa.h>


@interface DebugBEEPController : NSWindowController {
    IBOutlet NSObjectController *O_sessionManagerController;
    IBOutlet NSArrayController *O_sessionController;
}

@end


@interface AddressDataToStringValueTransformer : NSValueTransformer {

}

@end

#endif
