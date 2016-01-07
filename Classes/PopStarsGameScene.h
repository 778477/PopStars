//
//  PopStarsGameScene.hpp
//  PopStars
//
//  Created by 郭妙友 on 16/1/4.
//
//

#ifndef PopStarsGameScene_hpp
#define PopStarsGameScene_hpp

#include "cocos2d.h"

class PopStarsGameScene : public cocos2d::LayerColor
{
public:
    static cocos2d::Scene* createScene();
    
    bool init();
    
    void back(cocos2d::Ref* sender);
};
#endif /* PopStarsGameScene_hpp */
