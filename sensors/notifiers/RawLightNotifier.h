/*
 * Copyright (C) 2024 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "SensorNotifier.h"

enum notify_t {
    BRIGHTNESS = 17,
    DC_STATE = 18,
    DISPLAY_FREQUENCY = 20,
    REPORT_VALUE = 201,
    POWER_STATE = 202,
};

class RawLightNotifier : public SensorNotifier {
  public:
    RawLightNotifier(sp<ISensorManager> manager);
    ~RawLightNotifier();

  protected:
    void notify();

    bool isEnable;
};
