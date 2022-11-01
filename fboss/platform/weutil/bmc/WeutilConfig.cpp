// 
// Copyright (c) 2022 by Cisco Systems, Inc.
// All rights reserved.
//
// This file was generated by gen_WeutilConfig.py
// Do not modify!
//

#include <string>

namespace facebook::fboss::platform {

std::string getIdpromsData() {
  return R"json({
    "weutil": [
        {
            "from-tag": "object::path",
            "tag": "Wedge EEPROM"
        },
        {
            "default": "3",
            "tag": "Version"
        },
        {
            "source": [
                {
                    "tag": "SCM:PRODUCT_ID"
                }
            ],
            "tag": "Product Name"
        },
        {
            "source": [
                {
                    "tag": "SCM:THIRD_PARTY_PN"
                }
            ],
            "tag": "Product Part Number"
        },
        {
            "default": "00-0000000-00",
            "tag": "System Assembly Part Number"
        },
        {
            "default": "000-000000-00",
            "tag": "Facebook PCBA Part Number"
        },
        {
            "default": "000-000000-00",
            "tag": "Facebook PCB Part Number"
        },
        {
            "from-tag": "PCB_PARTNBR_6",
            "tag": "ODM PCBA Part Number"
        },
        {
            "from-tag": "PCB_SERIAL",
            "tag": "ODM PCBA Serial Number"
        },
        {
            "default": "0",
            "format": [
                "...-.....-0*(.+)",
                "$1"
            ],
            "from-tag": "PCB_PARTNBR_6",
            "tag": "Product Production State"
        },
        {
            "format": [
                "([^.]*)[.].*",
                "$1"
            ],
            "from-tag": "HW_VERSION",
            "tag": "Product Version"
        },
        {
            "format": [
                "[^.]*[.](.*)",
                "$1"
            ],
            "from-tag": "HW_VERSION",
            "tag": "Product Sub-Version"
        },
        {
            "source": [
                {
                    "tag": "PDB:CHASSIS_SERIAL"
                }
            ],
            "tag": "Product Serial Number"
        },
        {
            "default": "00000000",
            "tag": "Product Asset Tag"
        },
        {
            "default": "Cisco",
            "tag": "System Manufacturer"
        },
        {
            "format": [
                "(..)(..)-(..)-(..)",
                "$3-$4-$2"
            ],
            "from-tag": [
                "CHASSIS_MFG_DATE",
                "PCB_MFG_DATE"
            ],
            "tag": "System Manufacturing Date"
        },
        {
            "tag": "PCB Manufacturer"
        },
        {
            "from-tag": [
                "CHASSIS_MFG_LOCATION",
                "PCB_MFG_LOCATION"
            ],
            "tag": "Assembled At"
        },
        {
            "default": "00:00:00:00:00:00",
            "format": [
                "(..)(..)(..)(..)(..)(..)",
                "$1:$2:$3:$4:$5:$6"
            ],
            "from-tag": [
                "MACADDR_BASE",
                "MACADDR"
            ],
            "tag": "Local MAC"
        },
        {
            "default": "00:00:00:00:00:00",
            "source": [
                {
                    "format": [
                        "(..)(..)(..)(..)(..)(..)",
                        "$1:$2:$3:$4:$5:$6"
                    ],
                    "tag": "SCM:MACADDR_BASE"
                }
            ],
            "tag": "Extended MAC Base"
        },
        {
            "default": "0",
            "from-tag": "MAC_BLKSIZE",
            "tag": "Extended MAC Address Size"
        },
        {
            "tag": "Location on Fabric"
        },
        {
            "default": "0x0",
            "tag": "CRC8"
        }
    ]
}
  )json";

} // getIdproms()

} // namespace facebook::fboss::platform
