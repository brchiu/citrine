/*
+--------------------------------------------------------------------------+
| PROJECT : PROTOCOL STACK                                                 |
| FILE    : p_pkt.h                                                        |
| SOURCE  : "sap\pkt.pdf"                                                  |
| LastModified : "2002-10-17"                                              |
| IdAndVersion : "8443.105.02.106"                                         |
| SrcFileTime  : "Thu Nov 29 09:50:46 2007"                                |
| Generated by CCDGEN_2.5.5A on Thu Sep 25 09:18:53 2014                   |
|           !!DO NOT MODIFY!!DO NOT MODIFY!!DO NOT MODIFY!!                |
+--------------------------------------------------------------------------+
*/

/* PRAGMAS
 * PREFIX                 : NONE
 * COMPATIBILITY_DEFINES  : NO (require PREFIX)
 * ALWAYS_ENUM_IN_VAL_FILE: NO
 * ENABLE_GROUP: NO
 * CAPITALIZE_TYPENAME: NO
 */


#ifndef P_PKT_H
#define P_PKT_H


#define CDG_ENTER__P_PKT_H

#define CDG_ENTER__FILENAME _P_PKT_H
#define CDG_ENTER__P_PKT_H__FILE_TYPE CDGINC
#define CDG_ENTER__P_PKT_H__LAST_MODIFIED _2002_10_17
#define CDG_ENTER__P_PKT_H__ID_AND_VERSION _8443_105_02_106

#define CDG_ENTER__P_PKT_H__SRC_FILE_TIME _Thu_Nov_29_09_50_46_2007

#include "CDG_ENTER.h"

#undef CDG_ENTER__P_PKT_H

#undef CDG_ENTER__FILENAME


#include "p_pkt.val"

#ifndef __T_dio_dcb__
#define __T_dio_dcb__
/*
 * Device Control Block data
 * CCDGEN:WriteStruct_Count==2273
 */
typedef struct
{
  U8                        convergence;              /*<  0:  1> serial data and / or packet data                   */
  U8                        data_mode;                /*<  1:  1> TE will use the device to transmit AT commands or data or both */
  U8                        sleep_mode;               /*<  2:  1> describes if the device is able to enter sleep mode */
  U8                        _align0;                  /*<  3:  1> alignment                                          */
  U32                       mux_configuration;        /*<  4:  4> describes the supported configurations of the multiplexer */
  U16                       n1;                       /*<  8:  2> maximum frame size of a multiplexer frame          */
  U8                        n2;                       /*< 10:  1> maximum number of retransmissions                  */
  U8                        t1;                       /*< 11:  1> acknowledgement timer                              */
  U8                        t2;                       /*< 12:  1> response timer for the multiplexer control channel */
  U8                        t3;                       /*< 13:  1> wake up response timer                             */
  U8                        k;                        /*< 14:  1> window size for advanced option with error recovery */
  U8                        _align1;                  /*< 15:  1> alignment                                          */
  U16                       mtu;                      /*< 16:  2> Maximum Transfer Unit                              */
  U8                        _align2;                  /*< 18:  1> alignment                                          */
  U8                        _align3;                  /*< 19:  1> alignment                                          */
  U32                       baud;                     /*< 20:  4> supported transmission rates                       */
  U8                        data_bits;                /*< 24:  1> supported numbers of bits per character            */
  U8                        stop_bits;                /*< 25:  1> supported number of stop bits                      */
  U8                        parity;                   /*< 26:  1> supported types of parity checking                 */
  U8                        _align4;                  /*< 27:  1> alignment                                          */
  U16                       flow_control;             /*< 28:  2> supported types of flow control                    */
  U8                        xon;                      /*< 30:  1> XON character                                      */
  U8                        xoff;                     /*< 31:  1> XOFF character                                     */
  U8                        esc_char;                 /*< 32:  1> ASCII character which could appear three times as an escape sequence */
  U8                        _align5;                  /*< 33:  1> alignment                                          */
  U16                       guard_period;             /*< 34:  2> minimal duration before and after escape sequence  */
} T_dio_dcb;
#endif


/*
 * End of substructure section, begin of primitive definition section
 */

