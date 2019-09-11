// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flutterblue.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class ProtosAdvertisementData;
@class ProtosBluetoothCharacteristic;
@class ProtosBluetoothDescriptor;
@class ProtosBluetoothDevice;
@class ProtosBluetoothService;
@class ProtosCharacteristicProperties;
@class ProtosInt32Value;
@class ProtosReadDescriptorRequest;
@class ProtosWriteCharacteristicRequest;
@class ProtosWriteDescriptorRequest;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum ProtosBluetoothState_State

typedef GPB_ENUM(ProtosBluetoothState_State) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  ProtosBluetoothState_State_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  ProtosBluetoothState_State_Unknown = 0,
  ProtosBluetoothState_State_Unavailable = 1,
  ProtosBluetoothState_State_Unauthorized = 2,
  ProtosBluetoothState_State_TurningOn = 3,
  ProtosBluetoothState_State_On = 4,
  ProtosBluetoothState_State_TurningOff = 5,
  ProtosBluetoothState_State_Off = 6,
};

GPBEnumDescriptor *ProtosBluetoothState_State_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ProtosBluetoothState_State_IsValidValue(int32_t value);

#pragma mark - Enum ProtosBluetoothDevice_Type

typedef GPB_ENUM(ProtosBluetoothDevice_Type) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  ProtosBluetoothDevice_Type_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  ProtosBluetoothDevice_Type_Unknown = 0,
  ProtosBluetoothDevice_Type_Classic = 1,
  ProtosBluetoothDevice_Type_Le = 2,
  ProtosBluetoothDevice_Type_Dual = 3,
};

GPBEnumDescriptor *ProtosBluetoothDevice_Type_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ProtosBluetoothDevice_Type_IsValidValue(int32_t value);

#pragma mark - Enum ProtosWriteCharacteristicRequest_WriteType

typedef GPB_ENUM(ProtosWriteCharacteristicRequest_WriteType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  ProtosWriteCharacteristicRequest_WriteType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  ProtosWriteCharacteristicRequest_WriteType_WithResponse = 0,
  ProtosWriteCharacteristicRequest_WriteType_WithoutResponse = 1,
};

GPBEnumDescriptor *ProtosWriteCharacteristicRequest_WriteType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ProtosWriteCharacteristicRequest_WriteType_IsValidValue(int32_t value);

#pragma mark - Enum ProtosDeviceStateResponse_BluetoothDeviceState

typedef GPB_ENUM(ProtosDeviceStateResponse_BluetoothDeviceState) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  ProtosDeviceStateResponse_BluetoothDeviceState_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  ProtosDeviceStateResponse_BluetoothDeviceState_Disconnected = 0,
  ProtosDeviceStateResponse_BluetoothDeviceState_Connecting = 1,
  ProtosDeviceStateResponse_BluetoothDeviceState_Connected = 2,
  ProtosDeviceStateResponse_BluetoothDeviceState_Disconnecting = 3,
};

GPBEnumDescriptor *ProtosDeviceStateResponse_BluetoothDeviceState_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ProtosDeviceStateResponse_BluetoothDeviceState_IsValidValue(int32_t value);

#pragma mark - ProtosFlutterblueRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface ProtosFlutterblueRoot : GPBRootObject
@end

#pragma mark - ProtosInt32Value

