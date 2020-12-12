// Fill in  your WiFi networks SSID and password
#define SECRET_SSID "KT_WLAN_25D4"
#define SECRET_PASS "000000fd44"

// Fill in the hostname of your AWS IoT broker
#define SECRET_BROKER "a3kwmk4cumx8zt-ats.iot.ap-northeast-2.amazonaws.com"

// Fill in the boards public certificate
const char SECRET_CERTIFICATE[] = R"(
-----BEGIN CERTIFICATE-----
MIICiTCCAXGgAwIBAgIVAMGb6NQM9Py7DkSlWEMFMQBcik2GMA0GCSqGSIb3DQEB
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMDExMDgxNDM4
MTFaFw00OTEyMzEyMzU5NTlaMBgxFjAUBgNVBAMTDU15TUtSV2lGaTEwMTAwWTAT
BgcqhkjOPQIBBggqhkjOPQMBBwNCAARydRPeJdV7JD5Ygtn0h3I4VGojIzu0enx3
z9l4asHvEknkpVdJ2wqmzk0TDV8yX0p3V1lskrNnbdu8FUL7zSBbo2AwXjAfBgNV
HSMEGDAWgBTvKebEV9QfnXiG/SqxrwYtx82DoDAdBgNVHQ4EFgQUxiKGWC14zaJk
yvNpLq9ZkYWnIvAwDAYDVR0TAQH/BAIwADAOBgNVHQ8BAf8EBAMCB4AwDQYJKoZI
hvcNAQELBQADggEBAMeWTzXIbT+VUr4cvU8P4mu5Eccx5xmp2LfX1DoMCbctu75E
4Lrht1jtB0Tl2+7fDtRVS/CIsZLv5i5G60kikd+wtyhJQ69AgXQEM8BUIFZcITwm
n3HQcjJN5ty1RbCwXU+nJkEyzLURgSsDNX7UR8azQBxoTxiLpx/15VrFXClttz7A
vJfA5ymytUGek/0cf6li3QfaOAEVsl1ixiv8o4PkfhMjAT3hfX+2OB3iTWfOry/k
TYg2x2luJJBudqYcCdlvmhKXYfoKJyYLKuTZa4wqi/8pmiRBAs1ms9UfwliP9SBS
zniHE+sW/DMdhamiRd0+UniMVtp5QOO0mzGoTTI=
-----END CERTIFICATE-----
)";
