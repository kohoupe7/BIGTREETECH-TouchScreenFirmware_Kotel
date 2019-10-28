#include "Language.h"
#include "includes.h"
#include "language_en.h"
#include "language_cn.h"
#include "language_ru.h"
#include "language_jp.h"
#include "language_de.h"
#include "language_am.h"
#include "language_cz.h"

const char *const en_pack[LABEL_NUM]={
  EN_LANGUAGE,
  EN_HEAT,
  EN_MOVE,
  EN_HOME,
  EN_PRINT,
  EN_EXTRUDE,
  EN_FAN,
  EN_SETTINGS,
  EN_LEVELING,
  EN_POINT_1,
  EN_POINT_2,
  EN_POINT_3,
  EN_POINT_4,
  EN_ABL,
  EN_INC,
  EN_DEC,
  EN_NOZZLE,
  EN_BED,
  EN_STOP,
  EN_BACK,
  EN_PAGE_UP,
  EN_PAGE_DOWN,
  EN_PAUSE,
  EN_RESUME,
  EN_LOAD,
  EN_UNLOAD,
  EN_SLOW_SPEED,
  EN_NORMAL_SPEED,
  EN_FAST_SPEED,
  EN_FAN_FULL_SPEED,
  EN_FAN_HALF_SPEED,
  EN_ROTATE_UI,
  EN_TOUCHSCREEN_ADJUST,
  EN_MORESETTING,
  EN_SCREEN_INFO,
  EN_WHITE,
  EN_BLACK,
  EN_BLUE,
  EN_RED,
  EN_GREEN,
  EN_CYAN,
  EN_YELLOW,
  EN_BROWN,
  EN_GRAY,
  EN_DISCONNECT,
  EN_BAUDRATE_115200,
  EN_BAUDRATE_250000,
  EN_RUNOUT_OFF,
  EN_RUNOUT_ON,
  EN_PERCENTAGE,
  EN_BABYSTEP,
  EN_PERCENTAGE_SPEED,
  EN_PERCENTAGE_FLOW,
  EN_VALUE_ZERO,
  EN_1_DEGREE,
  EN_5_DEGREE,
  EN_10_DEGREE,
  EN_X_INC,
  EN_Y_INC,
  EN_Z_INC,
  EN_X_DEC,
  EN_Y_DEC,
  EN_Z_DEC,
  EN_X_HOME,
  EN_Y_HOME,
  EN_Z_HOME,
  EN_001_MM,
  EN_01_MM,
  EN_1_MM,
  EN_5_MM,
  EN_10_MM,
  EN_1_PERCENT,
  EN_5_PERCENT,
  EN_10_PERCENT,

  EN_READY,
  EN_BUSY,
  EN_UNCONNECTED,
  EN_DISCONNECT_INFO,
  EN_LOADING,
  EN_POWER_FAILED,
  EN_CONTINUE,
  EN_CANNEL,
  EN_ADJUST_TITLE,
  EN_ADJUST_INFO,
  EN_ADJUST_OK,
  EN_ADJUST_FAILED,
  EN_WARNING,
  EN_STOP_PRINT,
  EN_CONFIRM,
  EN_TFTSD,
  EN_READ_TFTSD_ERROR,
  EN_TFTSD_INSERTED,
  EN_TFTSD_REMOVED,
  EN_U_DISK,
  EN_READ_U_DISK_ERROR,
  EN_U_DISK_INSERTED,
  EN_U_DISK_REMOVED,
  EN_ONBOARDSD,
  EN_READ_ONBOARDSD_ERROR,
  EN_FILAMENT_RUNOUT
};

