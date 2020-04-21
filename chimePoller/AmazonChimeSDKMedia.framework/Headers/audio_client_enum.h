//
//  audio_client_enum.h
//  AmazonChimeSDKMedia
//
//  Copyright 2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
//

/*
    feel we should merge some states to simplify the FSM
    AUDIO_CLIENT_STATE_RECONNECTING can become AUDIO_CLIENT_STATE_CONNECTING
    AUDIO_CLIENT_STATE_DISCONNECTED_ABNORMAL, AUDIO_CLIENT_STATE_FAILED_TO_CONNECT and AUDIO_CLIENT_STATE_SERVER_HUNGUP can be one state
    using reason code to tell the detail error
*/
typedef enum audio_client_state {
    AUDIO_CLIENT_STATE_UNKNOWN               = -1,
    AUDIO_CLIENT_STATE_INIT                  = 0,
    AUDIO_CLIENT_STATE_CONNECTING            = 1,
    AUDIO_CLIENT_STATE_CONNECTED             = 2,
    AUDIO_CLIENT_STATE_RECONNECTING          = 3,
    AUDIO_CLIENT_STATE_FAILED_TO_CONNECT     = 4,
    AUDIO_CLIENT_STATE_DISCONNECTING         = 5,
    AUDIO_CLIENT_STATE_DISCONNECTED_NORMAL   = 6,
    AUDIO_CLIENT_STATE_DISCONNECTED_ABNORMAL = 7,
    AUDIO_CLIENT_STATE_SERVER_HUNGUP         = 8,
} audio_client_state_t;

