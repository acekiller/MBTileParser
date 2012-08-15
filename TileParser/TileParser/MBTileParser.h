//
//  MBTileParser.h
//  TileParser
//
//  Created by Moshe on 7/30/12.
//
//

#import <Foundation/Foundation.h>


typedef void(^MBTileParserCompletionBlock)();

@interface MBTileParser : NSObject

@property (nonatomic, strong) MBTileParserCompletionBlock completionHandler;
@property (nonatomic, strong) NSMutableDictionary *mapDictionary;

- (id)initWithMapName:(NSString *)map;
- (void) start;

@end
