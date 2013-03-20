//
//  JTCMapView.m
//  Prestige Collision
//
//  Created by John on 3/20/13.
//  Copyright (c) 2013 JTC Software. All rights reserved.
//

#import "JTCMapView.h"

@implementation JTCMapView

- (IBAction)callTowtruckRequestButton:(id)sender {
     [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"telprompt://0623376876"]];
}
@end
