#if ID==1				/* 若ID等於1則含入flash.h */
  #include "flash.h"
#elif ID==2			/* 若ID等於2則含入java.h */
  #include "java.h"
#elif ID==3			/* 若ID等於3則含入office.h */
  #include "office.h"
#else					/* 若ID不等於1~3，則含入vb.h */
  #include "vb.h"
#endif
