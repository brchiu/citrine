/*
+--------------------------------------------------------------------------+
| PROJECT : PROTOCOL STACK                                                 |
| FILE    : p_tcpip.h                                                      |
| SOURCE  : "sap\tcpip.pdf"                                                |
| LastModified : "2003-09-05"                                              |
| IdAndVersion : "8462.000.03.005"                                         |
| SrcFileTime  : "Thu Nov 29 09:55:14 2007"                                |
| Generated by CCDGEN_2.5.5A on Fri Oct 14 21:41:52 2016                   |
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


#ifndef P_TCPIP_H
#define P_TCPIP_H


#define CDG_ENTER__P_TCPIP_H

#define CDG_ENTER__FILENAME _P_TCPIP_H
#define CDG_ENTER__P_TCPIP_H__FILE_TYPE CDGINC
#define CDG_ENTER__P_TCPIP_H__LAST_MODIFIED _2003_09_05
#define CDG_ENTER__P_TCPIP_H__ID_AND_VERSION _8462_000_03_005

#define CDG_ENTER__P_TCPIP_H__SRC_FILE_TIME _Thu_Nov_29_09_55_14_2007

#include "CDG_ENTER.h"

#undef CDG_ENTER__P_TCPIP_H

#undef CDG_ENTER__FILENAME


#include "p_tcpip.val"


/*
 * End of substructure section, begin of primitive definition section
 */

#ifndef __T_TCPIP_INITIALIZE_REQ__
#define __T_TCPIP_INITIALIZE_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1186
 */
typedef struct
{
  U8                        dummy;                    /*<  0:  1> no parameters                                      */
} T_TCPIP_INITIALIZE_REQ;
#endif

#ifndef __T_TCPIP_INITIALIZE_CNF__
#define __T_TCPIP_INITIALIZE_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1187
 */
typedef struct
{
  U8                        result;                   /*<  0:  1> Result code                                        */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_TCPIP_INITIALIZE_CNF;
#endif

#ifndef __T_TCPIP_SHUTDOWN_REQ__
#define __T_TCPIP_SHUTDOWN_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1188
 */
typedef struct
{
  U8                        dummy;                    /*<  0:  1> no parameters                                      */
} T_TCPIP_SHUTDOWN_REQ;
#endif

#ifndef __T_TCPIP_SHUTDOWN_CNF__
#define __T_TCPIP_SHUTDOWN_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1189
 */
typedef struct
{
  U8                        result;                   /*<  0:  1> Result code                                        */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_TCPIP_SHUTDOWN_CNF;
#endif

#ifndef __T_TCPIP_IFCONFIG_REQ__
#define __T_TCPIP_IFCONFIG_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1190
 */
typedef struct
{
  U8                        if_up;                    /*<  0:  1> Interface Configuration direction                  */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U16                       mtu_size;                 /*<  2:  2> MTU size                                           */
  U32                       ipaddr;                   /*<  4:  4> IP address                                         */
  U32                       dnsaddr1;                 /*<  8:  4> IP address of first DNS server                     */
  U32                       dnsaddr2;                 /*< 12:  4> IP address of second DNS server                    */
} T_TCPIP_IFCONFIG_REQ;
#endif

#ifndef __T_TCPIP_IFCONFIG_CNF__
#define __T_TCPIP_IFCONFIG_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1191
 */
typedef struct
{
  U8                        result;                   /*<  0:  1> Result code                                        */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
} T_TCPIP_IFCONFIG_CNF;
#endif

#ifndef __T_TCPIP_DTI_REQ__
#define __T_TCPIP_DTI_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1192
 */
typedef struct
{
  U8                        dti_conn;                 /*<  0:  1> Indicates to connect or disconnect DTI link        */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
  U32                       entity_name;              /*<  4:  4> DTI neighbor entity name                           */
  U32                       link_id;                  /*<  8:  4> DTI link identifier                                */
  U8                        dti_direction;            /*< 12:  1> Direction of DTI connection                        */
  U8                        _align3;                  /*< 13:  1> alignment                                          */
  U8                        _align4;                  /*< 14:  1> alignment                                          */
  U8                        _align5;                  /*< 15:  1> alignment                                          */
} T_TCPIP_DTI_REQ;
#endif

#ifndef __T_TCPIP_DTI_CNF__
#define __T_TCPIP_DTI_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1193
 */
typedef struct
{
  U8                        dti_conn;                 /*<  0:  1> Indicates to connect or disconnect DTI link        */
  U8                        _align0;                  /*<  1:  1> alignment                                          */
  U8                        _align1;                  /*<  2:  1> alignment                                          */
  U8                        _align2;                  /*<  3:  1> alignment                                          */
  U32                       link_id;                  /*<  4:  4> DTI link identifier                                */
} T_TCPIP_DTI_CNF;
#endif

#ifndef __T_TCPIP_CREATE_REQ__
#define __T_TCPIP_CREATE_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1194
 */
typedef struct
{
  U32                       app_handle;               /*<  0:  4> Application communication handle                   */
  U8                        ipproto;                  /*<  4:  1> IP protocol identifier                             */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       request_id;               /*<  8:  4> Request ID                                         */
} T_TCPIP_CREATE_REQ;
#endif

#ifndef __T_TCPIP_CREATE_CNF__
#define __T_TCPIP_CREATE_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1195
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
  U32                       request_id;               /*< 12:  4> Request ID                                         */
} T_TCPIP_CREATE_CNF;
#endif

#ifndef __T_TCPIP_CLOSE_REQ__
#define __T_TCPIP_CLOSE_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1196
 */
typedef struct
{
  U32                       app_handle;               /*<  0:  4> Application communication handle                   */
  U32                       socket;                   /*<  4:  4> Socket descriptor                                  */
} T_TCPIP_CLOSE_REQ;
#endif

#ifndef __T_TCPIP_CLOSE_CNF__
#define __T_TCPIP_CLOSE_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1197
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
} T_TCPIP_CLOSE_CNF;
#endif