#ifndef __T_PKT_CONNECT_IND__
#define __T_PKT_CONNECT_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==2277
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
  T_dio_dcb                 dio_dcb;                  /*<  4: 36> Device Control Block data                          */
} T_PKT_CONNECT_IND;
#endif

#ifndef __T_PKT_CONNECT_RES__
#define __T_PKT_CONNECT_RES__
/*
 * 
 * CCDGEN:WriteStruct_Count==2278
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
  T_dio_dcb                 dio_dcb;                  /*<  4: 36> Device Control Block data                          */
} T_PKT_CONNECT_RES;
#endif

#ifndef __T_PKT_CONNECT_REJ__
#define __T_PKT_CONNECT_REJ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2279
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_PKT_CONNECT_REJ;
#endif

#ifndef __T_PKT_DISCONNECT_IND__
#define __T_PKT_DISCONNECT_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==2280
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U16                       cause;                    /*<  2:  2> Cause value                                        */
} T_PKT_DISCONNECT_IND;
#endif

#ifndef __T_PKT_DTI_OPEN_REQ__
#define __T_PKT_DTI_OPEN_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2281
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
  U32                       peer;                     /*<  4:  4> Name of peer, to be casted to 'const char *'       */
  U32                       link_id;                  /*<  8:  4> Link identifier                                    */
  U8                        dti_direction;            /*< 12:  1> DTI direction                                      */
  U8                        _align3;                  /*< 13:  1> alignment                                          */
  U8                        _align4;                  /*< 14:  1> alignment                                          */
  U8                        _align5;                  /*< 15:  1> alignment                                          */
} T_PKT_DTI_OPEN_REQ;
#endif

#ifndef __T_PKT_DTI_OPEN_CNF__
#define __T_PKT_DTI_OPEN_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2282
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U16                       cause;                    /*<  2:  2> Cause value                                        */
} T_PKT_DTI_OPEN_CNF;
#endif

#ifndef __T_PKT_MODIFY_REQ__
#define __T_PKT_MODIFY_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2283
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
  T_dio_dcb                 dio_dcb;                  /*<  4: 36> Device Control Block data                          */
} T_PKT_MODIFY_REQ;
#endif

#ifndef __T_PKT_MODIFY_CNF__
#define __T_PKT_MODIFY_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2284
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U16                       cause;                    /*<  2:  2> Cause value                                        */
} T_PKT_MODIFY_CNF;
#endif

#ifndef __T_PKT_DTI_CLOSE_REQ__
#define __T_PKT_DTI_CLOSE_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2285
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_PKT_DTI_CLOSE_REQ;
#endif

#ifndef __T_PKT_DTI_CLOSE_CNF__
#define __T_PKT_DTI_CLOSE_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2286
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_PKT_DTI_CLOSE_CNF;
#endif

#ifndef __T_PKT_DTI_CLOSE_IND__
#define __T_PKT_DTI_CLOSE_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==2287
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_PKT_DTI_CLOSE_IND;
#endif

#ifndef __T_PKT_SIG_CLEAR_IND__
#define __T_PKT_SIG_CLEAR_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==2288
 */
typedef struct
{
  U8                        dummy;                    /*<  0:  1> no parameters                                      */
} T_PKT_SIG_CLEAR_IND;
#endif

#ifndef __T_PKT_SIG_FLUSH_IND__
#define __T_PKT_SIG_FLUSH_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==2289
 */
typedef struct
{
  U8                        dummy;                    /*<  0:  1> no parameters                                      */
} T_PKT_SIG_FLUSH_IND;
#endif

#ifndef __T_PKT_SIG_READ_IND__
#define __T_PKT_SIG_READ_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==2290
 */
typedef struct
{
  U8                        dummy;                    /*<  0:  1> no parameters                                      */
} T_PKT_SIG_READ_IND;
#endif

#ifndef __T_PKT_SIG_WRITE_IND__
#define __T_PKT_SIG_WRITE_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==2291
 */
typedef struct
{
  U8                        dummy;                    /*<  0:  1> no parameters                                      */
} T_PKT_SIG_WRITE_IND;
#endif

