//
//  JTCMapView.h
//  Prestige Collision
//
//  Created by John on 3/20/13.
//  Copyright (c) 2013 JTC Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface JTCMapView : UIViewController<CLLocationManagerDelegate>
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
- (IBAction)callTowtruckRequestButton:(id)sender;

@end
