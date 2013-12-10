#import "GRViewController.h"
#import <GameRocket/GameRocket.h>

@interface GRViewController ()

@end

@implementation GRViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    GRPurchaseRequest *request = [[GRPurchaseRequest alloc] init];
    request.player = @"player_id";
    
    [[GRGateway Purchase] buy:@"hello-world" andRequest:request andHandler:^(NSDictionary *result, GRResponse *response) {
        if (response.success) {
            NSLog(@"%@", [[result objectForKey:@"data"] objectForKey:@"message"]);
        } else {
            NSLog(@"%@", response.errormessage);
        }
    }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