#ifndef __T_PKT_SIG_CONNECT_IND__
#define __T_PKT_SIG_CONNECT_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==2292
 */
typedef struct
{
  U8                        dummy;                    /*<  0:  1> no parameters                                      */
} T_PKT_SIG_CONNECT_IND;
#endif

#ifndef __T_PKT_SIG_DISCONNECT_IND__
#define __T_PKT_SIG_DISCONNECT_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==2293
 */
typedef struct
{
  U8                        dummy;                    /*<  0:  1> no parameters                                      */
} T_PKT_SIG_DISCONNECT_IND;
#endif

#ifndef __T_PKT_DIO_SIGNAL_IND__
#define __T_PKT_DIO_SIGNAL_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==2294
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U16                       signal_type;              /*<  2:  2> Signal type                                        */
} T_PKT_DIO_SIGNAL_IND;
#endif

#ifndef __T_PKT_DIO_INIT_REQ__
#define __T_PKT_DIO_INIT_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2295
 */
typedef struct
{
  U16                       drv_handle;               /*<  0:  2> Unique handle for this driver                      */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_INIT_REQ;
#endif

#ifndef __T_PKT_DIO_INIT_CNF__
#define __T_PKT_DIO_INIT_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2296
 */
typedef struct
{
  U16                       retval;                   /*<  0:  2> Return value                                       */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_INIT_CNF;
#endif

#ifndef __T_PKT_DIO_EXIT_REQ__
#define __T_PKT_DIO_EXIT_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2297
 */
typedef struct
{
  U8                        dummy;                    /*<  0:  1> no parameters                                      */
} T_PKT_DIO_EXIT_REQ;
#endif

#ifndef __T_PKT_DIO_READ_REQ__
#define __T_PKT_DIO_READ_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2298
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_READ_REQ;
#endif

#ifndef __T_PKT_DIO_READ_CNF__
#define __T_PKT_DIO_READ_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2299
 */
typedef struct
{
  U16                       retval;                   /*<  0:  2> Return value                                       */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_READ_CNF;
#endif

#ifndef __T_PKT_DIO_GETDATA_REQ__
#define __T_PKT_DIO_GETDATA_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2300
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_GETDATA_REQ;
#endif

#ifndef __T_PKT_DIO_GETDATA_CNF__
#define __T_PKT_DIO_GETDATA_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2301
 */
typedef struct
{
  U16                       retval;                   /*<  0:  2> Return value                                       */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
  U32                       state;                    /*<  4:  4> Line state bits                                    */
  T_sdu                     sdu;                      /*<  8: ? > test data                                          */
} T_PKT_DIO_GETDATA_CNF;
#endif

#ifndef __T_PKT_DIO_WRITE_REQ__
#define __T_PKT_DIO_WRITE_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2302
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
  U32                       state;                    /*<  4:  4> Line state bits                                    */
  U32                       mask;                     /*<  8:  4> Line state mask                                    */
  T_sdu                     sdu;                      /*< 12: ? > test data                                          */
} T_PKT_DIO_WRITE_REQ;
#endif

#ifndef __T_PKT_DIO_WRITE_CNF__
#define __T_PKT_DIO_WRITE_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2303
 */
typedef struct
{
  U16                       retval;                   /*<  0:  2> Return value                                       */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_WRITE_CNF;
#endif

#ifndef __T_PKT_DIO_GETBUFFER_REQ__
#define __T_PKT_DIO_GETBUFFER_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2304
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_GETBUFFER_REQ;
#endif

#ifndef __T_PKT_DIO_GETBUFFER_CNF__
#define __T_PKT_DIO_GETBUFFER_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2305
 */
typedef struct
{
  U16                       retval;                   /*<  0:  2> Return value                                       */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_GETBUFFER_CNF;
#endif

#ifndef __T_PKT_DIO_CLEAR_REQ__
#define __T_PKT_DIO_CLEAR_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2306
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U16                       buffer_type;              /*<  2:  2> Type of buffer to be cleared                       */
} T_PKT_DIO_CLEAR_REQ;
#endif

#ifndef __T_PKT_DIO_CLEAR_CNF__
#define __T_PKT_DIO_CLEAR_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2307
 */
typedef struct
{
  U16                       retval;                   /*<  0:  2> Return value                                       */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_CLEAR_CNF;
#endif

#ifndef __T_PKT_DIO_FLUSH_REQ__
#define __T_PKT_DIO_FLUSH_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2308
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_FLUSH_REQ;
#endif

#ifndef __T_PKT_DIO_FLUSH_CNF__
#define __T_PKT_DIO_FLUSH_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2309
 */
typedef struct
{
  U16                       retval;                   /*<  0:  2> Return value                                       */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_FLUSH_CNF;
#endif

#ifndef __T_PKT_DIO_SETSIGNAL_REQ__
#define __T_PKT_DIO_SETSIGNAL_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2310
 */
typedef struct
{
  U16                       signal_type;              /*<  0:  2> Signal type                                        */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_SETSIGNAL_REQ;
#endif

#ifndef __T_PKT_DIO_SETSIGNAL_CNF__
#define __T_PKT_DIO_SETSIGNAL_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2311
 */
typedef struct
{
  U16                       retval;                   /*<  0:  2> Return value                                       */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_SETSIGNAL_CNF;
#endif

#ifndef __T_PKT_DIO_RESETSIGNAL_REQ__
#define __T_PKT_DIO_RESETSIGNAL_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2312
 */
typedef struct
{
  U16                       signal_type;              /*<  0:  2> Signal type                                        */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_RESETSIGNAL_REQ;
#endif

#ifndef __T_PKT_DIO_RESETSIGNAL_CNF__
#define __T_PKT_DIO_RESETSIGNAL_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2313
 */
typedef struct
{
  U16                       retval;                   /*<  0:  2> Return value                                       */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_RESETSIGNAL_CNF;
#endif

#ifndef __T_PKT_DIO_GETCAP_REQ__
#define __T_PKT_DIO_GETCAP_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2314
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_GETCAP_REQ;
#endif

#ifndef __T_PKT_DIO_GETCAP_CNF__
#define __T_PKT_DIO_GETCAP_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2315
 */
typedef struct
{
  U16                       retval;                   /*<  0:  2> Return value                                       */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
  T_dio_dcb                 dio_dcb;                  /*<  4: 36> Device Control Block data                          */
} T_PKT_DIO_GETCAP_CNF;
#endif

#ifndef __T_PKT_DIO_SETCONFIG_REQ__
#define __T_PKT_DIO_SETCONFIG_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2316
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
  T_dio_dcb                 dio_dcb;                  /*<  4: 36> Device Control Block data                          */
} T_PKT_DIO_SETCONFIG_REQ;
#endif

#ifndef __T_PKT_DIO_SETCONFIG_CNF__
#define __T_PKT_DIO_SETCONFIG_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2317
 */
typedef struct
{
  U16                       retval;                   /*<  0:  2> Return value                                       */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_SETCONFIG_CNF;
#endif

#ifndef __T_PKT_DIO_GETCONFIG_REQ__
#define __T_PKT_DIO_GETCONFIG_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2318
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_GETCONFIG_REQ;
#endif

#ifndef __T_PKT_DIO_GETCONFIG_CNF__
#define __T_PKT_DIO_GETCONFIG_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2319
 */
typedef struct
{
  U16                       retval;                   /*<  0:  2> Return value                                       */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_GETCONFIG_CNF;
#endif

#ifndef __T_PKT_DIO_CLOSEDEVICE_REQ__
#define __T_PKT_DIO_CLOSEDEVICE_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==2320
 */
typedef struct
{
  U8                        device_no;                /*<  0:  1> Data device number                                 */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_CLOSEDEVICE_REQ;
#endif

#ifndef __T_PKT_DIO_CLOSEDEVICE_CNF__
#define __T_PKT_DIO_CLOSEDEVICE_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==2321
 */
typedef struct
{
  U16                       retval;                   /*<  0:  2> Return value                                       */
  U8                        _align0;                  /*<  2:  1> alignment                                          */
  U8                        _align1;                  /*<  3:  1> alignment                                          */
} T_PKT_DIO_CLOSEDEVICE_CNF;
#endif


#include "CDG_LEAVE.h"


#endif