typedef enum {
    AUDIO_CLIENT_OK                                         = 0,
    AUDIO_CLIENT_ERR                                        = 1,
    AUDIO_CLIENT_ERR_NO_MEM                                 = 2,
    AUDIO_CLIENT_ERR_NULL_PTR                               = 3,
    AUDIO_CLIENT_ERR_XAL_INIT                               = 4,
    AUDIO_CLIENT_ERR_XAL_OPEN                               = 5,
    AUDIO_CLIENT_ERR_XAL_START                              = 6,
    AUDIO_CLIENT_ERR_XAL_DEVICES                            = 7,
    AUDIO_CLIENT_ERR_XAL_STOP                               = 8,
    AUDIO_CLIENT_ERR_XAL_SET_PARAM                          = 9,
    AUDIO_CLIENT_ERR_SET_XAL_CALLBACK_FAILED                = 10,
    AUDIO_CLIENT_ERR_CODEC_INIT                             = 11,
    AUDIO_CLIENT_ERR_RESAMPLER_INIT                         = 12,
    AUDIO_CLIENT_ERR_SIGBUF_INIT                            = 13,
    AUDIO_CLIENT_ERR_DEPRECATED                             = 14,
    AUDIO_CLIENT_ERR_SESSION_ALREADY_STARTED                = 15,
    AUDIO_CLIENT_ERR_SESSION_ALREADY_STOPPING               = 16,
    AUDIO_CLIENT_ERR_SESSION_NOT_STARTED                    = 17,
    AUDIO_CLIENT_ERR_MEDIA_STREAM_START                     = 18,
    AUDIO_CLIENT_ERR_MEDIA_STREAM_STOP                      = 19,
    AUDIO_CLIENT_ERR_UIBRIDGE_CREATE                        = 20,
    AUDIO_CLIENT_ERR_UIBRIDGE_START                         = 21,
    AUDIO_CLIENT_ERR_UIBRIDGE_STOP                          = 22,
    AUDIO_CLIENT_ERR_UNIMPLEMENTED                          = 23,
    AUDIO_CLIENT_ERR_MIC_STREAM                             = 24,
    AUDIO_CLIENT_ERR_NO_MEDIA_STREAM                        = 25,
    AUDIO_CLIENT_ERR_GET_DEVICES                            = 26,
    AUDIO_CLIENT_ERR_SET_MIC_DEVICE                         = 27,
    AUDIO_CLIENT_ERR_SET_SPK_DEVICE                         = 28,
    AUDIO_CLIENT_ERR_BUFFER_TOO_SMALL                       = 29,
    AUDIO_CLIENT_ERR_THREAD_CREATE_FAILED                   = 30,
    AUDIO_CLIENT_ERR_THREAD_JOIN_FAILED                     = 31,
    AUDIO_CLIENT_ERR_EVENT_INIT                             = 32,
    AUDIO_CLIENT_ERR_QUEUE_CREATE_FAILED                    = 33,
    AUDIO_CLIENT_ERR_QUEUE_EOF                              = 34,
    AUDIO_CLIENT_ERR_QUEUE_POP_FAILED                       = 35,
    AUDIO_CLIENT_ERR_UNKNOWN_EVENT                          = 36,
    AUDIO_CLIENT_ERR_INVALID_PARAMETER                      = 37,
    AUDIO_CLIENT_ERR_QUEUE_PUSH_FAILED                      = 38,
    AUDIO_CLIENT_ERR_QUEUE_TERMINATE                        = 39,
    AUDIO_CLIENT_ERR_COND_VAR_CREATE_FAILED                 = 40,
    AUDIO_CLIENT_ERR_MUTEX_CREATE_FAILED                    = 41,
    AUDIO_CLIENT_ERR_CALL_BEFORE_XAL_INIT                   = 42,
    AUDIO_CLIENT_ERR_CALL_BEFORE_EVENT_MANAGER_INIT         = 43,
    AUDIO_CLIENT_ERR_MUTEX_DESTROY_FAILED                   = 44,
    AUDIO_CLIENT_ERR_GATHER_ADDRESSES                       = 45,
    AUDIO_CLIENT_ERR_NO_POLY_INFO                           = 46,
    AUDIO_CLIENT_ERR_NO_EVENT_HANDLER                       = 47,
    AUDIO_CLIENT_ERR_SEMAPHORE_CREATE_FAILED                = 48,
    AUDIO_CLIENT_ERR_SEMAPHORE_SIGNAL_FAILED                = 49,
    AUDIO_CLIENT_ERR_QUEUE_EMPTY                            = 50,
    AUDIO_CLIENT_ERR_INTERNAL_STATE                         = 51,
    AUDIO_CLIENT_ERR_SEMAPHORE_WAIT_FAILED                  = 52,
    AUDIO_CLIENT_ERR_SYNC_FUNC_WRONG_NUM_PARAM              = 53,
    AUDIO_CLIENT_ERR_SYNC_FUNC_TOO_MANY_PARAMS              = 54,
    AUDIO_CLIENT_ERR_FAIL_SYNC_FUNC_BECAUSE_CLIENT_EXIT     = 55,
    AUDIO_CLIENT_ERR_SEMAPHORE_NOT_AVAILABLE                = 56,
    AUDIO_CLIENT_ERR_EVENT_MANAGER_THREAD_DOWN              = 57,
    AUDIO_CLIENT_ERR_FAIL_TO_GET_MUTEX                      = 58,
    AUDIO_CLIENT_STATUS_NETWORK_IS_NOT_GOOD_ENOUGH_FOR_VOIP = 59,
    AUDIO_CLIENT_ERR_SERVER_HUNGUP                          = 60,
    AUDIO_CLIENT_ERR_JOINED_FROM_ANOTHER_DEVICE             = 61,
    AUDIO_CLIENT_ERR_INTERNAL_SERVER_ERROR                  = 62,
    AUDIO_CLIENT_ERR_AUTH_REJECTED                          = 63,
    AUDIO_CLIENT_ERR_CALL_AT_CAPACITY                       = 64,
    AUDIO_CLIENT_ERR_SERVICE_UNAVAILABLE                    = 65,
    AUDIO_CLIENT_ERR_FAILED_JOINING_POLY                    = 66,
    AUDIO_CLIENT_ERR_START_AUDIO                            = 67,
    AUDIO_CLIENT_ERR_SET_SPK_ROUTE                          = 68,
    AUDIO_CLIENT_ERR_SHOULD_DISCONNECT_AUDIO                = 69,
    AUDIO_CLIENT_ERR_POLY_SERVER_CREATE                     = 70,
    AUDIO_CLIENT_ERR_POLY_SERVER_START                      = 71,
    AUDIO_CLIENT_ERR_PLAYOUT_DELAY_CREATE                   = 72,
    AUDIO_CLIENT_ERR_LATCH_CREATE                           = 73,
    AUDIO_CLIENT_ERR_XTL_TIMEOUT                            = 74,
    AUDIO_CLIENT_ERR_CALL_ENDED                             = 75,
    AUDIO_CLIENT_ERR_PROXY_AUTHENTICATION_FAILED            = 76,
    AUDIO_CLIENT_ERR_XAL_NEEDS_RECREATE                     = 77,
    AUDIO_CLIENT_STATUS_ENUM_END                            = 78 /* this should always be last */
} audio_client_status_t;

typedef struct audio_client_s                   audio_client_t;
