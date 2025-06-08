#include "boards/pico2.h"
#undef PICO_RP2350A
#define PICO_RP2350B 1

#ifndef NEOPIXEL
#define NEOPIXEL (0)
#endif

#ifndef MPPT_SHDN_2
#define MPPT_SHDN_2 (1)
#endif

#ifndef MPPT_STAT_2
#define MPPT_STAT_2 (2)
#endif

#ifndef BAT_HEATER_B
#define BAT_HEATER_B (3)
#endif

#ifndef SDA
#define SDA (4)
#endif

#ifndef SDA0
#define SDA0 (4)
#endif

#ifndef SCL
#define SCL (5)
#endif

#ifndef SCL0
#define SCL0 (5)
#endif

#ifndef WATCHDOG_FEED
#define WATCHDOG_FEED (6)
#endif

#ifndef MPPT_STAT_1
#define MPPT_STAT_1 (7)
#endif

#ifndef MPPT_SHDN_1
#define MPPT_SHDN_1 (8)
#endif

#ifndef SIDEDEPLYDETECTB
#define SIDEDEPLYDETECTB (9)
#endif

#ifndef SIDEDEPLYDETECTA
#define SIDEDEPLYDETECTA (10)
#endif

#ifndef RF_RST
#define RF_RST (11)
#endif

#ifndef RF_MISO
#define RF_MISO (12)
#endif

#ifndef MISO0
#define MISO0 (12)
#endif

#ifndef RF_CS
#define RF_CS (13)
#endif

#ifndef RF_SCK
#define RF_SCK (14)
#endif

#ifndef SCK0
#define SCK0 (14)
#endif

#ifndef RF_MOSI
#define RF_MOSI (15)
#endif

#ifndef MOSI0
#define MOSI0 (15)
#endif

#ifndef SD_MISO
#define SD_MISO (16)
#endif

#ifndef SD_CS
#define SD_CS (17)
#endif

#ifndef SD_SCK
#define SD_SCK (18)
#endif

#ifndef SD_MOSI
#define SD_MOSI (19)
#endif

#ifndef RF_IO0
#define RF_IO0 (20)
#endif

#ifndef ENAB_RF
#define ENAB_RF (21)
#endif

#ifndef ADCS_POR
#define ADCS_POR (22)
#endif

#ifndef ADCS_EN_LP
#define ADCS_EN_LP (23)
#endif

#ifndef ADCS_TX
#define ADCS_TX (24)
#endif

#ifndef UART0_TX
#define UART0_TX (24) // ADCS TX is also UART0 TX
#endif

#ifndef ADCS_RX
#define ADCS_RX (25)
#endif

#ifndef UART0_RX
#define UART0_RX (25) // ADCS RX is also UART0 RX
#endif

#ifndef ADCS_EN
#define ADCS_EN (26)
#endif

#ifndef ADCS_PGOOD
#define ADCS_PGOOD (27)
#endif

#ifndef NC
#define NC (28)
#endif

#ifndef RPI_ENAB
#define RPI_ENAB (29)
#endif

#ifndef RPI_UART_TO_PI
#define RPI_UART_TO_PI (30)
#endif

#ifndef UART1_TX
#define UART1_TX (30) // RPI UART to PI is also UART1 TX
#endif

#ifndef RPI_UART_FROM_PI
#define RPI_UART_FROM_PI (31)
#endif

#ifndef UART1_RX
#define UART1_RX (31) // RPI UART from PI is also UART1 RX
#endif

#ifndef RPI_RST
#define RPI_RST (32)
#endif

#ifndef FIXED_SOLAR_FAULT
#define FIXED_SOLAR_FAULT (33)
#endif

#ifndef FIXED_SOLAR_CHRG
#define FIXED_SOLAR_CHRG (34)
#endif

#ifndef ENAB_BURN_B
#define ENAB_BURN_B (35)
#endif

#ifndef ENAB_BURN_A
#define ENAB_BURN_A (36)
#endif

#ifndef ENAB_BURN_B
#define ENAB_BURN_B (37)
#endif

#ifndef SDA_PWR
#define SDA_PWR (38)
#endif

#ifndef SDA1
#define SDA1 (38)
#endif

#ifndef SCL_PWR
#define SCL_PWR (39)
#endif

#ifndef SCL1
#define SCL1 (39)
#endif

#ifndef RPI_TEMP
#define RPI_TEMP (40)
#endif

#ifndef SENSE_THERM_A
#define SENSE_THERM_A (41)
#endif

#ifndef RBF
#define RBF (42) 
#endif

#ifndef BATTERY
#define BATTERY (43)
#endif

#ifndef BURN_RELAY_A
#define BURN_RELAY_A (44)
#endif

#ifndef SDA_PWR2
#define SDA_PWR2 (45)
#endif

#ifndef SCL_PWR2
#define SCL_PWR2 (46)
#endif

#ifndef SENSE_THERM_B
#define SENSE_THERM_B (47)
#endif