const char *const cn_pack[LABEL_NUM]={
  CN_LANGUAGE,
  CN_HEAT,
  CN_MOVE,
  CN_HOME,
  CN_PRINT,
  CN_EXTRUDE,
  CN_FAN,
  CN_SETTINGS,
  CN_LEVELING,
  CN_POINT_1,
  CN_POINT_2,
  CN_POINT_3,
  CN_POINT_4,
  CN_ABL,
  CN_INC,
  CN_DEC,
  CN_NOZZLE,
  CN_BED,
  CN_STOP,
  CN_BACK,
  CN_PAGE_UP,
  CN_PAGE_DOWN,
  CN_PAUSE,
  CN_RESUME,
  CN_LOAD,
  CN_UNLOAD,
  CN_SLOW_SPEED,
  CN_NORMAL_SPEED,
  CN_FAST_SPEED,
  CN_FAN_FULL_SPEED,
  CN_FAN_HALF_SPEED,
  CN_ROTATE_UI,
  CN_TOUCHSCREEN_ADJUST,
  CN_MORESETTING,
  CN_SCREEN_INFO,
  CN_WHITE,
  CN_BLACK,
  CN_BLUE,
  CN_RED,
  CN_GREEN,
  CN_CYAN,
  CN_YELLOW,
  CN_BROWN,
  CN_GRAY,
  CN_DISCONNECT,
  CN_BAUDRATE_115200,
  CN_BAUDRATE_250000,
  CN_RUNOUT_OFF,
  CN_RUNOUT_ON,
  CN_PERCENTAGE,
  CN_BABYSTEP,
  CN_PERCENTAGE_SPEED,
  CN_PERCENTAGE_FLOW,
  CN_VALUE_ZERO,
  CN_1_DEGREE,
  CN_5_DEGREE,
  CN_10_DEGREE,
  CN_X_INC,
  CN_Y_INC,
  CN_Z_INC,
  CN_X_DEC,
  CN_Y_DEC,
  CN_Z_DEC,
  CN_X_HOME,
  CN_Y_HOME,
  CN_Z_HOME,
  CN_001_MM,
  CN_01_MM,
  CN_1_MM,
  CN_5_MM,
  CN_10_MM,
  CN_1_PERCENT,
  CN_5_PERCENT,
  CN_10_PERCENT,

  CN_READY,
  CN_BUSY,
  CN_UNCONNECTED,
  CN_DISCONNECT_INFO,
  CN_LOADING,
  CN_POWER_FAILED,
  CN_CONTINUE,
  CN_CANNEL,
  CN_ADJUST_TITLE,
  CN_ADJUST_INFO,
  CN_ADJUST_OK,
  CN_ADJUST_FAILED,
  CN_WARNING,
  CN_STOP_PRINT,
  CN_CONFIRM,
  CN_TFTSD,
  CN_READ_TFTSD_ERROR,
  CN_TFTSD_INSERTED,
  CN_TFTSD_REMOVED,
  CN_U_DISK,
  CN_READ_U_DISK_ERROR,
  CN_U_DISK_INSERTED,
  CN_U_DISK_REMOVED,
  CN_ONBOARDSD,
  CN_READ_ONBOARDSD_ERROR,
  CN_FILAMENT_RUNOUT
};