typedef GPB_ENUM(ProtosInt32Value_FieldNumber) {
  ProtosInt32Value_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `int32`.
 *
 * Allows for nullability of fields in messages
 **/
@interface ProtosInt32Value : GPBMessage

/** The int32 value. */
@property(nonatomic, readwrite) int32_t value;

@end

#pragma mark - ProtosBluetoothState

typedef GPB_ENUM(ProtosBluetoothState_FieldNumber) {
  ProtosBluetoothState_FieldNumber_State = 1,
};

@interface ProtosBluetoothState : GPBMessage

@property(nonatomic, readwrite) ProtosBluetoothState_State state;

@end

/**
 * Fetches the raw value of a @c ProtosBluetoothState's @c state property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t ProtosBluetoothState_State_RawValue(ProtosBluetoothState *message);
/**
 * Sets the raw value of an @c ProtosBluetoothState's @c state property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetProtosBluetoothState_State_RawValue(ProtosBluetoothState *message, int32_t value);

#pragma mark - ProtosAdvertisementData

typedef GPB_ENUM(ProtosAdvertisementData_FieldNumber) {
  ProtosAdvertisementData_FieldNumber_LocalName = 1,
  ProtosAdvertisementData_FieldNumber_TxPowerLevel = 2,
  ProtosAdvertisementData_FieldNumber_Connectable = 3,
  ProtosAdvertisementData_FieldNumber_ManufacturerData = 4,
  ProtosAdvertisementData_FieldNumber_ServiceData = 5,
  ProtosAdvertisementData_FieldNumber_ServiceUuidsArray = 6,
};

@interface ProtosAdvertisementData : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *localName;

@property(nonatomic, readwrite, strong, null_resettable) ProtosInt32Value *txPowerLevel;
/** Test to see if @c txPowerLevel has been set. */
@property(nonatomic, readwrite) BOOL hasTxPowerLevel;

@property(nonatomic, readwrite) BOOL connectable;

/** Map of manufacturers to their data */
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32ObjectDictionary<NSData*> *manufacturerData;
/** The number of items in @c manufacturerData without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger manufacturerData_Count;

/** Map of service UUIDs to their data. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableDictionary<NSString*, NSData*> *serviceData;
/** The number of items in @c serviceData without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger serviceData_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *serviceUuidsArray;
/** The number of items in @c serviceUuidsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger serviceUuidsArray_Count;

@end

#pragma mark - ProtosScanSettings

typedef GPB_ENUM(ProtosScanSettings_FieldNumber) {
  ProtosScanSettings_FieldNumber_AndroidScanMode = 1,
  ProtosScanSettings_FieldNumber_ServiceUuidsArray = 2,
};

@interface ProtosScanSettings : GPBMessage

@property(nonatomic, readwrite) int32_t androidScanMode;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *serviceUuidsArray;
/** The number of items in @c serviceUuidsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger serviceUuidsArray_Count;

@end

#pragma mark - ProtosScanResult

typedef GPB_ENUM(ProtosScanResult_FieldNumber) {
  ProtosScanResult_FieldNumber_Device = 1,
  ProtosScanResult_FieldNumber_AdvertisementData = 2,
  ProtosScanResult_FieldNumber_Rssi = 3,
};

@interface ProtosScanResult : GPBMessage

/** The received peer's ID. */
@property(nonatomic, readwrite, strong, null_resettable) ProtosBluetoothDevice *device;
/** Test to see if @c device has been set. */
@property(nonatomic, readwrite) BOOL hasDevice;

@property(nonatomic, readwrite, strong, null_resettable) ProtosAdvertisementData *advertisementData;
/** Test to see if @c advertisementData has been set. */
@property(nonatomic, readwrite) BOOL hasAdvertisementData;

@property(nonatomic, readwrite) int32_t rssi;

@end

#pragma mark - ProtosConnectRequest

typedef GPB_ENUM(ProtosConnectRequest_FieldNumber) {
  ProtosConnectRequest_FieldNumber_RemoteId = 1,
  ProtosConnectRequest_FieldNumber_AndroidAutoConnect = 2,
};

@interface ProtosConnectRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite) BOOL androidAutoConnect;

@end

#pragma mark - ProtosBluetoothDevice

typedef GPB_ENUM(ProtosBluetoothDevice_FieldNumber) {
  ProtosBluetoothDevice_FieldNumber_RemoteId = 1,
  ProtosBluetoothDevice_FieldNumber_Name = 2,
  ProtosBluetoothDevice_FieldNumber_Type = 3,
};

@interface ProtosBluetoothDevice : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite) ProtosBluetoothDevice_Type type;

@end

