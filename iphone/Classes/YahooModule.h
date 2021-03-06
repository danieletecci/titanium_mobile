/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#ifdef USE_TI_YAHOO

#import "TiModule.h"
#import "KrollCallback.h"
#import "TiHTTPClient/TiHTTPClient.h"

@interface YahooModule : TiModule {
@private
}

@end


@interface YQLCallback : NSObject<TiHTTPRequestDelegate>
{
@private
	YahooModule *module;
	KrollCallback *callback;
}

-(id)initWithCallback:(KrollCallback*)callback module:(YahooModule*)module;

@end

#endif