const char *const ru_pack[LABEL_NUM]={
  RU_LANGUAGE,
  RU_HEAT,
  RU_MOVE,
  RU_HOME,
  RU_PRINT,
  RU_EXTRUDE,
  RU_FAN,
  RU_SETTINGS,
  RU_LEVELING,
  RU_POINT_1,
  RU_POINT_2,
  RU_POINT_3,
  RU_POINT_4,
  RU_ABL,
  RU_INC,
  RU_DEC,
  RU_NOZZLE,
  RU_BED,
  RU_STOP,
  RU_BACK,
  RU_PAGE_UP,
  RU_PAGE_DOWN,
  RU_PAUSE,
  RU_RESUME,
  RU_LOAD,
  RU_UNLOAD,
  RU_SLOW_SPEED,
  RU_NORMAL_SPEED,
  RU_FAST_SPEED,
  RU_FAN_FULL_SPEED,
  RU_FAN_HALF_SPEED,
  RU_ROTATE_UI,
  RU_TOUCHSCREEN_ADJUST,
  RU_MORESETTING,
  RU_SCREEN_INFO,
  RU_WHITE,
  RU_BLACK,
  RU_BLUE,
  RU_RED,
  RU_GREEN,
  RU_CYAN,
  RU_YELLOW,
  RU_BROWN,
  RU_GRAY,
  RU_DISCONNECT,
  RU_BAUDRATE_115200,
  RU_BAUDRATE_250000,
  RU_RUNOUT_OFF,
  RU_RUNOUT_ON,
  RU_PERCENTAGE,
  RU_BABYSTEP,
  RU_PERCENTAGE_SPEED,
  RU_PERCENTAGE_FLOW,
  RU_VALUE_ZERO,
  RU_1_DEGREE,
  RU_5_DEGREE,
  RU_10_DEGREE,
  RU_X_INC,
  RU_Y_INC,
  RU_Z_INC,
  RU_X_DEC,
  RU_Y_DEC,
  RU_Z_DEC,
  RU_X_HOME,
  RU_Y_HOME,
  RU_Z_HOME,
  RU_001_MM,
  RU_01_MM,
  RU_1_MM,
  RU_5_MM,
  RU_10_MM,
  RU_1_PERCENT,
  RU_5_PERCENT,
  RU_10_PERCENT,

  RU_READY,
  RU_BUSY,
  RU_UNCONNECTED,
  RU_DISCONNECT_INFO,
  RU_LOADING,
  RU_POWER_FAILED,
  RU_CONTINUE,
  RU_CANNEL,
  RU_ADJUST_TITLE,
  RU_ADJUST_INFO,
  RU_ADJUST_OK,
  RU_ADJUST_FAILED,
  RU_WARNING,
  RU_STOP_PRINT,
  RU_CONFIRM,
  RU_TFTSD,
  RU_READ_TFTSD_ERROR,
  RU_TFTSD_INSERTED,
  RU_TFTSD_REMOVED,
  RU_U_DISK,
  RU_READ_U_DISK_ERROR,
  RU_U_DISK_INSERTED,
  RU_U_DISK_REMOVED,
  RU_ONBOARDSD,
  RU_READ_ONBOARDSD_ERROR,
  RU_FILAMENT_RUNOUT
};

const char *const jp_pack[LABEL_NUM]={
  JP_LANGUAGE,
  JP_HEAT,
  JP_MOVE,
  JP_HOME,
  JP_PRINT,
  JP_EXTRUDE,
  JP_FAN,
  JP_SETTINGS,
  JP_LEVELING,
  JP_POINT_1,
  JP_POINT_2,
  JP_POINT_3,
  JP_POINT_4,
  JP_ABL,
  JP_INC,
  JP_DEC,
  JP_NOZZLE,
  JP_BED,
  JP_STOP,
  JP_BACK,
  JP_PAGE_UP,
  JP_PAGE_DOWN,
  JP_PAUSE,
  JP_RESUME,
  JP_LOAD,
  JP_UNLOAD,
  JP_SLOW_SPEED,
  JP_NORMAL_SPEED,
  JP_FAST_SPEED,
  JP_FAN_FULL_SPEED,
  JP_FAN_HALF_SPEED,
  JP_ROTATE_UI,
  JP_TOUCHSCREEN_ADJUST,
  JP_MORESETTING,
  JP_SCREEN_INFO,
  JP_WHITE,
  JP_BLACK,
  JP_BLUE,
  JP_RED,
  JP_GREEN,
  JP_CYAN,
  JP_YELLOW,
  JP_BROWN,
  JP_GRAY,
  JP_DISCONNECT,
  JP_BAUDRATE_115200,
  JP_BAUDRATE_250000,
  JP_RUNOUT_OFF,
  JP_RUNOUT_ON,
  JP_PERCENTAGE,
  JP_BABYSTEP,
  JP_PERCENTAGE_SPEED,
  JP_PERCENTAGE_FLOW,
  JP_VALUE_ZERO,
  JP_1_DEGREE,
  JP_5_DEGREE,
  JP_10_DEGREE,
  JP_X_INC,
  JP_Y_INC,
  JP_Z_INC,
  JP_X_DEC,
  JP_Y_DEC,
  JP_Z_DEC,
  JP_X_HOME,
  JP_Y_HOME,
  JP_Z_HOME,
  JP_001_MM,
  JP_01_MM,
  JP_1_MM,
  JP_5_MM,
  JP_10_MM,
  JP_1_PERCENT,
  JP_5_PERCENT,
  JP_10_PERCENT,

  JP_READY,
  JP_BUSY,
  JP_UNCONNECTED,
  JP_DISCONNECT_INFO,
  JP_LOADING,
  JP_POWER_FAILED,
  JP_CONTINUE,
  JP_CANNEL,
  JP_ADJUST_TITLE,
  JP_ADJUST_INFO,
  JP_ADJUST_OK,
  JP_ADJUST_FAILED,
  JP_WARNING,
  JP_STOP_PRINT,
  JP_CONFIRM,
  JP_TFTSD,
  JP_READ_TFTSD_ERROR,
  JP_TFTSD_INSERTED,
  JP_TFTSD_REMOVED,
  JP_U_DISK,
  JP_READ_U_DISK_ERROR,
  JP_U_DISK_INSERTED,
  JP_U_DISK_REMOVED,
  JP_ONBOARDSD,
  JP_READ_ONBOARDSD_ERROR,
  JP_FILAMENT_RUNOUT
};

