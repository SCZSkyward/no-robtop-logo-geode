/**
 * Include the Geode headers.
 */
#include <Geode/Geode.hpp>
/**
 * Required to modify the MenuLayer class
 */
#include <Geode/modify/MenuLayer.hpp>

/**
 * Brings cocos2d and all Geode namespaces 
 * to the current scope.
 */
using namespace geode::prelude;

/**
 * Allows you to modify the MenuLayer
 */
class $modify(MenuLayer) {
    bool init() {
        if(!MenuLayer::init()) return false;
        
        // Gets the social-media-menu child from the MenuLayer
        auto socialmediamenu = this->getChildByID("social-media-menu");

        // Removes the child robtop-logo-button from the socialmediamenu
        socialmediamenu->removeChildByID("robtop-logo-button");

        // Gets the twitch button child from the socialmediamenu
        auto twitchbutton = socialmediamenu->getChildByID("twitch-button");

        // Gets the discord button child from the socialmediamenu
        auto discordbutton = socialmediamenu->getChildByID("discord-button");

        // Gets the youtube button child from the socialmediamenu
        auto youtubebutton = socialmediamenu->getChildByID("youtube-button");

        // Gets the facebook button child from the socialmediamenu
        auto facebookbutton = socialmediamenu->getChildByID("facebook-button");
	    
	if (Mod::get()->getSettingValue<bool>("switch-discord-twitch")) {
		
    		// Sets the position to X: 128, Y: 39.6
    		discordbutton->setPosition(128, 39.6);

    		// Finally sets the twitch button to X: 99, Y: 39.6
    		twitchbutton->setPosition(99, 39.6);

            	// Lowers the scale of the socialmediamenu
            	socialmediamenu->setScale(0.9);

           	// Sets the position to X: 9, Y: -15
           	socialmediamenu->setPosition(9, -15);

            	// Sets the Y position of the youtube button to 39.6
            	youtubebutton->setPositionY(39.6);

            	// Sets the Y position of the facebook button to 39.6
            	facebookbutton->setPositionY(39.6);
            	return true;
        } else {
            twitchbutton->setPosition(128, 39.6);
            
	    discordbutton->setPosition(99, 39.6);

            // Lowers the scale of the socialmediamenu
            socialmediamenu->setScale(0.9);

            // Sets the position to X: 9, Y: -15
            socialmediamenu->setPosition(9, -15);

            // Sets the Y position of the youtube button to 39.6
            youtubebutton->setPositionY(39.6);

             // Sets the Y position of the facebook button to 39.6
            facebookbutton->setPositionY(39.6);

        return true;
        }
    }     
};
