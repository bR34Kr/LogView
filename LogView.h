@interface LogView : UITextView

- (id)initWithFrame:(CGRect)frame maxLines:(unsigned int)_maxLines;
- (void)setup;
-(void)log:(NSString*)string;
-(void)updateText;
-(void)clear;

@end