#ifndef  LOG_H_INCLUDED
#define  LOG_H_INCLUDED

#define  ENV_IHS_DEBUGLEVEL   "IHS_DEBUGLEVEL"
#define  ENV_IHS_DEBUGSTDERR  "IHS_DEBUGSTDERR"
#define  ENV_IHS_DEBPATH      "IHS_DEBPATH"
#define  ENV_IHS_DEBFILE      "IHS_DEBFILE"

#ifdef  DEBUG
#define dprintf  dSetSrc(__FILE__, __LINE__) && __dprintf
extern  int dSetSrc(const char *src, int line);
#else
#define dprintf  __dprintf
#endif                                            //DEBUG

extern  void SetLogLevel(int lv);
extern  void my_log(char *src, int line, char *text, int lv);
extern  int  lopen(char *fn);
extern  void lclose(void);
extern  void lprintf(char *fmt, ...);
extern  int  dopen(char *fn);
extern  void dclose(void);
extern  int  __dprintf(int dlevel, const char *fmt, ...);
extern  void SetDebugLevel(int dlevel);
void SetDebugPath(const char *dft, const char *pre);
extern  char *DebugFilename(const char *fn);
#endif                                            //LOG_H_INCLUDED
