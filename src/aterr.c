/**************************************************************************
*
* Copyright (c) 2017, luotang.me <wypx520@gmail.com>, China.
* All rights reserved.
*
* Distributed under the terms of the GNU General Public License v2.
*
* This software is provided 'as is' with no explicit or implied warranties
* in respect of its properties, including, but not limited to, correctness
* and/or fitness for purpose.
*
**************************************************************************/

 #include "aterr.h"
 
 static char* _request_errmsg_map[] = {
	 "E_USB_TTY_EXIST",
	 "E_USB_TTY_NOT_EXIST / E_USB_ID_BSP_SUPPORT",
	 "E_USB_TTY_UNAVAILABLE",
	 "E_USB_TTY_AVAILABLE",
	 
	 "E_USB_DRIVER_FILE_FOUND",
	 "E_USB_DRIVER_FILE_NOT_FOUND",
	 "E_USB_DRIVER_FILE_OPEN_FAIL",
	 "E_USB_DRIVER_INSTALLED",
	 "E_USB_DRIVER_NOT_INSTALLED",
 
	 "E_USB_ID_FILE_FOUND",
	 "E_USB_ID_FILE_NOT_FOUND",
	 "E_USB_ID_FILE_OEPN_FAIL",
	 
	 "E_USB_ID_FOUND",
	 "E_USB_ID_NOT_FOUND / E_USB_DEV_NOT_POWER_ON",
	 "E_USB_ID_NOT_FOUND / E_USB_DEV_NOT_POWER_ON",
	 "E_USB_ID_APP_SUPPORT",
	 "E_USB_ID_APP_NOT_SUPPORT",
	 "E_USB_TTY_NOT_EXIST / E_USB_ID_BSP_SUPPORT",
	 "E_USB_ID_BSP_NOT_SUPPORT",

	"E_AT_OPEN_SUCC",
	"E_AT_OPEN_FAIL",
	
	"E_AT_TEST_OK",
	"E_AT_TEST_ERR",
	
	"E_USB_HARDWARE_OK / SIM READY",
	
	 "E_RES"
 };
 
 static char* _request_errmsg_map_zh[] = {
	 "ttyUSB�ڴ���",
	 "ttyUSB�ڲ����� / �ں˲�֧�ָ�USB ID",
	 "ttyUSB�ڲ�����(����AT, AT+CGMM��ͨ��)",
	 "ttyUSB�ڿ���(����AT, AT+CGMMͨ��)",
	 
	 "�����ļ��ҵ�",
	 "�����ļ�δ�ҵ�",
	 "�����ļ���ʧ��",
	 "�����Ѿ���װ",
	 "����δ��װ",
 
	 "USB ID�ļ��ҵ�",
	 "USB ID�ļ�δ�ҵ�",
	 "USB ID�ļ���ʧ��",
	 
	 "USB ID�ҵ�",
	 "USB IDδ�ҵ� / USB δ�ϵ�",
	 "USB IDδ�ҵ� / USB δ�ϵ�",
	 "USB Ӧ��֧��",
	 "USB Ӧ�ò�֧��",
	 "USB�ڲ����� / �ں˲�֧�ָ� USB ID",
	 "�ں˲�֧�ָ� USB ID",

	"AT �ڴ򿪳ɹ�",
	"AT �ڴ�ʧ��",
	
	"AT ����ָ��ɹ�",
	"AT ����ָ��ʧ��",
	
	"4G ģ��Ӳ��Ŀ��OK / ʶ��SIM���ɹ�",
	
	 "����"
 };
 
 
 char *error_request(usbdev_error request_stat)
 {
	 return _request_errmsg_map[request_stat];
 }