const char *const am_pack[LABEL_NUM]={
  AM_LANGUAGE,
  AM_HEAT,
  AM_MOVE,
  AM_HOME,
  AM_PRINT,
  AM_EXTRUDE,
  AM_FAN,
  AM_SETTINGS,
  AM_LEVELING,
  AM_POINT_1,
  AM_POINT_2,
  AM_POINT_3,
  AM_POINT_4,
  AM_ABL,
  AM_INC,
  AM_DEC,
  AM_NOZZLE,
  AM_BED,
  AM_STOP,
  AM_BACK,
  AM_PAGE_UP,
  AM_PAGE_DOWN,
  AM_PAUSE,
  AM_RESUME,
  AM_LOAD,
  AM_UNLOAD,
  AM_SLOW_SPEED,
  AM_NORMAL_SPEED,
  AM_FAST_SPEED,
  AM_FAN_FULL_SPEED,
  AM_FAN_HALF_SPEED,
  AM_ROTATE_UI,
  AM_TOUCHSCREEN_ADJUST,
  AM_MORESETTING,
  AM_SCREEN_INFO,
  AM_WHITE,
  AM_BLACK,
  AM_BLUE,
  AM_RED,
  AM_GREEN,
  AM_CYAN,
  AM_YELLOW,
  AM_BROWN,
  AM_GRAY,
  AM_DISCONNECT,
  AM_BAUDRATE_115200,
  AM_BAUDRATE_250000,
  AM_RUNOUT_OFF,
  AM_RUNOUT_ON,
  AM_PERCENTAGE,
  AM_BABYSTEP,
  AM_PERCENTAGE_SPEED,
  AM_PERCENTAGE_FLOW,
  AM_VALUE_ZERO,
  AM_1_DEGREE,
  AM_5_DEGREE,
  AM_10_DEGREE,
  AM_X_INC,
  AM_Y_INC,
  AM_Z_INC,
  AM_X_DEC,
  AM_Y_DEC,
  AM_Z_DEC,
  AM_X_HOME,
  AM_Y_HOME,
  AM_Z_HOME,
  AM_001_MM,
  AM_01_MM,
  AM_1_MM,
  AM_5_MM,
  AM_10_MM,
  AM_1_PERCENT,
  AM_5_PERCENT,
  AM_10_PERCENT,

  AM_READY,
  AM_BUSY,
  AM_UNCONNECTED,
  AM_DISCONNECT_INFO,
  AM_LOADING,
  AM_POWER_FAILED,
  AM_CONTINUE,
  AM_CANNEL,
  AM_ADJUST_TITLE,
  AM_ADJUST_INFO,
  AM_ADJUST_OK,
  AM_ADJUST_FAILED,
  AM_WARNING,
  AM_STOP_PRINT,
  AM_CONFIRM,
  AM_TFTSD,
  AM_READ_TFTSD_ERROR,
  AM_TFTSD_INSERTED,
  AM_TFTSD_REMOVED,
  AM_U_DISK,
  AM_READ_U_DISK_ERROR,
  AM_U_DISK_INSERTED,
  AM_U_DISK_REMOVED,
  AM_ONBOARDSD,
  AM_READ_ONBOARDSD_ERROR,
  AM_FILAMENT_RUNOUT
};