/**
 * Fetches the raw value of a @c ProtosBluetoothDevice's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t ProtosBluetoothDevice_Type_RawValue(ProtosBluetoothDevice *message);
/**
 * Sets the raw value of an @c ProtosBluetoothDevice's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetProtosBluetoothDevice_Type_RawValue(ProtosBluetoothDevice *message, int32_t value);

#pragma mark - ProtosBluetoothService

typedef GPB_ENUM(ProtosBluetoothService_FieldNumber) {
  ProtosBluetoothService_FieldNumber_Uuid = 1,
  ProtosBluetoothService_FieldNumber_RemoteId = 2,
  ProtosBluetoothService_FieldNumber_IsPrimary = 3,
  ProtosBluetoothService_FieldNumber_CharacteristicsArray = 4,
  ProtosBluetoothService_FieldNumber_IncludedServicesArray = 5,
};

@interface ProtosBluetoothService : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *uuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

/** Indicates whether the type of service is primary or secondary. */
@property(nonatomic, readwrite) BOOL isPrimary;

/** A list of characteristics that have been discovered in this service. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ProtosBluetoothCharacteristic*> *characteristicsArray;
/** The number of items in @c characteristicsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger characteristicsArray_Count;

/** A list of included services that have been discovered in this service. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ProtosBluetoothService*> *includedServicesArray;
/** The number of items in @c includedServicesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger includedServicesArray_Count;

@end

#pragma mark - ProtosBluetoothCharacteristic

typedef GPB_ENUM(ProtosBluetoothCharacteristic_FieldNumber) {
  ProtosBluetoothCharacteristic_FieldNumber_Uuid = 1,
  ProtosBluetoothCharacteristic_FieldNumber_RemoteId = 2,
  ProtosBluetoothCharacteristic_FieldNumber_ServiceUuid = 3,
  ProtosBluetoothCharacteristic_FieldNumber_SecondaryServiceUuid = 4,
  ProtosBluetoothCharacteristic_FieldNumber_DescriptorsArray = 5,
  ProtosBluetoothCharacteristic_FieldNumber_Properties = 6,
  ProtosBluetoothCharacteristic_FieldNumber_Value = 7,
};

@interface ProtosBluetoothCharacteristic : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *uuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

/** The service that this characteristic belongs to. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *serviceUuid;

/** The secondary service if nested */
@property(nonatomic, readwrite, copy, null_resettable) NSString *secondaryServiceUuid;

/** A list of descriptors that have been discovered in this characteristic. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ProtosBluetoothDescriptor*> *descriptorsArray;
/** The number of items in @c descriptorsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger descriptorsArray_Count;

/** The properties of the characteristic. */
@property(nonatomic, readwrite, strong, null_resettable) ProtosCharacteristicProperties *properties;
/** Test to see if @c properties has been set. */
@property(nonatomic, readwrite) BOOL hasProperties;

@property(nonatomic, readwrite, copy, null_resettable) NSData *value;

@end

#pragma mark - ProtosBluetoothDescriptor

typedef GPB_ENUM(ProtosBluetoothDescriptor_FieldNumber) {
  ProtosBluetoothDescriptor_FieldNumber_Uuid = 1,
  ProtosBluetoothDescriptor_FieldNumber_RemoteId = 2,
  ProtosBluetoothDescriptor_FieldNumber_ServiceUuid = 3,
  ProtosBluetoothDescriptor_FieldNumber_CharacteristicUuid = 4,
  ProtosBluetoothDescriptor_FieldNumber_Value = 5,
};

@interface ProtosBluetoothDescriptor : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *uuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

