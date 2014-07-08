#import <Foundation/Foundation.h>

@class
  SPTExample
, SPTExampleGroup
, SPTXCTestCase
;

@interface SPTSpec : NSObject

@property (nonatomic, strong) SPTXCTestCase *testCase;
@property (nonatomic, strong) SPTExampleGroup *rootGroup;
@property (nonatomic, strong) NSMutableArray *groupStack;
@property (nonatomic, strong) NSArray *compiledExamples;
@property (nonatomic, strong) NSString *fileName;
@property (nonatomic) NSUInteger lineNumber;
@property (nonatomic, getter = isDisabled) BOOL disabled;
@property (nonatomic) BOOL hasFocusedExamples;

- (SPTExampleGroup *)currentGroup;
- (void)compile;

@end
