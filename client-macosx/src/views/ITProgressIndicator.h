//Copyright 2013-2015 Ilija Tovilo
//
//Licensed under the Apache License, Version 2.0 (the "License");
//you may not use this file except in compliance with the License.
//You may obtain a copy of the License at
//
//http://www.apache.org/licenses/LICENSE-2.0
//
//Unless required by applicable law or agreed to in writing, software
//distributed under the License is distributed on an "AS IS" BASIS,
//WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//See the License for the specific language governing permissions and
//limitations under the License.


#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>

//
// !!!IMPORTANT!!! - Embedd ITProgressIndicator in a layer-backed view to avoid side-effects!
//

/**
 *  @class ITProgressIndicator
 *
 *  A replacement for `NSProgressIndicator`.
 *  It's a highly customizable control, driven by Core Animation, which makes it much more performant.
 *
 *  So basically, it's awesome.
 *
 */
@interface ITProgressIndicator : NSView

#pragma mark - Methods

/**
 *  Override this method to achieve a custom animation
 *
 *  @return CAKeyframeAnimation - animation which will be put on the progress indicator layer
 */
- (CAKeyframeAnimation *)keyFrameAnimationForCurrentPreferences;

#pragma mark - Properties


/// @property isIndeterminate - Indicates if the view will show the progress, or just spin
@property (nonatomic, setter = setIndeterminate:) BOOL isIndeterminate;


/// @property progress - The amount that should be shown when `isIndeterminate` is set to `YES`
@property (nonatomic) CGFloat progress;


/// @property animates - Indicates if the view is animating
@property (nonatomic) BOOL animates;


/// @property hideWhenStopped - Indicates if the view will be hidden if it's stopped
@property (nonatomic) BOOL hideWhenStopped;


/// @property lengthOfLine - The length of a single line
@property (nonatomic) CGFloat lengthOfLine;


/// @property widthOfLine - The width of a single line
@property (nonatomic) CGFloat widthOfLine;


/// @property numberOfLines - The number of lines of the indicator
@property (nonatomic) NSUInteger numberOfLines;


/// @property innerMargin - The distance of the lines from the middle
@property (nonatomic) CGFloat innerMargin;


/// @property animationDuration - Duration of a single rotation
@property (nonatomic) CGFloat animationDuration;


/// @property gradualAnimation - Defines if the animation is smooth or gradual
@property (nonatomic) BOOL steppedAnimation;

/// @property color - The color of the progress indicator
@property (nonatomic, strong) NSColor *color;

@end