/** The service that this descriptor belongs to. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *serviceUuid;

/** The characteristic that this descriptor belongs to. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *characteristicUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSData *value;

@end

#pragma mark - ProtosCharacteristicProperties

typedef GPB_ENUM(ProtosCharacteristicProperties_FieldNumber) {
  ProtosCharacteristicProperties_FieldNumber_Broadcast = 1,
  ProtosCharacteristicProperties_FieldNumber_Read = 2,
  ProtosCharacteristicProperties_FieldNumber_WriteWithoutResponse = 3,
  ProtosCharacteristicProperties_FieldNumber_Write = 4,
  ProtosCharacteristicProperties_FieldNumber_Notify = 5,
  ProtosCharacteristicProperties_FieldNumber_Indicate = 6,
  ProtosCharacteristicProperties_FieldNumber_AuthenticatedSignedWrites = 7,
  ProtosCharacteristicProperties_FieldNumber_ExtendedProperties = 8,
  ProtosCharacteristicProperties_FieldNumber_NotifyEncryptionRequired = 9,
  ProtosCharacteristicProperties_FieldNumber_IndicateEncryptionRequired = 10,
};

@interface ProtosCharacteristicProperties : GPBMessage

@property(nonatomic, readwrite) BOOL broadcast;

@property(nonatomic, readwrite) BOOL read;

@property(nonatomic, readwrite) BOOL writeWithoutResponse;

@property(nonatomic, readwrite) BOOL write;

@property(nonatomic, readwrite) BOOL notify;

@property(nonatomic, readwrite) BOOL indicate;

@property(nonatomic, readwrite) BOOL authenticatedSignedWrites;

@property(nonatomic, readwrite) BOOL extendedProperties;

@property(nonatomic, readwrite) BOOL notifyEncryptionRequired;

@property(nonatomic, readwrite) BOOL indicateEncryptionRequired;

@end

#pragma mark - ProtosDiscoverServicesResult

typedef GPB_ENUM(ProtosDiscoverServicesResult_FieldNumber) {
  ProtosDiscoverServicesResult_FieldNumber_RemoteId = 1,
  ProtosDiscoverServicesResult_FieldNumber_ServicesArray = 2,
};

@interface ProtosDiscoverServicesResult : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ProtosBluetoothService*> *servicesArray;
/** The number of items in @c servicesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger servicesArray_Count;

@end

#pragma mark - ProtosReadCharacteristicRequest

typedef GPB_ENUM(ProtosReadCharacteristicRequest_FieldNumber) {
  ProtosReadCharacteristicRequest_FieldNumber_RemoteId = 1,
  ProtosReadCharacteristicRequest_FieldNumber_CharacteristicUuid = 2,
  ProtosReadCharacteristicRequest_FieldNumber_ServiceUuid = 3,
  ProtosReadCharacteristicRequest_FieldNumber_SecondaryServiceUuid = 4,
};

@interface ProtosReadCharacteristicRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *characteristicUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *serviceUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *secondaryServiceUuid;

@end

#pragma mark - ProtosReadCharacteristicResponse

typedef GPB_ENUM(ProtosReadCharacteristicResponse_FieldNumber) {
  ProtosReadCharacteristicResponse_FieldNumber_RemoteId = 1,
  ProtosReadCharacteristicResponse_FieldNumber_Characteristic = 2,
};

@interface ProtosReadCharacteristicResponse : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite, strong, null_resettable) ProtosBluetoothCharacteristic *characteristic;
/** Test to see if @c characteristic has been set. */
@property(nonatomic, readwrite) BOOL hasCharacteristic;

@end

#pragma mark - ProtosReadDescriptorRequest

typedef GPB_ENUM(ProtosReadDescriptorRequest_FieldNumber) {
  ProtosReadDescriptorRequest_FieldNumber_RemoteId = 1,
  ProtosReadDescriptorRequest_FieldNumber_DescriptorUuid = 2,
  ProtosReadDescriptorRequest_FieldNumber_ServiceUuid = 3,
  ProtosReadDescriptorRequest_FieldNumber_SecondaryServiceUuid = 4,
  ProtosReadDescriptorRequest_FieldNumber_CharacteristicUuid = 5,
};

@interface ProtosReadDescriptorRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *descriptorUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *serviceUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *secondaryServiceUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *characteristicUuid;

@end

#pragma mark - ProtosReadDescriptorResponse

typedef GPB_ENUM(ProtosReadDescriptorResponse_FieldNumber) {
  ProtosReadDescriptorResponse_FieldNumber_Request = 1,
  ProtosReadDescriptorResponse_FieldNumber_Value = 2,
};

