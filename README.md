# LogView
## Using

### Initializing
CGRect screen = [[UIScreen mainScreen] bounds];
//screen.size.height /= 2;
logView = [[LogView alloc] initWithFrame:screen maxLines:12];
/*[[[[[UIApplication sharedApplication] keyWindow] rootViewController] view] addSubview:viewcg];
[[[[[UIApplication sharedApplication] keyWindow] rootViewController] view] bringSubviewToFront:viewcg];*/

### How to log
To log use the `-(void)log:(NSString*)` method. To log variables or other fun stuff use the `stringWithFormat:` method  from NSString. Here is an example:

`
unsigned int myValue = 12;
[logView log:[NSString stringWithFormat:@"myValue is stored at %p with value %d", &myValue, myValue]];
`