#ifndef __T_TCPIP_BIND_REQ__
#define __T_TCPIP_BIND_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1198
 */
typedef struct
{
  U32                       app_handle;               /*<  0:  4> Application communication handle                   */
  U32                       socket;                   /*<  4:  4> Socket descriptor                                  */
  U16                       port;                     /*<  8:  2> Port number                                        */
  U8                        _align0;                  /*< 10:  1> alignment                                          */
  U8                        _align1;                  /*< 11:  1> alignment                                          */
} T_TCPIP_BIND_REQ;
#endif

#ifndef __T_TCPIP_BIND_CNF__
#define __T_TCPIP_BIND_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1199
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
} T_TCPIP_BIND_CNF;
#endif

#ifndef __T_TCPIP_LISTEN_REQ__
#define __T_TCPIP_LISTEN_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1200
 */
typedef struct
{
  U32                       app_handle;               /*<  0:  4> Application communication handle                   */
  U32                       socket;                   /*<  4:  4> Socket descriptor                                  */
} T_TCPIP_LISTEN_REQ;
#endif

#ifndef __T_TCPIP_LISTEN_CNF__
#define __T_TCPIP_LISTEN_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1201
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
} T_TCPIP_LISTEN_CNF;
#endif

#ifndef __T_TCPIP_CONNECT_REQ__
#define __T_TCPIP_CONNECT_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1202
 */
typedef struct
{
  U32                       app_handle;               /*<  0:  4> Application communication handle                   */
  U32                       socket;                   /*<  4:  4> Socket descriptor                                  */
  U32                       ipaddr;                   /*<  8:  4> IP address                                         */
  U16                       port;                     /*< 12:  2> Port number                                        */
  U8                        _align0;                  /*< 14:  1> alignment                                          */
  U8                        _align1;                  /*< 15:  1> alignment                                          */
} T_TCPIP_CONNECT_REQ;
#endif

#ifndef __T_TCPIP_CONNECT_CNF__
#define __T_TCPIP_CONNECT_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1203
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
} T_TCPIP_CONNECT_CNF;
#endif

#ifndef __T_TCPIP_DATA_REQ__
#define __T_TCPIP_DATA_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1204
 */
typedef struct
{
  U32                       app_handle;               /*<  0:  4> Application communication handle                   */
  U32                       socket;                   /*<  4:  4> Socket descriptor                                  */
  U32                       ipaddr;                   /*<  8:  4> IP address                                         */
  U16                       port;                     /*< 12:  2> Port number                                        */
  U16                       buflen;                   /*< 14:  2> Data buffer length                                 */
  U32                       data;                     /*< 16:  4> Address of payload data                            */
} T_TCPIP_DATA_REQ;
#endif

#ifndef __T_TCPIP_DATA_CNF__
#define __T_TCPIP_DATA_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1205
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
  U32                       window;                   /*< 12:  4> Flow control window size                           */
} T_TCPIP_DATA_CNF;
#endif

#ifndef __T_TCPIP_DATA_IND__
#define __T_TCPIP_DATA_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==1206
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
  U32                       ipaddr;                   /*< 12:  4> IP address                                         */
  U16                       port;                     /*< 16:  2> Port number                                        */
  U16                       buflen;                   /*< 18:  2> Data buffer length                                 */
  U32                       data;                     /*< 20:  4> Address of payload data                            */
} T_TCPIP_DATA_IND;
#endif

#ifndef __T_TCPIP_DATA_RES__
#define __T_TCPIP_DATA_RES__
/*
 * 
 * CCDGEN:WriteStruct_Count==1207
 */
typedef struct
{
  U32                       app_handle;               /*<  0:  4> Application communication handle                   */
  U32                       socket;                   /*<  4:  4> Socket descriptor                                  */
  U32                       window;                   /*<  8:  4> Flow control window size                           */
} T_TCPIP_DATA_RES;
#endif

#ifndef __T_TCPIP_SOCKNAME_REQ__
#define __T_TCPIP_SOCKNAME_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1208
 */
typedef struct
{
  U32                       app_handle;               /*<  0:  4> Application communication handle                   */
  U32                       socket;                   /*<  4:  4> Socket descriptor                                  */
} T_TCPIP_SOCKNAME_REQ;
#endif

