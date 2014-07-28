//
//  GRViewController.h
//  _37_MapsTest
//
//  Created by Exo-terminal on 7/9/14.
//  Copyright (c) 2014 Evgenia. All rights reserved.
//

#import <UIKit/UIKit.h>


@class MKMapView;

@interface GRViewController : UIViewController

@property(weak, nonatomic)IBOutlet MKMapView* mapView;

@end
