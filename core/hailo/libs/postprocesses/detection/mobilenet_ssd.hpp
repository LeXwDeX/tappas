/**
* Copyright (c) 2021-2022 Hailo Technologies Ltd. All rights reserved.
* Distributed under the LGPL license (https://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt)
**/
#ifndef _HAILO_MOBILENET_SSD_POST_HPP_
#define _HAILO_MOBILENET_SSD_POST_HPP_
#include "hailo_objects.hpp"
#include "hailo_common.hpp"

__BEGIN_DECLS
void filter(HailoROIPtr roi);
void mobilenet_ssd(HailoROIPtr roi);
void mobilenet_ssd_merged(HailoROIPtr roi);
void mobilenet_ssd_visdrone(HailoROIPtr roi);
__END_DECLS
#endif