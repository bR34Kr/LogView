# LogView
## Using

### Initializing
First off, make a global variable `LogView *logView;`

To initialize the newly created `logView` use the `-(void)initWithFrame:(CGRect) maxLines:(unsigned int)` method. Here is an example:
```
CGRect screen = [[UIScreen mainScreen] bounds];
logView = [[LogView alloc] initWithFrame:screen maxLines:12];
[[[UIApplication sharedApplication] keyWindow] addSubview:logView];
[[[UIApplication sharedApplication] keyWindow] bringSubviewToFront:logView];
```

### How to log
To log use the `-(void)log:(NSString*)` method. To log variables or other fun stuff use the `stringWithFormat:` method  from NSString. Here is an example:

```
unsigned int myValue = 12;
[logView log:[NSString stringWithFormat:@"myValue is stored at %p with value %d", &myValue, myValue]];
```

### Known Issues
- Makes target app slow. (Reduces FPS probably due to memory being constantly updated)
