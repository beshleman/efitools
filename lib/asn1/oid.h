/* Object identifiers (OIDs) used by strongSwan
 * Copyright (C) 2003-2008 Andreas Steffen, Hochschule fuer Technik Rapperswil
 * 
 * This file has been automatically generated by the script oid.pl
 * Do not edit manually!
 */

#ifndef OID_H_
#define OID_H_

typedef struct {
    u_char octet;
    u_int  next;
    u_int  down;
    u_int  level;
    const u_char *name;
} oid_t;

extern const oid_t oid_names[];

#define OID_UNKNOWN							-1
#define OID_NAME_DISTINGUISHER				6
#define OID_PILOT_USERID					16
#define OID_PILOT_DOMAIN_COMPONENT			17
#define OID_COMMON_NAME						20
#define OID_SURNAME							21
#define OID_SERIAL_NUMBER					22
#define OID_COUNTRY							23
#define OID_LOCALITY						24
#define OID_STATE_OR_PROVINCE				25
#define OID_ORGANIZATION					26
#define OID_ORGANIZATION_UNIT				27
#define OID_TITLE							28
#define OID_DESCRIPTION						29
#define OID_USER_CERTIFICATE				30
#define OID_NAME							31
#define OID_GIVEN_NAME						32
#define OID_INITIALS						33
#define OID_UNIQUE_IDENTIFIER				34
#define OID_DN_QUALIFIER					35
#define OID_ROLE							36
#define OID_SUBJECT_KEY_ID					39
#define OID_KEY_USAGE						40
#define OID_SUBJECT_ALT_NAME				42
#define OID_BASIC_CONSTRAINTS				44
#define OID_CRL_NUMBER						45
#define OID_CRL_REASON_CODE					46
#define OID_DELTA_CRL_INDICATOR				49
#define OID_NAME_CONSTRAINTS				52
#define OID_CRL_DISTRIBUTION_POINTS			53
#define OID_CERTIFICATE_POLICIES			54
#define OID_ANY_POLICY						55
#define OID_POLICY_MAPPINGS					56
#define OID_AUTHORITY_KEY_ID				57
#define OID_POLICY_CONSTRAINTS				58
#define OID_EXTENDED_KEY_USAGE				59
#define OID_FRESHEST_CRL					61
#define OID_INHIBIT_ANY_POLICY				62
#define OID_TARGET_INFORMATION				63
#define OID_NO_REV_AVAIL					64
#define OID_CAMELLIA128_CBC					75
#define OID_CAMELLIA192_CBC					76
#define OID_CAMELLIA256_CBC					77
#define OID_RSA_ENCRYPTION					90
#define OID_MD2_WITH_RSA					91
#define OID_MD5_WITH_RSA					92
#define OID_SHA1_WITH_RSA					93
#define OID_RSAES_OAEP						94
#define OID_SHA256_WITH_RSA					96
#define OID_SHA384_WITH_RSA					97
#define OID_SHA512_WITH_RSA					98
#define OID_SHA224_WITH_RSA					99
#define OID_PBE_MD5_DES_CBC					101
#define OID_PBE_SHA1_DES_CBC				102
#define OID_PBKDF2							103
#define OID_PBES2							104
#define OID_PKCS7_DATA						106
#define OID_PKCS7_SIGNED_DATA				107
#define OID_PKCS7_ENVELOPED_DATA			108
#define OID_PKCS7_SIGNED_ENVELOPED_DATA		109
#define OID_PKCS7_DIGESTED_DATA				110
#define OID_PKCS7_ENCRYPTED_DATA			111
#define OID_EMAIL_ADDRESS					113
#define OID_UNSTRUCTURED_NAME				114
#define OID_PKCS9_CONTENT_TYPE				115
#define OID_PKCS9_MESSAGE_DIGEST			116
#define OID_PKCS9_SIGNING_TIME				117
#define OID_CHALLENGE_PASSWORD				119
#define OID_UNSTRUCTURED_ADDRESS			120
#define OID_EXTENSION_REQUEST				121
#define OID_MD2								124
#define OID_MD5								125
#define OID_3DES_EDE_CBC					127
#define OID_EC_PUBLICKEY					131
#define OID_C2PNB163V1						134
#define OID_C2PNB163V2						135
#define OID_C2PNB163V3						136
#define OID_C2PNB176W1						137
#define OID_C2PNB191V1						138
#define OID_C2PNB191V2						139
#define OID_C2PNB191V3						140
#define OID_C2PNB191V4						141
#define OID_C2PNB191V5						142
#define OID_C2PNB208W1						143
#define OID_C2PNB239V1						144
#define OID_C2PNB239V2						145
#define OID_C2PNB239V3						146
#define OID_C2PNB239V4						147
#define OID_C2PNB239V5						148
#define OID_C2PNB272W1						149
#define OID_C2PNB304W1						150
#define OID_C2PNB359V1						151
#define OID_C2PNB368W1						152
#define OID_C2PNB431R1						153
#define OID_PRIME192V1						155
#define OID_PRIME192V2						156
#define OID_PRIME192V3						157
#define OID_PRIME239V1						158
#define OID_PRIME239V2						159
#define OID_PRIME239V3						160
#define OID_PRIME256V1						161
#define OID_ECDSA_WITH_SHA1					163
#define OID_ECDSA_WITH_SHA224				165
#define OID_ECDSA_WITH_SHA256				166
#define OID_ECDSA_WITH_SHA384				167
#define OID_ECDSA_WITH_SHA512				168
#define OID_USER_PRINCIPAL_NAME				183
#define OID_STRONGSWAN						186
#define OID_TCGID							193
#define OID_AUTHORITY_INFO_ACCESS			198
#define OID_IP_ADDR_BLOCKS					200
#define OID_POLICY_QUALIFIER_CPS			202
#define OID_POLICY_QUALIFIER_UNOTICE		203
#define OID_SERVER_AUTH						205
#define OID_CLIENT_AUTH						206
#define OID_OCSP_SIGNING					213
#define OID_XMPP_ADDR						215
#define OID_AUTHENTICATION_INFO				217
#define OID_ACCESS_IDENTITY					218
#define OID_CHARGING_IDENTITY				219
#define OID_GROUP							220
#define OID_OCSP							223
#define OID_BASIC							224
#define OID_NONCE							225
#define OID_CRL								226
#define OID_RESPONSE						227
#define OID_NO_CHECK						228
#define OID_ARCHIVE_CUTOFF					229
#define OID_SERVICE_LOCATOR					230
#define OID_CA_ISSUERS						231
#define OID_IKE_INTERMEDIATE				236
#define OID_DES_CBC							240
#define OID_SHA1							241
#define OID_SHA1_WITH_RSA_OIW				242
#define OID_ECGDSA_PUBKEY					261
#define OID_ECGDSA_SIG_WITH_RIPEMD160		264
#define OID_ECGDSA_SIG_WITH_SHA1			265
#define OID_ECGDSA_SIG_WITH_SHA224			266
#define OID_ECGDSA_SIG_WITH_SHA256			267
#define OID_ECGDSA_SIG_WITH_SHA384			268
#define OID_ECGDSA_SIG_WITH_SHA512			269
#define OID_SECT163K1						292
#define OID_SECT163R1						293
#define OID_SECT239K1						294
#define OID_SECT113R1						295
#define OID_SECT113R2						296
#define OID_SECT112R1						297
#define OID_SECT112R2						298
#define OID_SECT160R1						299
#define OID_SECT160K1						300
#define OID_SECT256K1						301
#define OID_SECT163R2						302
#define OID_SECT283K1						303
#define OID_SECT283R1						304
#define OID_SECT131R1						305
#define OID_SECT131R2						306
#define OID_SECT193R1						307
#define OID_SECT193R2						308
#define OID_SECT233K1						309
#define OID_SECT233R1						310
#define OID_SECT128R1						311
#define OID_SECT128R2						312
#define OID_SECT160R2						313
#define OID_SECT192K1						314
#define OID_SECT224K1						315
#define OID_SECT224R1						316
#define OID_SECT384R1						317
#define OID_SECT521R1						318
#define OID_SECT409K1						319
#define OID_SECT409R1						320
#define OID_SECT571K1						321
#define OID_SECT571R1						322
#define OID_AES128_CBC						331
#define OID_AES128_GCM						332
#define OID_AES128_CCM						333
#define OID_AES192_CBC						334
#define OID_AES192_GCM						335
#define OID_AES192_CCM						336
#define OID_AES256_CBC						337
#define OID_AES256_GCM						338
#define OID_AES256_CCM						339
#define OID_SHA256							341
#define OID_SHA384							342
#define OID_SHA512							343
#define OID_SHA224							344
#define OID_NS_REVOCATION_URL				350
#define OID_NS_CA_REVOCATION_URL			351
#define OID_NS_CA_POLICY_URL				352
#define OID_NS_COMMENT						353
#define OID_EMPLOYEE_NUMBER					356
#define OID_PKI_MESSAGE_TYPE				362
#define OID_PKI_STATUS						363
#define OID_PKI_FAIL_INFO					364
#define OID_PKI_SENDER_NONCE				365
#define OID_PKI_RECIPIENT_NONCE				366
#define OID_PKI_TRANS_ID					367
#define OID_TPM_MANUFACTURER				373
#define OID_TPM_MODEL						374
#define OID_TPM_VERSION						375
#define OID_TPM_ID_LABEL					376

#define OID_MAX								377

#endif /* OID_H_ */
