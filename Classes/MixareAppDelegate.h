/*
 * Copyright (C) 2010- Peer internet solutions
 * 
 * This file is part of mixare.
 * 
 * This program is free software: you can redistribute it and/or modify it 
 * under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 3 of the License, or 
 * (at your option) any later version. 
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS 
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details. 
 * 
 * You should have received a copy of the GNU General Public License along with 
 * this program. If not, see <http://www.gnu.org/licenses/>
 */

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreMotion/CoreMotion.h>
#import "DataSourceManager.h"
#import "DownloadManager.h"
#import "ListViewController.h"
#import "AugmentedGeoViewController.h"
#import "MapViewController.h"
#import "MarkerView.h"
#import "Radar.h"
#import "MoreViewController.h"
#import "SourceViewController.h"
#import "StartMain.h"
#import "PluginEntryPoint.h"

@interface MixareAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate, CLLocationManagerDelegate, StartMain> {
    CLLocationManager *_locationManager;
    DataSourceManager *_dataSourceManager;
    DownloadManager *_downloadManager;
    
    IBOutlet UIWindow *window;
	IBOutlet UITabBarController *tabBarController;
	IBOutlet ListViewController *listViewController;
	IBOutlet MapViewController *mapViewController;
    IBOutlet AugmentedGeoViewController *augViewController;
	
	IBOutlet UIView *menuView;
    IBOutlet MoreViewController *moreViewController;
    IBOutlet SourceViewController *sourceViewController;
    
    NSArray *startPlugin;
    BOOL toggleMenu;
    id<PluginEntryPoint> pluginDelegate;
    
    BOOL alertRunning;
    
    @private
    BOOL beforeWasLandscape;
    IBOutlet UIView *notificationView;
}

@property (nonatomic) BOOL alertRunning;

- (void)runApplication:(UIWindow*)win;

@end