const char *const de_pack[LABEL_NUM]={
  DE_LANGUAGE,
  DE_HEAT,
  DE_MOVE,
  DE_HOME,
  DE_PRINT,
  DE_EXTRUDE,
  DE_FAN,
  DE_SETTINGS,
  DE_LEVELING,
  DE_POINT_1,
  DE_POINT_2,
  DE_POINT_3,
  DE_POINT_4,
  DE_ABL,
  DE_INC,
  DE_DEC,
  DE_NOZZLE,
  DE_BED,
  DE_STOP,
  DE_BACK,
  DE_PAGE_UP,
  DE_PAGE_DOWN,
  DE_PAUSE,
  DE_RESUME,
  DE_LOAD,
  DE_UNLOAD,
  DE_SLOW_SPEED,
  DE_NORMAL_SPEED,
  DE_FAST_SPEED,
  DE_FAN_FULL_SPEED,
  DE_FAN_HALF_SPEED,
  DE_ROTATE_UI,
  DE_TOUCHSCREDE_ADJUST,
  DE_MORESETTING,
  DE_SCREDE_INFO,
  DE_WHITE,
  DE_BLACK,
  DE_BLUE,
  DE_RED,
  DE_GREEN,
  DE_CYAN,
  DE_YELLOW,
  DE_BROWN,
  DE_GRAY,
  DE_DISCONNECT,
  DE_BAUDRATE_115200,
  DE_BAUDRATE_250000,
  DE_RUNOUT_OFF,
  DE_RUNOUT_ON,
  DE_PERCENTAGE,
  DE_BABYSTEP,
  DE_PERCENTAGE_SPEED,
  DE_PERCENTAGE_FLOW,
  DE_VALUE_ZERO,
  DE_1_DEGREE,
  DE_5_DEGREE,
  DE_10_DEGREE,
  DE_X_INC,
  DE_Y_INC,
  DE_Z_INC,
  DE_X_DEC,
  DE_Y_DEC,
  DE_Z_DEC,
  DE_X_HOME,
  DE_Y_HOME,
  DE_Z_HOME,
  DE_001_MM,
  DE_01_MM,
  DE_1_MM,
  DE_5_MM,
  DE_10_MM,
  DE_1_PERCENT,
  DE_5_PERCENT,
  DE_10_PERCENT,

  DE_READY,
  DE_BUSY,
  DE_UNCONNECTED,
  DE_DISCONNECT_INFO,
  DE_LOADING,
  DE_POWER_FAILED,
  DE_CONTINUE,
  DE_CANNEL,
  DE_ADJUST_TITLE,
  DE_ADJUST_INFO,
  DE_ADJUST_OK,
  DE_ADJUST_FAILED,
  DE_WARNING,
  DE_STOP_PRINT,
  DE_CONFIRM,
  DE_TFTSD,
  DE_READ_TFTSD_ERROR,
  DE_TFTSD_INSERTED,
  DE_TFTSD_REMOVED,
  DE_U_DISK,
  DE_READ_U_DISK_ERROR,
  DE_U_DISK_INSERTED,
  DE_U_DISK_REMOVED,
  DE_ONBOARDSD,
  DE_READ_ONBOARDSD_ERROR,
  DE_FILAMENT_RUNOUT
};

