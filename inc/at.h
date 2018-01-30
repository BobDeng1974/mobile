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


 struct at_info {
 	 int	 stat;
	 int	 sim;
	 int	 oper;
	 char	 mode_name[16];
	 int	 mode;
	 int	 csq;
 };
 
 typedef enum {
	 SIM_ABSENT 	 = 0,
	 SIM_NOT_READY	 = 1,
	 SIM_READY		 = 2, /* SIM_READY means the radio state is RADIO_STATE_SIM_READY */
	 SIM_PIN		 = 3,
	 SIM_PUK		 = 4,
	 SIM_NETWORK_PERSONALIZATION = 5,
	 RUIM_ABSENT	 = 6,
	 RUIM_NOT_READY  = 7,
	 RUIM_READY 	 = 8,
	 RUIM_PIN		 = 9,
	 RUIM_PUK		 = 10,
	 RUIM_NETWORK_PERSONALIZATION = 11
 } SIM_Status;

 /* ��Ӫ�� */
typedef enum
{
	CHINA_MOBILE 		= 0,
	CHINA_UNICOM 		= 1,
	CHINA_TELECOM 		= 2,
	UNKNOWN,
}SIM_OPERATOR;

 typedef enum {
	RADIO_STATE_OFF = 0,
	RADIO_STATE_ON  = 1,
}RADIO_STATE;

typedef enum
{
	CFUN_LPM_MODE 		= 0,		/* �͹��ģ����ٹ���ģʽ */
	CFUN_ONLINE_MODE 	= 1,		/* ���ߣ�ȫ������ģʽ */
	CFUN_OFFLINE_MODE	= 4,		/* ����ģʽ */
	CFUN_FTM_MODE 		= 5,		/* ��������ģʽ */
	CFUN_RESTART_MS 	= 6,		/* ����MS ��������֮ǰ��Ҫ��ģʽ����ΪOfflineģʽ,ע:�����Ҫ����resetģ�飬��Ҫ������at+cfun=7,ʹ��ģ�����offline mode,Ȼ��������at+cfun=6*/
	CFUN_RADIO_OFF 		= 7			/* ��Ƶ�رգ�Offlineģʽ */
}PHONE_FUNCTION;

typedef enum
{
	PDP_DEACTIVE = 0,
	PDP_ACTIVE	
}PDP_STATUS;

/* Modem Technology bits */
/* ģ����ʽ */
typedef enum
{
	MODE_NONE			= 0,		/*NO SERVICE*/
	MODE_CDMA1X			= 2,		/*CDMA*/
	MODE_GPRS			= 3,		/*GSM/GPRS*/
	MODE_EVDO			= 4,		/*HDR(EVDO)*/
	MODE_WCDMA			= 5,		/*WCDMA*/
	MODE_GSMWCDMA		= 7,		/*GSM/WCDMA*/
	MODE_HYBRID			= 8,		/*HYBRID(CDMA��EVDO���ģʽ)*/
	MODE_TDLTE 			= 9,		/*TDLTE*/
	MODE_FDDLTE 		= 10,		/*FDDLTE(2)*/
	MODE_TDSCDMA		= 15		/*TD-SCDMA*/
}MDM;



char *oper_request(SIM_OPERATOR request_oper);


