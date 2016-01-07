//
//  StarSprite.cpp
//  PopStars
//
//  Created by 郭妙友 on 16/1/5.
//
//
#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#include "StarSprite.h"

using namespace cocos2d;
using namespace std;

StarSprite* StarSprite::create(cocos2d::Color3B color,cocos2d::Size size){
    
   
    StarSprite *star = new (nothrow) StarSprite;
    if(star && star->init()){
        // TODO 新建 SpriteBuilder 类来负责 将UIImage 转化为 Sprite
        UIGraphicsBeginImageContext(CGSizeMake(size.width, size.height));
        CGContextRef context = UIGraphicsGetCurrentContext();
        CGContextSetFillColorWithColor(context, [UIColor colorWithRed:color.r*1.0/255.0
                                                                green:color.g*1.0/255.0
                                                                 blue:color.b*1.0/255.0
                                                                alpha:.5].CGColor);
        CGContextFillRect(context, CGRectMake(0, 0, size.width, size.height));
        UIImage *img = UIGraphicsGetImageFromCurrentImageContext();
        UIGraphicsEndImageContext();
        
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *filePath = [[paths objectAtIndex:0] stringByAppendingPathComponent:@"Image.png"];
        [UIImagePNGRepresentation(img) writeToFile:filePath atomically:YES];
        
        
        star->setTexture([filePath cStringUsingEncoding:NSUTF8StringEncoding]);
        star->autorelease();
        
        return star;

    }
    CC_SAFE_DELETE(star);
    return NULL;
}

bool StarSprite::init(){
    if(!Sprite::init()) return false;
    return true;
}