@interface ProtosReadDescriptorResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ProtosReadDescriptorRequest *request;
/** Test to see if @c request has been set. */
@property(nonatomic, readwrite) BOOL hasRequest;

@property(nonatomic, readwrite, copy, null_resettable) NSData *value;

@end

#pragma mark - ProtosWriteCharacteristicRequest

typedef GPB_ENUM(ProtosWriteCharacteristicRequest_FieldNumber) {
  ProtosWriteCharacteristicRequest_FieldNumber_RemoteId = 1,
  ProtosWriteCharacteristicRequest_FieldNumber_CharacteristicUuid = 2,
  ProtosWriteCharacteristicRequest_FieldNumber_ServiceUuid = 3,
  ProtosWriteCharacteristicRequest_FieldNumber_SecondaryServiceUuid = 4,
  ProtosWriteCharacteristicRequest_FieldNumber_WriteType = 5,
  ProtosWriteCharacteristicRequest_FieldNumber_Value = 6,
};

@interface ProtosWriteCharacteristicRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *characteristicUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *serviceUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *secondaryServiceUuid;

@property(nonatomic, readwrite) ProtosWriteCharacteristicRequest_WriteType writeType;

@property(nonatomic, readwrite, copy, null_resettable) NSData *value;

@end

/**
 * Fetches the raw value of a @c ProtosWriteCharacteristicRequest's @c writeType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t ProtosWriteCharacteristicRequest_WriteType_RawValue(ProtosWriteCharacteristicRequest *message);
/**
 * Sets the raw value of an @c ProtosWriteCharacteristicRequest's @c writeType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetProtosWriteCharacteristicRequest_WriteType_RawValue(ProtosWriteCharacteristicRequest *message, int32_t value);

#pragma mark - ProtosWriteCharacteristicResponse

typedef GPB_ENUM(ProtosWriteCharacteristicResponse_FieldNumber) {
  ProtosWriteCharacteristicResponse_FieldNumber_Request = 1,
  ProtosWriteCharacteristicResponse_FieldNumber_Success = 2,
};

@interface ProtosWriteCharacteristicResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ProtosWriteCharacteristicRequest *request;
/** Test to see if @c request has been set. */
@property(nonatomic, readwrite) BOOL hasRequest;

@property(nonatomic, readwrite) BOOL success;

@end

#pragma mark - ProtosWriteDescriptorRequest

typedef GPB_ENUM(ProtosWriteDescriptorRequest_FieldNumber) {
  ProtosWriteDescriptorRequest_FieldNumber_RemoteId = 1,
  ProtosWriteDescriptorRequest_FieldNumber_DescriptorUuid = 2,
  ProtosWriteDescriptorRequest_FieldNumber_ServiceUuid = 3,
  ProtosWriteDescriptorRequest_FieldNumber_SecondaryServiceUuid = 4,
  ProtosWriteDescriptorRequest_FieldNumber_CharacteristicUuid = 5,
  ProtosWriteDescriptorRequest_FieldNumber_Value = 6,
};

@interface ProtosWriteDescriptorRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *descriptorUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *serviceUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *secondaryServiceUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *characteristicUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSData *value;

@end

#pragma mark - ProtosWriteDescriptorResponse

typedef GPB_ENUM(ProtosWriteDescriptorResponse_FieldNumber) {
  ProtosWriteDescriptorResponse_FieldNumber_Request = 1,
  ProtosWriteDescriptorResponse_FieldNumber_Success = 2,
};

@interface ProtosWriteDescriptorResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ProtosWriteDescriptorRequest *request;
/** Test to see if @c request has been set. */
@property(nonatomic, readwrite) BOOL hasRequest;

@property(nonatomic, readwrite) BOOL success;

@end

#pragma mark - ProtosSetNotificationRequest

