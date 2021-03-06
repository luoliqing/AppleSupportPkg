/** @file

OcAppleImageVerificationLib

Copyright (c) 2018, savvas

All rights reserved.

This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef APPLE_PK_DB_H
#define APPLE_PK_DB_H

#define NUM_OF_PK 2

typedef struct APPLE_PK_ENTRY_ {
  UINT8 Hash[32];
  UINT8 PublicKey[520];
} APPLE_PK_ENTRY;

APPLE_PK_ENTRY PkDataBase[NUM_OF_PK] = {
	{
  	//
  	// PublicKey hash
  	//
  	{
      0xc7, 0xa1, 0xb9, 0x36, 0x28, 0x80, 0xde, 0x69, 0x57, 0x62, 0xb7, 0xb6,
      0x5b, 0xec, 0x6b, 0xf1, 0x56, 0xa5, 0x5c, 0xf9, 0x24, 0x7f, 0x22, 0xef,
      0x78, 0x62, 0x35, 0x53, 0x7f, 0x95, 0x2b, 0x45
  	},
    //
    // Original PublicKey
    //
    /**
      CFFD3E6B FE66EC75 F44B7E2E 0ED26398 08A98D10 AC378E55
      1CAA0E1C 1D85EF6C D51C758C 751816BF 599FBEDA EF4D6B0C
      EBA31024 7357CDE1 05696D2E F6A36FE8 540A010E 96311C7E
      1F1971E8 34C3A237 EFF5FFCC 1262FDA4 B399EE9A 29CCCBFC
      1E767165 3F3F2F61 08DAACA3 372D465A C518D154 56A315FC
      555F417D F0095974 755F5150 E667EDA8 823162E0 8CF831F7
      AF5831CF 3F0D92CA BAD076C1 3F74ED92 4CC8A3DE CCD11863
      9120D1CB 2E85B06B DB155AE2 DA144006 44B63635 CD9AF896
      C172DF2B 4ED961FE 1F467BEA F0EB0BCE EDA1DF17 7D5112CA
      299E9EC8 6F5E85D4 79213FB1 F9DD5B93 8C57DE9A 52FF62A7
      E1431EA9 250EE129 4338CDD9 CA48E7C3
    **/
  	//
  	// PublicKey in format specified by Chromium project implementation
  	//
  	{
      0x40, 0x00, 0x00, 0x00, 0xd1, 0x16, 0xcd, 0xe7, 0xcf, 0xfd, 0x3e, 0x6b,
      0xfe, 0x66, 0xec, 0x75, 0xf4, 0x4b, 0x7e, 0x2e, 0x0e, 0xd2, 0x63, 0x98,
      0x08, 0xa9, 0x8d, 0x10, 0xac, 0x37, 0x8e, 0x55, 0x1c, 0xaa, 0x0e, 0x1c,
      0x1d, 0x85, 0xef, 0x6c, 0xd5, 0x1c, 0x75, 0x8c, 0x75, 0x18, 0x16, 0xbf,
      0x59, 0x9f, 0xbe, 0xda, 0xef, 0x4d, 0x6b, 0x0c, 0xeb, 0xa3, 0x10, 0x24,
      0x73, 0x57, 0xcd, 0xe1, 0x05, 0x69, 0x6d, 0x2e, 0xf6, 0xa3, 0x6f, 0xe8,
      0x54, 0x0a, 0x01, 0x0e, 0x96, 0x31, 0x1c, 0x7e, 0x1f, 0x19, 0x71, 0xe8,
      0x34, 0xc3, 0xa2, 0x37, 0xef, 0xf5, 0xff, 0xcc, 0x12, 0x62, 0xfd, 0xa4,
      0xb3, 0x99, 0xee, 0x9a, 0x29, 0xcc, 0xcb, 0xfc, 0x1e, 0x76, 0x71, 0x65,
      0x3f, 0x3f, 0x2f, 0x61, 0x08, 0xda, 0xac, 0xa3, 0x37, 0x2d, 0x46, 0x5a,
      0xc5, 0x18, 0xd1, 0x54, 0x56, 0xa3, 0x15, 0xfc, 0x55, 0x5f, 0x41, 0x7d,
      0xf0, 0x09, 0x59, 0x74, 0x75, 0x5f, 0x51, 0x50, 0xe6, 0x67, 0xed, 0xa8,
      0x82, 0x31, 0x62, 0xe0, 0x8c, 0xf8, 0x31, 0xf7, 0xaf, 0x58, 0x31, 0xcf,
      0x3f, 0x0d, 0x92, 0xca, 0xba, 0xd0, 0x76, 0xc1, 0x3f, 0x74, 0xed, 0x92,
      0x4c, 0xc8, 0xa3, 0xde, 0xcc, 0xd1, 0x18, 0x63, 0x91, 0x20, 0xd1, 0xcb,
      0x2e, 0x85, 0xb0, 0x6b, 0xdb, 0x15, 0x5a, 0xe2, 0xda, 0x14, 0x40, 0x06,
      0x44, 0xb6, 0x36, 0x35, 0xcd, 0x9a, 0xf8, 0x96, 0xc1, 0x72, 0xdf, 0x2b,
      0x4e, 0xd9, 0x61, 0xfe, 0x1f, 0x46, 0x7b, 0xea, 0xf0, 0xeb, 0x0b, 0xce,
      0xed, 0xa1, 0xdf, 0x17, 0x7d, 0x51, 0x12, 0xca, 0x29, 0x9e, 0x9e, 0xc8,
      0x6f, 0x5e, 0x85, 0xd4, 0x79, 0x21, 0x3f, 0xb1, 0xf9, 0xdd, 0x5b, 0x93,
      0x8c, 0x57, 0xde, 0x9a, 0x52, 0xff, 0x62, 0xa7, 0xe1, 0x43, 0x1e, 0xa9,
      0x25, 0x0e, 0xe1, 0x29, 0x43, 0x38, 0xcd, 0xd9, 0xca, 0x48, 0xe7, 0xc3,
      0x4f, 0x4b, 0x25, 0x95, 0x56, 0xa1, 0xa9, 0x4f, 0x33, 0x4f, 0x0f, 0xdc,
      0xcd, 0x7c, 0xb6, 0xab, 0x41, 0xa8, 0xfe, 0x2c, 0x24, 0x94, 0xad, 0x39,
      0x7f, 0x5a, 0x6d, 0x82, 0x40, 0x42, 0x32, 0xf9, 0xbb, 0x27, 0xc1, 0x17,
      0xc2, 0x5e, 0x3e, 0xbe, 0x49, 0xa8, 0x4f, 0x83, 0x56, 0x2e, 0x97, 0x1a,
      0x64, 0x58, 0xa3, 0x71, 0x53, 0x0e, 0xe1, 0x81, 0x38, 0x27, 0x76, 0xac,
      0xf2, 0x65, 0x48, 0x16, 0x30, 0x7c, 0xb1, 0x80, 0xfc, 0x5e, 0x4d, 0xd3,
      0x6b, 0xc0, 0x03, 0x50, 0x5d, 0xa7, 0xd8, 0xba, 0xad, 0xea, 0x2f, 0xe5,
      0x9c, 0x25, 0x36, 0xca, 0x4e, 0x0b, 0xef, 0xcf, 0x6f, 0x2d, 0xa5, 0x9c,
      0x1e, 0x52, 0xfc, 0x6c, 0x17, 0xb6, 0xd1, 0x93, 0x5c, 0x27, 0x64, 0xd9,
      0xaa, 0x9e, 0x4f, 0x13, 0x2d, 0x1a, 0x19, 0x46, 0x0b, 0x9a, 0xa4, 0x92,
      0x75, 0x48, 0xbb, 0x2c, 0xcd, 0xb8, 0x3e, 0xe5, 0x16, 0x9a, 0xfd, 0x7e,
      0xea, 0x81, 0xad, 0xba, 0xb6, 0x6d, 0x61, 0x4c, 0x35, 0xe5, 0xa4, 0x3c,
      0x36, 0x15, 0x4c, 0x38, 0x20, 0xde, 0xf7, 0x65, 0x8b, 0x19, 0x75, 0x25,
      0x98, 0x32, 0xd5, 0xd2, 0x4d, 0x0d, 0x65, 0x17, 0x29, 0xe7, 0x67, 0x39,
      0x55, 0xeb, 0xab, 0x6d, 0x7a, 0x7e, 0x52, 0x49, 0xf9, 0x74, 0x07, 0x07,
      0x72, 0x37, 0x14, 0x25, 0xe9, 0x38, 0xe1, 0xe4, 0xff, 0x18, 0x8c, 0x0d,
      0xe7, 0x46, 0x8d, 0x9a, 0x89, 0xaf, 0x31, 0xb2, 0xcf, 0x66, 0x08, 0x09,
      0x4e, 0xd4, 0xf7, 0xc1, 0xee, 0xb3, 0xee, 0xed, 0xf5, 0xce, 0x99, 0x85,
      0xc6, 0x21, 0xb2, 0xf6, 0x45, 0x17, 0x2d, 0x73, 0xbe, 0xda, 0x6a, 0x93,
      0x60, 0xf9, 0x09, 0xcd, 0xcb, 0xfb, 0x0b, 0xce, 0x1b, 0x06, 0x41, 0xe8,
      0xe1, 0x72, 0xc3, 0x6c, 0x5f, 0xe4, 0x66, 0x0d, 0x4e, 0x08, 0x65, 0x9c,
      0x46, 0xc5, 0x7b, 0x04
    }
	},
	{
    //
    // PublicKey hash
    //
    {
      0x74, 0x61, 0x89, 0x8e, 0x6e, 0x62, 0x96, 0x2e, 0xdd, 0x64, 0x44, 0x71,
      0x45, 0xf0, 0xd9, 0xd0, 0x2b, 0xcc, 0x95, 0x19, 0x49, 0x20, 0x46, 0x67,
      0x1e, 0x1f, 0xcd, 0xdd, 0x18, 0xdc, 0x9b, 0x8b
    },
    //
    // Original PublicKey
    //
    /**
      E50AC288 2D44B7E3 3B67C51D AC639329 DA0363BD EAB5179F
      F88E460E E703D6CE 30383B25 0DE0E2FF 39386811 512A1A3B
      7531294F 9C512D28 FF56E5CD EB989342 B3A1A866 B41382A6
      2FB17D5D 3E97454A E19EB3C8 FA42F103 1DA21EEC 8D33BCE7
      8C4E3C55 EFF8A596 3A3CDAB7 2F475061 30FC1978 03DB6CA5
      A0FDC594 82EC0A3F 408364E3 4FAE9FD6 D5EBF633 357E3E7A
      3BA491D3 34A62604 B9CBF382 63BFF475 5168DB6D FBBA8669
      B7DB7280 218C4EAC 561CBF2F 932EAD6B 41159573 D7FF75B1
      9D65195F 0A41DC32 ED6F6D55 51716B6F 744ACD2D 3EE64FDE
      29742594 5ED2FF45 2B8CC72B C5D4C987 D0D1DC0A FC543E28
      F7A49046 8F434122 58F91106 8253C0B6
    **/
    //
    // PublicKey in format specified by Chromium project implementation
    //
    {
      0x40, 0x00, 0x00, 0x00, 0x13, 0x5d, 0xd4, 0x9e, 0xe5, 0x0a, 0xc2, 0x88,
      0x2d, 0x44, 0xb7, 0xe3, 0x3b, 0x67, 0xc5, 0x1d, 0xac, 0x63, 0x93, 0x29,
      0xda, 0x03, 0x63, 0xbd, 0xea, 0xb5, 0x17, 0x9f, 0xf8, 0x8e, 0x46, 0x0e,
      0xe7, 0x03, 0xd6, 0xce, 0x30, 0x38, 0x3b, 0x25, 0x0d, 0xe0, 0xe2, 0xff,
      0x39, 0x38, 0x68, 0x11, 0x51, 0x2a, 0x1a, 0x3b, 0x75, 0x31, 0x29, 0x4f,
      0x9c, 0x51, 0x2d, 0x28, 0xff, 0x56, 0xe5, 0xcd, 0xeb, 0x98, 0x93, 0x42,
      0xb3, 0xa1, 0xa8, 0x66, 0xb4, 0x13, 0x82, 0xa6, 0x2f, 0xb1, 0x7d, 0x5d,
      0x3e, 0x97, 0x45, 0x4a, 0xe1, 0x9e, 0xb3, 0xc8, 0xfa, 0x42, 0xf1, 0x03,
      0x1d, 0xa2, 0x1e, 0xec, 0x8d, 0x33, 0xbc, 0xe7, 0x8c, 0x4e, 0x3c, 0x55,
      0xef, 0xf8, 0xa5, 0x96, 0x3a, 0x3c, 0xda, 0xb7, 0x2f, 0x47, 0x50, 0x61,
      0x30, 0xfc, 0x19, 0x78, 0x03, 0xdb, 0x6c, 0xa5, 0xa0, 0xfd, 0xc5, 0x94,
      0x82, 0xec, 0x0a, 0x3f, 0x40, 0x83, 0x64, 0xe3, 0x4f, 0xae, 0x9f, 0xd6,
      0xd5, 0xeb, 0xf6, 0x33, 0x35, 0x7e, 0x3e, 0x7a, 0x3b, 0xa4, 0x91, 0xd3,
      0x34, 0xa6, 0x26, 0x04, 0xb9, 0xcb, 0xf3, 0x82, 0x63, 0xbf, 0xf4, 0x75,
      0x51, 0x68, 0xdb, 0x6d, 0xfb, 0xba, 0x86, 0x69, 0xb7, 0xdb, 0x72, 0x80,
      0x21, 0x8c, 0x4e, 0xac, 0x56, 0x1c, 0xbf, 0x2f, 0x93, 0x2e, 0xad, 0x6b,
      0x41, 0x15, 0x95, 0x73, 0xd7, 0xff, 0x75, 0xb1, 0x9d, 0x65, 0x19, 0x5f,
      0x0a, 0x41, 0xdc, 0x32, 0xed, 0x6f, 0x6d, 0x55, 0x51, 0x71, 0x6b, 0x6f,
      0x74, 0x4a, 0xcd, 0x2d, 0x3e, 0xe6, 0x4f, 0xde, 0x29, 0x74, 0x25, 0x94,
      0x5e, 0xd2, 0xff, 0x45, 0x2b, 0x8c, 0xc7, 0x2b, 0xc5, 0xd4, 0xc9, 0x87,
      0xd0, 0xd1, 0xdc, 0x0a, 0xfc, 0x54, 0x3e, 0x28, 0xf7, 0xa4, 0x90, 0x46,
      0x8f, 0x43, 0x41, 0x22, 0x58, 0xf9, 0x11, 0x06, 0x82, 0x53, 0xc0, 0xb6,
      0xa7, 0x3e, 0xe4, 0x73, 0x82, 0xbe, 0x69, 0xc7, 0x7c, 0x75, 0x84, 0xea,
      0xb2, 0x84, 0xaf, 0xff, 0x16, 0x2f, 0xe4, 0xce, 0x22, 0x68, 0xf6, 0x35,
      0x42, 0x90, 0xd7, 0x3a, 0x15, 0xee, 0x79, 0x8a, 0x54, 0x99, 0x93, 0x6e,
      0xde, 0x7b, 0x0d, 0xf9, 0x9b, 0xbc, 0xf4, 0xe5, 0xc1, 0xb0, 0x83, 0xf5,
      0x16, 0xfa, 0x50, 0x9c, 0x82, 0xf2, 0xf4, 0x18, 0x58, 0xa4, 0xa4, 0x04,
      0x29, 0x34, 0xa4, 0xb3, 0x47, 0xc5, 0x86, 0xf0, 0x1f, 0xb0, 0x8e, 0xce,
      0x18, 0xcd, 0x5f, 0x0a, 0x57, 0x17, 0x4b, 0x78, 0x2e, 0x80, 0xaa, 0x01,
      0xac, 0x86, 0xa4, 0xc5, 0x2b, 0x5b, 0xb6, 0x22, 0xd1, 0x50, 0xfc, 0x8f,
      0xce, 0x72, 0x05, 0x82, 0x59, 0xe6, 0xb7, 0x0f, 0xe9, 0x93, 0x58, 0x04,
      0xf1, 0x3e, 0xe7, 0x94, 0xd5, 0x4f, 0x65, 0x95, 0x8a, 0x77, 0x6b, 0x68,
      0xd3, 0x6a, 0xe6, 0x49, 0x6b, 0x79, 0xe2, 0x4b, 0x3f, 0x3e, 0x83, 0x0c,
      0x3d, 0x00, 0x51, 0x87, 0xbb, 0x90, 0x56, 0x47, 0xb5, 0x23, 0x88, 0x4c,
      0xd0, 0x75, 0x7a, 0xf1, 0xbc, 0x46, 0x61, 0xa6, 0xeb, 0x80, 0xb9, 0x0e,
      0xec, 0x28, 0x22, 0x5a, 0x27, 0x8a, 0x92, 0xe1, 0x56, 0x54, 0xe8, 0xc7,
      0xbe, 0x3d, 0x11, 0xa7, 0x67, 0xf8, 0xa7, 0x89, 0x02, 0xb2, 0xf4, 0xf4,
      0xe7, 0x31, 0x86, 0xe8, 0x7c, 0x7c, 0xa2, 0xfc, 0xe8, 0x3c, 0xd2, 0xfa,
      0xe3, 0xf6, 0x34, 0xfc, 0x48, 0x1b, 0xf0, 0x46, 0x34, 0xb8, 0x36, 0x80,
      0x35, 0xbe, 0xdc, 0xd3, 0x60, 0x6c, 0x79, 0x66, 0x03, 0x03, 0x7e, 0xe0,
      0xba, 0xdb, 0xb6, 0x1d, 0x6a, 0xed, 0x24, 0x31, 0x0c, 0x81, 0xf9, 0x54,
      0xba, 0xf1, 0x02, 0x53, 0x21, 0x93, 0xea, 0x6d, 0x93, 0x6d, 0x6a, 0x85,
      0x37, 0x2e, 0x4c, 0x39, 0x19, 0xa0, 0x4e, 0x43, 0xe0, 0xcc, 0xd9, 0x87,
      0x2c, 0xd1, 0x2c, 0x3e
    }
	}
};

extern APPLE_PK_ENTRY PkDataBase[NUM_OF_PK];

#endif //APPLE_PK_DB_H
