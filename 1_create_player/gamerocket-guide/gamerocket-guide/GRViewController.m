#import "GRViewController.h"
#import <GameRocket/GameRocket.h>

@interface GRViewController ()

@end

@implementation GRViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    GRPlayerRequest *request = [[GRPlayerRequest alloc] init];
    request.name = @"ytreza";
    request.locale = @"en_US";
    
    [[GRGateway Player] create:request andHandler:^(GRPlayer *player, GRResponse *response) {
        if (response.success) {
            NSLog(@"%@", player.playerId);
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
