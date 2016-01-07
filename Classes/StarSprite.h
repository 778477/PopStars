//
//  StarSprite.hpp
//  PopStars
//
//  Created by 郭妙友 on 16/1/5.
//
//

#ifndef StarSprite_hpp
#define StarSprite_hpp
#include "cocos2d.h"

class StarSprite : public cocos2d::Sprite{
public:
    static StarSprite* create(cocos2d::Color3B color,cocos2d::Size size);
    
    bool init();
};

#endif /* StarSprite_hpp */
