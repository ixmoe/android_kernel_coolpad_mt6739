/*
 * Generated by MTK SP DrvGen Version: 3.5.160809 for MT6739.
 * 2019-11-11 10:46:44
 * Do Not Modify The File.
 * Copyright Mediatek Inc. (c) 2016.
*/

#ifndef __CUST_EINT_MD1_H
#define __CUST_EINT_MD1_H

#define CUST_EINT_MD_LEVEL_SENSITIVE		0
#define CUST_EINT_MD_EDGE_SENSITIVE		1

#define PAD_EINT10		1
#define PAD_CMPCLK		0
#define PAD_BPI_BUS13		0
#define PAD_KP2ROW		0
#define PAD_CMMCLK1		0
#define PAD_BPI_BUS10		2
#define PAD_SPI1_MO		2
#define PAD_SPI1_MI		1
#define PAD_BPI_BUS17		1
#define PAD_EINT3		1
#define PAD_ANT_SEL0		1
#define PAD_ANT_SEL1		2
#define PAD_EINT5		0
#define PAD_EINT4		2

#define CUST_EINT_POLARITY_LOW		0
#define CUST_EINT_POLARITY_HIGH		1

#define CUST_EINT_LEVEL_SENSITIVE		0
#define CUST_EINT_EDGE_SENSITIVE		1

#define CUST_EINT_MD1_0_NAME			"MD1_SIM1_HOT_PLUG_EINT"
#define CUST_EINT_MD1_0_NUM			0
#define CUST_EINT_MD1_0_DEBOUNCE_CN		100
#define CUST_EINT_MD1_0_POLARITY		CUST_EINT_POLARITY_HIGH
#define CUST_EINT_MD1_0_SENSITIVE		CUST_EINT_MD_LEVEL_SENSITIVE
#define CUST_EINT_MD1_0_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_ENABLE
#define CUST_EINT_MD1_0_DEDICATED_EN		0
#define CUST_EINT_MD1_0_SRCPIN			PAD_SPI1_MI

#define CUST_EINT_MD1_1_NAME			"MD1_SIM2_HOT_PLUG_EINT"
#define CUST_EINT_MD1_1_NUM			1
#define CUST_EINT_MD1_1_DEBOUNCE_CN		100
#define CUST_EINT_MD1_1_POLARITY		CUST_EINT_POLARITY_HIGH
#define CUST_EINT_MD1_1_SENSITIVE		CUST_EINT_MD_LEVEL_SENSITIVE
#define CUST_EINT_MD1_1_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_ENABLE
#define CUST_EINT_MD1_1_DEDICATED_EN		0
#define CUST_EINT_MD1_1_SRCPIN			PAD_SPI1_MO

#define CUST_EINT_MD1_CNT			2


#endif /* __CUST_EINT_MD1_H */
