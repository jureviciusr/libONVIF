/* soapImagingBindingService.h
   Generated by gSOAP 2.8.55 for rcx.h

gSOAP XML Web services tools
Copyright (C) 2000-2017, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapImagingBindingService_H
#define soapImagingBindingService_H
#include "soapH.h"

    class SOAP_CMAC ImagingBindingService {
      public:
        /// Context to manage service IO and data
        struct soap *soap;
        bool soap_own;  ///< flag indicating that this context is owned by this service when context is shared
        /// Variables globally declared in rcx.h, if any
        /// Construct a service with new managing context
        ImagingBindingService();
        /// Copy constructor
        ImagingBindingService(const ImagingBindingService&);
        /// Construct service given a shared managing context
        ImagingBindingService(struct soap*);
        /// Constructor taking input+output mode flags for the new managing context
        ImagingBindingService(soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        ImagingBindingService(soap_mode imode, soap_mode omode);
        /// Destructor deletes non-shared managing context only (use destroy() to delete deserialized data)
        virtual ~ImagingBindingService();
        /// Delete all deserialized data (with soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to defaults
        virtual void reset();
        /// Initializer used by constructors
        virtual void ImagingBindingService_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual ImagingBindingService *copy() SOAP_PURE_VIRTUAL;
        /// Copy assignment
        ImagingBindingService& operator=(const ImagingBindingService&);
        /// Close connection (normally automatic)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Return sender-related fault to sender
        virtual int soap_senderfault(const char *string, const char *detailXML);
        /// Return sender-related fault with SOAP 1.2 subcode to sender
        virtual int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
        /// Return receiver-related fault to sender
        virtual int soap_receiverfault(const char *string, const char *detailXML);
        /// Return receiver-related fault with SOAP 1.2 subcode to sender
        virtual int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
    #ifndef WITH_NOIO
        /// Run simple single-thread (iterative, non-SSL) service on port until a connection error occurs (returns SOAP_OK or error code), use this->bind_flag = SO_REUSEADDR to rebind for immediate rerun
        virtual int run(int port);
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// Run simple single-thread SSL service on port until a connection error occurs (returns SOAP_OK or error code), use this->bind_flag = SO_REUSEADDR to rebind for immediate rerun
        virtual int ssl_run(int port);
    #endif
        /// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
        virtual SOAP_SOCKET bind(const char *host, int port, int backlog);
        /// Accept next request (returns socket or SOAP_INVALID_SOCKET)
        virtual SOAP_SOCKET accept();
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// When SSL is used, after accept() should perform and accept SSL handshake
        virtual int ssl_accept();
    #endif
    #endif
        /// After accept() serve this request (returns SOAP_OK or error code)
        virtual int serve();
        /// Used by serve() to dispatch a request (returns SOAP_OK or error code)
        virtual int dispatch();
        virtual int dispatch(struct soap *soap);
        ///
        /// Service operations are listed below (you should define these)
        /// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
        ///
        /// Web service operation 'GetServiceCapabilities' (returns SOAP_OK or error code)
        virtual int GetServiceCapabilities(_timg__GetServiceCapabilities *timg__GetServiceCapabilities, _timg__GetServiceCapabilitiesResponse &timg__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetImagingSettings' (returns SOAP_OK or error code)
        virtual int GetImagingSettings(_timg__GetImagingSettings *timg__GetImagingSettings, _timg__GetImagingSettingsResponse &timg__GetImagingSettingsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'SetImagingSettings' (returns SOAP_OK or error code)
        virtual int SetImagingSettings(_timg__SetImagingSettings *timg__SetImagingSettings, _timg__SetImagingSettingsResponse &timg__SetImagingSettingsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetOptions' (returns SOAP_OK or error code)
        virtual int GetOptions(_timg__GetOptions *timg__GetOptions, _timg__GetOptionsResponse &timg__GetOptionsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'Move' (returns SOAP_OK or error code)
        virtual int Move(_timg__Move *timg__Move, _timg__MoveResponse &timg__MoveResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'Stop' (returns SOAP_OK or error code)
        virtual int Stop(_timg__Stop *timg__Stop, _timg__StopResponse &timg__StopResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetStatus' (returns SOAP_OK or error code)
        virtual int GetStatus(_timg__GetStatus *timg__GetStatus, _timg__GetStatusResponse &timg__GetStatusResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetMoveOptions' (returns SOAP_OK or error code)
        virtual int GetMoveOptions(_timg__GetMoveOptions *timg__GetMoveOptions, _timg__GetMoveOptionsResponse &timg__GetMoveOptionsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetPresets' (returns SOAP_OK or error code)
        virtual int GetPresets(_timg__GetPresets *timg__GetPresets, _timg__GetPresetsResponse &timg__GetPresetsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetCurrentPreset' (returns SOAP_OK or error code)
        virtual int GetCurrentPreset(_timg__GetCurrentPreset *timg__GetCurrentPreset, _timg__GetCurrentPresetResponse &timg__GetCurrentPresetResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'SetCurrentPreset' (returns SOAP_OK or error code)
        virtual int SetCurrentPreset(_timg__SetCurrentPreset *timg__SetCurrentPreset, _timg__SetCurrentPresetResponse &timg__SetCurrentPresetResponse) SOAP_PURE_VIRTUAL;
    };
#endif