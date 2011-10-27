/*
 * Copyright 2000 by Thomas Krammer
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
#include "pch.h"
#include "common.h"

// Common message fields
const char * const MESSAGE_DATA_ID_COLOR	= "COMMON:Color";
const char * const MESSAGE_DATA_ID_INDEX	= "COMMON:Index";

// Update Speeds
const bigtime_t SLOW_PULSE_RATE				= 2000000;
const bigtime_t NORMAL_PULSE_RATE			= 1000000;
const bigtime_t FAST_PULSE_RATE	 			=  500000;