typedef GPB_ENUM(ProtosSetNotificationRequest_FieldNumber) {
  ProtosSetNotificationRequest_FieldNumber_RemoteId = 1,
  ProtosSetNotificationRequest_FieldNumber_ServiceUuid = 2,
  ProtosSetNotificationRequest_FieldNumber_SecondaryServiceUuid = 3,
  ProtosSetNotificationRequest_FieldNumber_CharacteristicUuid = 4,
  ProtosSetNotificationRequest_FieldNumber_Enable = 5,
};

@interface ProtosSetNotificationRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *serviceUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *secondaryServiceUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *characteristicUuid;

@property(nonatomic, readwrite) BOOL enable;

@end

#pragma mark - ProtosSetNotificationResponse

typedef GPB_ENUM(ProtosSetNotificationResponse_FieldNumber) {
  ProtosSetNotificationResponse_FieldNumber_RemoteId = 1,
  ProtosSetNotificationResponse_FieldNumber_Characteristic = 2,
  ProtosSetNotificationResponse_FieldNumber_Success = 3,
};

@interface ProtosSetNotificationResponse : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite, strong, null_resettable) ProtosBluetoothCharacteristic *characteristic;
/** Test to see if @c characteristic has been set. */
@property(nonatomic, readwrite) BOOL hasCharacteristic;

@property(nonatomic, readwrite) BOOL success;

@end

#pragma mark - ProtosOnCharacteristicChanged

typedef GPB_ENUM(ProtosOnCharacteristicChanged_FieldNumber) {
  ProtosOnCharacteristicChanged_FieldNumber_RemoteId = 1,
  ProtosOnCharacteristicChanged_FieldNumber_Characteristic = 2,
};

@interface ProtosOnCharacteristicChanged : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite, strong, null_resettable) ProtosBluetoothCharacteristic *characteristic;
/** Test to see if @c characteristic has been set. */
@property(nonatomic, readwrite) BOOL hasCharacteristic;

@end

#pragma mark - ProtosDeviceStateResponse

typedef GPB_ENUM(ProtosDeviceStateResponse_FieldNumber) {
  ProtosDeviceStateResponse_FieldNumber_RemoteId = 1,
  ProtosDeviceStateResponse_FieldNumber_State = 2,
};

@interface ProtosDeviceStateResponse : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite) ProtosDeviceStateResponse_BluetoothDeviceState state;

@end

/**
 * Fetches the raw value of a @c ProtosDeviceStateResponse's @c state property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t ProtosDeviceStateResponse_State_RawValue(ProtosDeviceStateResponse *message);
/**
 * Sets the raw value of an @c ProtosDeviceStateResponse's @c state property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetProtosDeviceStateResponse_State_RawValue(ProtosDeviceStateResponse *message, int32_t value);

#pragma mark - ProtosConnectedDevicesResponse

typedef GPB_ENUM(ProtosConnectedDevicesResponse_FieldNumber) {
  ProtosConnectedDevicesResponse_FieldNumber_DevicesArray = 1,
};

@interface ProtosConnectedDevicesResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ProtosBluetoothDevice*> *devicesArray;
/** The number of items in @c devicesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger devicesArray_Count;

@end

<<<<<<< HEAD
=======
#pragma mark - ProtosMtuSizeRequest

typedef GPB_ENUM(ProtosMtuSizeRequest_FieldNumber) {
  ProtosMtuSizeRequest_FieldNumber_RemoteId = 1,
  ProtosMtuSizeRequest_FieldNumber_Mtu = 2,
};

@interface ProtosMtuSizeRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite) int32_t mtu;

@end

#pragma mark - ProtosMtuSizeResponse

typedef GPB_ENUM(ProtosMtuSizeResponse_FieldNumber) {
  ProtosMtuSizeResponse_FieldNumber_RemoteId = 1,
  ProtosMtuSizeResponse_FieldNumber_Mtu = 2,
};

@interface ProtosMtuSizeResponse : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *remoteId;

@property(nonatomic, readwrite) int32_t mtu;

@end

>>>>>>> b43127bedca75d2fdfa30948f319a7204966a51d
NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
