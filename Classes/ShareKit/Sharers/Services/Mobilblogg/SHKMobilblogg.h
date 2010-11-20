//
//  SHKMobilblogg.h
//  ShareKit
//
//  Created by Tobias Hieta on 2010-11-19.
//  Copyright 2010 Purple Scout. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SHKSharer.h"

@interface SHKMobilblogg : SHKSharer
{
	NSString *_salt;
}


-(NSString*)computeHash:(NSString *)password;

@end
