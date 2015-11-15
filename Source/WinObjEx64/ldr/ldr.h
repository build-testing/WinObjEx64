/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2015
*
*  TITLE:       LDR.H
*
*  VERSION:     1.32
*
*  DATE:        12 Nov 2015
*
*  Common header file for PE loader unit.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/

#pragma once

LPVOID peldrLoadImage(
	_In_ LPVOID Buffer,
	_Out_opt_ PDWORD SizeOfImage
	);
