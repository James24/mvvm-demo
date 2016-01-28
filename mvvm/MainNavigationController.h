//
//  MainNavigationController.h
//  mvvm
//
//  Created by Ricky Joudrey on 1/27/16.
//  Copyright © 2016 com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewModel.h"

@interface MainNavigationController : UINavigationController
@property MainViewModel *viewModel;
@end