const char *const cz_pack[LABEL_NUM]={
  CZ_LANGUAGE,
  CZ_HEAT,
  CZ_MOVE,
  CZ_HOME,
  CZ_PRINT,
  CZ_EXTRUDE,
  CZ_FAN,
  CZ_SETTINGS,
  CZ_LEVELING,
  CZ_POINT_1,
  CZ_POINT_2,
  CZ_POINT_3,
  CZ_POINT_4,
  CZ_ABL,
  CZ_INC,
  CZ_DEC,
  CZ_NOZZLE,
  CZ_BED,
  CZ_STOP,
  CZ_BACK,
  CZ_PAGE_UP,
  CZ_PAGE_DOWN,
  CZ_PAUSE,
  CZ_RESUME,
  CZ_LOAD,
  CZ_UNLOAD,
  CZ_SLOW_SPEED,
  CZ_NORMAL_SPEED,
  CZ_FAST_SPEED,
  CZ_FAN_FULL_SPEED,
  CZ_FAN_HALF_SPEED,
  CZ_ROTATE_UI,
  CZ_TOUCHSCREEN_ADJUST,
  CZ_MORESETTING,
  CZ_SCREEN_INFO,
  CZ_WHITE,
  CZ_BLACK,
  CZ_BLUE,
  CZ_RED,
  CZ_GREEN,
  CZ_CYAN,
  CZ_YELLOW,
  CZ_BROWN,
  CZ_GRAY,
  CZ_DISCONNECT,
  CZ_BAUDRATE_115200,
  CZ_BAUDRATE_250000,
  CZ_RUNOUT_OFF,
  CZ_RUNOUT_ON,
  CZ_PERCENTAGE,
  CZ_BABYSTEP,
  CZ_PERCENTAGE_SPEED,
  CZ_PERCENTAGE_FLOW,
  CZ_VALUE_ZERO,
  CZ_1_DEGREE,
  CZ_5_DEGREE,
  CZ_10_DEGREE,
  CZ_X_INC,
  CZ_Y_INC,
  CZ_Z_INC,
  CZ_X_DEC,
  CZ_Y_DEC,
  CZ_Z_DEC,
  CZ_X_HOME,
  CZ_Y_HOME,
  CZ_Z_HOME,
  CZ_001_MM,
  CZ_01_MM,
  CZ_1_MM,
  CZ_5_MM,
  CZ_10_MM,
  CZ_1_PERCENT,
  CZ_5_PERCENT,
  CZ_10_PERCENT,

  CZ_READY,
  CZ_BUSY,
  CZ_UNCONNECTED,
  CZ_DISCONNECT_INFO,
  CZ_LOADING,
  CZ_POWER_FAILED,
  CZ_CONTINUE,
  CZ_CANNEL,
  CZ_ADJUST_TITLE,
  CZ_ADJUST_INFO,
  CZ_ADJUST_OK,
  CZ_ADJUST_FAILED,
  CZ_WARNING,
  CZ_STOP_PRINT,
  CZ_CONFIRM,
  CZ_TFTSD,
  CZ_READ_TFTSD_ERROR,
  CZ_TFTSD_INSERTED,
  CZ_TFTSD_REMOVED,
  CZ_U_DISK,
  CZ_READ_U_DISK_ERROR,
  CZ_U_DISK_INSERTED,
  CZ_U_DISK_REMOVED,
  CZ_ONBOARDSD,
  CZ_READ_ONBOARDSD_ERROR,
  CZ_FILAMENT_RUNOUT
};

uint8_t isUnicode = 1;

void Encode_SetUnicode(uint8_t unicode)
{
  isUnicode = unicode;
}

