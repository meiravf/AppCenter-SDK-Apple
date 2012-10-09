// ----------------------------------------------------------------------------
// Copyright (c) Microsoft Corporation. All rights reserved.
// ----------------------------------------------------------------------------
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//


#import <UIKit/UIKit.h>
#import "MSError.h"

#ifndef WindowsAzureMobileServices_MSLoginViewController_h
#define WindowsAzureMobileServices_MSLoginViewController_h


#pragma mark * Block Type Definitions

// Callback for navigation to the end URL of the MSLoginViewController
typedef void (^MSEndUrlNavigatedTo)(NSURL *url);

// Callback for user cancelled MSLoginViewController
typedef void (^MSNavigationCancelled)();

@interface MSLoginViewController : UIViewController<UIWebViewDelegate>

- (id) initWithStartUrl: (NSURL *)startUrl
                 endUrl:(NSURL *)endUrl
                 onSuccess:(MSEndUrlNavigatedTo)onSuccess
                 onCancel:(MSNavigationCancelled)onCancel
                 onError:(MSErrorBlock) onError;

@end

#endif