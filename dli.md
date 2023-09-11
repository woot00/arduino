
NVDIA 계정을 만든다.

**Jetson Nano Developer Kit SD Card Image**를 **NVIDIA**에서 제공한다. (이때 SD카드 Formatter를 하고

*https://developer.nvidia.com/embedded/learn/get-started-jetson-nano-devkit* 이미지를 굽는다.)

*https://www.balena.io/etcher/* 에서 download etcher를 한다.

파워선을 기준으로 파워선-HDMI선-마우스-키보드-와이파이 동굴 순으로 선을 제슨나노에 연결한다.

쿨링팬도 연결한다.

마이크로 sd카드를 제슨에 넣고 우분투를 설치한다.

카메라를 설치한다.

터미널을 열어서 카메라 작동 코드를 제슨나노에 연결한다.

온도, 메모리 체크 위한 팩키지도 설치한다.

*http://192.168.55.1:8888* 에 들어가서 먼저 ***Hello camera*** 에서 사진의 크기와 모양을 설정하고 running한다.

두번때로 ***classification*** 에 들아가서 대상이 USB camera로 되어 있는 것을 CSI camera로 바꾸고 주제 "thumbs"에 맞게 **thumbs up, thumbs down** 에 대한 데이터셋과 카테고리를 찍고 훈련시켜서 올린다.
