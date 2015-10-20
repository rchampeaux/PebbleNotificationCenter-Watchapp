/*
 * NotificationsWindow.h
 *
 *  Created on: Aug 25, 2013
 *      Author: matej
 */

#ifndef NOTIFICATIONSWINDOW_H_
#define NOTIFICATIONSWINDOW_H_

#include "NotificationStorage.h"

void notification_window_init(void);
void nw_set_busy_state(bool newState);
Notification* nw_get_displayed_notification();
void nw_switch_to_notification(uint8_t index);
void nw_vibrate(VibePattern* vibePattern, uint8_t totalLength);
void nw_remove_notification(uint8_t id, bool closeAutomatically);
void nw_fix_picked_notification();

#ifndef PBL_PLATFORM_APLITE
    void nw_start_dictation();
#endif

extern bool appIdle;
extern bool busy;
extern bool autoSwitch;
extern uint8_t pickedNotification;
extern uint16_t periodicVibrationPeriod;
extern bool vibrating;
extern bool lightOn;
extern uint32_t elapsedTime;

#ifdef PBL_COLOR
    extern uint8_t* bitmapReceivingBuffer;
    extern uint16_t bitmapReceivingBufferHead;
    extern GBitmap* notificationBitmap;
#endif


#endif /* NOTIFICATIONSWINDOW_H_ */
