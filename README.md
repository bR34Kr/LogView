# LogView
## Using

### How to log
To log use the `-(void)log:(NSString*)` method. To log variables or other fun stuff use the `stringWithFormat:` method  from NSString. Here is an example:

`
unsigned int myValue = 12;
[logView log:[NSString stringWithFormat:@"myValue is stored at %p with value %d", &myValue, myValue]];
`