CHAR_INFO getCharacterInfo(const u8 *ch)
{
  u32 startCodePoint;
  u32 bitMapStartAddr;
  CHAR_INFO info = {.bytes = 0};
    
  if(ch == NULL || *ch == 0) return info;
     
  if(isUnicode) // parse utf-8 encode
  {
    u8 bytes = 0; 
    u8 utfFlg = 0x80;
    while ((ch[0] & utfFlg) == utfFlg)
    {
      utfFlg |= (utfFlg >> 1);
      bytes++;
    }
    // bytes == 0 means 1 byte, ASCII, 0XXX XXXX
    info.bytes = bytes ? bytes : 1;
    info.codePoint = ch[0] & (~utfFlg);
    for (u8 i = 1; i < bytes; i++)
    {
      info.codePoint = (info.codePoint << 6) | (ch[i] & 0x3F);
    }
  }
  else // parse ANSI/OEM(CP936) encode
  {
    if(*ch < 0x7F)
    {
      info.codePoint = *ch;
      info.bytes = 1;
    }
    else
    {
      info.codePoint = ff_convert((*ch << 8) | (*(ch + 1)), 1);
      info.bytes = 2;
    }
  }
  // Visible ASCII code, from ' ' to '~'
  if(info.codePoint >= 0x20 && info.codePoint <= 0x7E)
  {
    info.bitWidth = 1;
    bitMapStartAddr = BYTE_ASCII_ADDR;
    startCodePoint = 0x20;
  }
  // CJK(Chinese, Japanese, Korean) encoder in unicode
  else if(info.codePoint >= 0x4E00 && info.codePoint <= 0x9FA5)
  {
    info.bitWidth = 2;
    bitMapStartAddr = WORD_CJK_ADDR;
    startCodePoint = 0x4E00;
  }
  // Cyrillic code, from 'Ѐ' to 'ё'
  else if(info.codePoint >= 0x400 && info.codePoint <= 0x451)
  {
    info.bitWidth = 1;
    bitMapStartAddr = BYTE_CYRILLIC_ADDR;
    startCodePoint = 0x400;
  }
  // Japanese:Hiragana & Katakana
  else if(info.codePoint >= 0x3040 && info.codePoint <= 0x30FF)
  {
    info.bitWidth = 2;
    bitMapStartAddr = WORD_JAPANESE_ADDR;
    startCodePoint = 0x3040;
  }
  // Armenian
  else if(info.codePoint >= 0x530 && info.codePoint <= 0x58F)
  {
    info.bitWidth = 1;
    bitMapStartAddr = BYTE_ARMENIAN_ADDR;
    startCodePoint = 0x530;
  }
  // Latin 1 Supplement, Extended-A&B
  else if(info.codePoint >= 0x80 && info.codePoint <= 0x24F)
  {
    info.bitWidth = 1;
    bitMapStartAddr = BYTE_LATIN_ADDR;
    startCodePoint = 0x80;
  }
  // Korean(Hangul Syllables)
  else if(info.codePoint >= 0xAC00 && info.codePoint <= 0xD7AF)
  {
    info.bitWidth = 2;
    bitMapStartAddr = WORD_KOREAN_ADDR;
    startCodePoint = 0xAC00;
  }
  else
  {    
    info.bitWidth = 1;
    bitMapStartAddr = BYTE_ASCII_ADDR;
    startCodePoint = 0x20;
    info.codePoint = '?'; // unknow character
  }
  info.bitMapAddr = bitMapStartAddr + (info.codePoint - startCodePoint) * (BYTE_HEIGHT * BYTE_WIDTH * info.bitWidth / 8);  

  return info;
}

// parse UTF-8 char display bit width
u16 my_strlen(const u8 *const str)
{
  u16 i=0,len=0;

  while(str[i])
  {
    CHAR_INFO info = getCharacterInfo(str + i);
    i += info.bytes;
    len += info.bitWidth;
  }
  return len;
}

u8 * textSelect(u8 sel)
{
  switch(infoSettings.language)
  {
    case ENGLISH:   return (u8 *)en_pack[sel];
    case CHINESE:   return (u8 *)cn_pack[sel];
    case RUSSIAN:   return (u8 *)ru_pack[sel];
    case JAPANESE:  return (u8 *)jp_pack[sel];
    case ARMENIAN:  return (u8 *)am_pack[sel];
    case GERMAN:    return (u8 *)de_pack[sel];
    case CZECH:     return (u8 *)cz_pack[sel];
    default:        return NULL;					 
  }
}