#ifndef __T_TCPIP_SOCKNAME_CNF__
#define __T_TCPIP_SOCKNAME_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1209
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
  U32                       ipaddr;                   /*< 12:  4> IP address                                         */
  U16                       port;                     /*< 16:  2> Port number                                        */
  U8                        _align3;                  /*< 18:  1> alignment                                          */
  U8                        _align4;                  /*< 19:  1> alignment                                          */
} T_TCPIP_SOCKNAME_CNF;
#endif

#ifndef __T_TCPIP_PEERNAME_REQ__
#define __T_TCPIP_PEERNAME_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1210
 */
typedef struct
{
  U32                       app_handle;               /*<  0:  4> Application communication handle                   */
  U32                       socket;                   /*<  4:  4> Socket descriptor                                  */
} T_TCPIP_PEERNAME_REQ;
#endif

#ifndef __T_TCPIP_PEERNAME_CNF__
#define __T_TCPIP_PEERNAME_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1211
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
  U32                       ipaddr;                   /*< 12:  4> IP address                                         */
  U16                       port;                     /*< 16:  2> Port number                                        */
  U8                        _align3;                  /*< 18:  1> alignment                                          */
  U8                        _align4;                  /*< 19:  1> alignment                                          */
} T_TCPIP_PEERNAME_CNF;
#endif

#ifndef __T_TCPIP_HOSTINFO_REQ__
#define __T_TCPIP_HOSTINFO_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1212
 */
typedef struct
{
  U32                       app_handle;               /*<  0:  4> Application communication handle                   */
  U32                       ipaddr;                   /*<  4:  4> IP address                                         */
  U8                        hostname[TCPIP_HNAMELEN]; /*<  8:256> Name of the host                                   */
  U32                       request_id;               /*<264:  4> Request ID                                         */
} T_TCPIP_HOSTINFO_REQ;
#endif

#ifndef __T_TCPIP_HOSTINFO_CNF__
#define __T_TCPIP_HOSTINFO_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1213
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
  U8                        hostname[TCPIP_HNAMELEN]; /*< 12:256> Name of the host                                   */
  U32                       ipaddr;                   /*<268:  4> IP address                                         */
  U32                       request_id;               /*<272:  4> Request ID                                         */
} T_TCPIP_HOSTINFO_CNF;
#endif

#ifndef __T_TCPIP_MTU_SIZE_REQ__
#define __T_TCPIP_MTU_SIZE_REQ__
/*
 * 
 * CCDGEN:WriteStruct_Count==1214
 */
typedef struct
{
  U32                       app_handle;               /*<  0:  4> Application communication handle                   */
  U32                       socket;                   /*<  4:  4> Socket descriptor                                  */
} T_TCPIP_MTU_SIZE_REQ;
#endif

#ifndef __T_TCPIP_MTU_SIZE_CNF__
#define __T_TCPIP_MTU_SIZE_CNF__
/*
 * 
 * CCDGEN:WriteStruct_Count==1215
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
  U16                       mtu_size;                 /*< 12:  2> MTU size                                           */
  U8                        _align3;                  /*< 14:  1> alignment                                          */
  U8                        _align4;                  /*< 15:  1> alignment                                          */
} T_TCPIP_MTU_SIZE_CNF;
#endif

#ifndef __T_TCPIP_CONNECT_IND__
#define __T_TCPIP_CONNECT_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==1216
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
  U32                       new_socket;               /*< 12:  4> Socket descriptor                                  */
  U32                       ipaddr;                   /*< 16:  4> IP address                                         */
  U16                       port;                     /*< 20:  2> Port number                                        */
  U8                        _align3;                  /*< 22:  1> alignment                                          */
  U8                        _align4;                  /*< 23:  1> alignment                                          */
} T_TCPIP_CONNECT_IND;
#endif

#ifndef __T_TCPIP_CONN_CLOSED_IND__
#define __T_TCPIP_CONN_CLOSED_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==1217
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
} T_TCPIP_CONN_CLOSED_IND;
#endif

#ifndef __T_TCPIP_ERROR_IND__
#define __T_TCPIP_ERROR_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==1218
 */
typedef struct
{
  U32                       event_type;               /*<  0:  4> Type of the event                                  */
  U8                        result;                   /*<  4:  1> Result code                                        */
  U8                        _align0;                  /*<  5:  1> alignment                                          */
  U8                        _align1;                  /*<  6:  1> alignment                                          */
  U8                        _align2;                  /*<  7:  1> alignment                                          */
  U32                       socket;                   /*<  8:  4> Socket descriptor                                  */
} T_TCPIP_ERROR_IND;
#endif

#ifndef __T_TCPIP_INTERNAL_IND__
#define __T_TCPIP_INTERNAL_IND__
/*
 * 
 * CCDGEN:WriteStruct_Count==1219
 */
typedef struct
{
  U32                       msg_p;                    /*<  0:  4> Message pointer                                    */
  U32                       msg_id;                   /*<  4:  4> Message ID                                         */
} T_TCPIP_INTERNAL_IND;
#endif


#include "CDG_LEAVE.h"


#endif