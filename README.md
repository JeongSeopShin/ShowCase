# ShowCase
IoT Cloud Platform

● IoT 서비스 개요
- 카페 쇼케이스 안에 진열된 케이크나 과일들을 보관하기 위해서는 적정한 온도를 유지해 주는 것이 중요하다.
그렇기 때문에 실시간 온도를 아는 게 중요하다. 이 서비스를 통해서 실시간 온도 데이터를 받아와 사용자는 안드로이드 앱을 통해 실시간 온도 데이터를 확인할 수 있다. 또한 적정온도 값을 벗어나게 되면 LED에 불이 켜지며 Buzzer가 울리게 된다. AWS DynamoDB에서 측정된 로그 값들을 모두 확인할 수 있으며, 사용자는 웹과 앱을 통해서도 자신의 디바이스 목록과 로그 값들을 조회할 수 있다. 또한 적정온도에서 벗어났을 때 알림을 이메일로 보내준다.

● 주요 기능 설명

① AWS_IoT_DHT11 - 아두이노 센서값 AWS DB에 업로드 및 특정 DB 값에 따라 LED, Buzzer 제어
② Led.cpp - led pinMode 설정, Led.h의 함수를 이용한 led on/off 제어
③ Led.h - Led 관련 헤더파일
④ Buzzer.cpp - buzzer pinMode 설정, buzzer.h의 함수를 이용한 buzzer on/off 제어
⑤ Buzzer.h - buzzer에 관련 헤더파일
⑥ arduino_secrets.h - 인증서 등록, 데이터 연결

⑦ Android-RestAPI-master - 안드로이드에서 사물 목록 조회, 상태 조회/변경, 사물로그 확인
⑧ activity_device - 아두이노 센서값 (temperature, led, buzzer) 조회, buzzer의 db값을 변경하여 ON/OFF 제어 하기 위한 xml
⑨ GetThingShadow.java - Device Shadow를 통해 tag 이름의 센서값을 각각 받아옴
⑩ DeviceActivity.java - 변경을 위해 입력한 buzzer값을 db로 넘김
⑪ GetLog.java - 각 태그 이름에 맞는 센서값을 가져옴

⑫ RecordingDeviceDataJavaProject2, LogDeviceLambdaJavaProject, UpdateDeviceLambdaJavaProject, GetDeviceLambdaJavaProject, ListingDeviceLambdaJavaProject - eclipse lamda함수를 통해 AWS DB와 연동
