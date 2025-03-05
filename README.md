# UC_Battle
Unreal 4.26 기반의 3D 배틀 게임입니다.

## 📌 목차
1. [🔎 프로젝트 소개](#-프로젝트-소개)
2. [🕒 프로젝트 기간](#-프로젝트-기간)
3. [🔗 클래스 다이어그램](#-클래스-다이어그램)
4. [🔄 진행 및 개선 사항](#-진행-및-개선-사항)
5. [⚡ 프로젝트 최적화 과정](#-프로젝트-최적화-과정)
6. [📝 개발 관점에서의 느낀 점](#-개발-관점에서의-느낀-점)

---

## 🔎 프로젝트 소개
- **장르** : 3D Battle Game
- **Engine** : Unreal Engine 4.26
- **IDE** : JetBrains Rider
- **목적** :
  - 무기 및 전투 시스템의 확장성을 고려한 클래스 구조 설계
  - ABP(애니메이션 블루프린트)와, Animation Notify를 통해 전투 이펙트 및 상태 전환을 학습
  - BP(블루프린트)에 컴퍼넌트를 추가하여 모듈화된 구조를 설계

<details>
  <summary>🎇 프로젝트 실행 방법</summary>

### 1️⃣ Git Clone
  ```bash
  git clone https://github.com/minhyeok1232/UC_Battle.git
```
### 2️⃣ 파일 경로
아래 경로로 이동합니다.
#### UC_Battle/U06_Battle_Bow

### 3️⃣ 실행 파일
U06_Battle.uproject 우 클릭 후,
✅ 'Generate Visual Studio project files' 클릭

### ❗ 만약 'Generate Visual Studio project files' 옵션이 보이지 않는다면?
[클릭하기](https://velog.io/@hani345/Unreal%EA%B3%BC-C%EC%97%B0%EB%8F%99%ED%95%98%EA%B8%B0)

### 4️⃣ IDE
현재 사용하는 IDE 환경에서 소스코드가 표시됩니다.<br>
솔루션 빌드 (Ctrl + B) 완료 후,<br>
✅ U06_Battle.uproject 클릭하여 실행



</details>


## 🎯 프로젝트 기간
- MVP 개발 기간 : 2024.11 ~ 2024.12
- 프로젝트 인원 : 1인 (개인)

## 🔗 클래스 다이어그램
### 객체지향 설계를 반영한 클래스 구조도
#### C++로 작성한 클래스 다이어그램
![image](https://github.com/user-attachments/assets/b1a34e98-9cdb-46c9-850e-4ba462f5a062)

## 🔄 진행 및 개선 사항

### 🔀 애니메이션 시스템
- BS(Blend Space)를 활용하여 걷기, 뛰기, 달리기 등 자연스럽게 전환하였습니다.
- Montage 및 Notify 시스템을 활용하여 애니메이션의 특정 타이밍을 조정하였습니다.
#### Animation Montage에 특정 시점에 Notify를 조정
![image](https://github.com/user-attachments/assets/7bfad7e6-4812-43b6-91a6-e62bf2a667d2)
![image](https://github.com/user-attachments/assets/08bbc26c-610d-4808-9114-0b47045459cc)


#### 무기별 애니메이션 로직 분리
- 일반 무기는 CAnimInstance에서 기본 상태 머신을 통해 관리하였습니다.
- Bow는 CAnimInstance_Bow에서 별도의 애니메이션 레이어를 적용하여 특수 동작을 구현하였습니다.
![image](https://github.com/user-attachments/assets/59b06b8b-e2da-4640-9615-5965b3b568dc)

#### Aim Offset을 활용한 상체 애니메이션 보정
AO(Aim Offset)을 적용하여 캐릭터가 특정 방향을 바라볼 때 상체 애니메이션을 자연스럽게 조정하였습니다.
조준 시(Bow_Aim) Blend Space와 결합(특정 Bone)하여 AO(Aim Offset)을 적용하였습니다.
![image](https://github.com/user-attachments/assets/fcc21486-9f06-4afb-901f-3fdd6021a540)



### 🤖 AI 시스템 개선
`AStar` 알고리즘을 활용하여 최적의 경로 탐색을 구현하였습니다.
- 격자 시스템으로 적 AI의 이동 가능 영역을 관리
- 실시간으로 경로를 재계산하여 동적 장애물 변화에도 유연하게 대응할 수 있도록 AI 이동 로직을 개선
![Image](https://github.com/user-attachments/assets/2a3a8b97-b556-4194-829d-876009aedce4)

### 💥 충돌 시스템 개선
- AABB(Axis-Aligned Bounding Box) 충돌

X, Y 축에 정렬된 직사각형 충돌 방식으로, 회전이 없으며 빠른 충돌 검사가 가능합니다.
연산이 적어 효율적이라는 장점이 있습니다.
<div align="left"> <img src="https://github.com/user-attachments/assets/b85f1793-ee27-426f-9917-fbb5e7653215" width="550" style="float: left; margin-right: 15px;"> </div>

<br><br>

- OBB(Oriented Bounding Box) 충돌

회전이 고려된 충돌 방식으로, 정확한 충돌 판정 가능합니다.
벡터 연산(내적) 과정으로 연산이 많아 회전이 필요한 오브젝트나 복잡한 충돌 처리가 필요한 경우 사용합니다.
<div align="left"> <img src="https://github.com/user-attachments/assets/de75111d-7c82-4e65-884f-9448e3563e9b" width="800" style="float: left; margin-right: 15px;"> </div>


## ⚡ 프로젝트 최적화 과정
### ✨ C++ 와 블루프린트 연계 
- `BlueprintNativeEvent`, `BlueprintImplementableEvent`, `BlueprintCallable`을 활용하여 C++과 Blueprint 사이에서 연동하였습니다.
  - 연산이 많이 필요한 핵심 로직은 C++로 처리하여 성능 최적화
  - 시각적 연출 및 애니메이션 등은 Blueprint로 구현
 <details>
  <summary>🎇 언리얼 블루프린트 함수 유형 정리 </summary>
   
   #### BlueprintCallable :
   - C++ 로 작성, 블루프린트 그래프에서 호출 가능하지만 변경이나 덮어쓰기는 불가능합니다. (ex.수학 함수)

   #### BlueprintImplementableEvent :
   - 헤더 파일(.h) 에 추가되지만, 함수 본문은 C++ 가 아닌 블루프린트 그래프에서 작성됩니다.
   - 표준 동작이 없는 이벤트를 자유롭게 변경할 수 있도록 하는 경우에 사용합니다. (ex.각 보스마다 다른 보상을 줌)
     
   #### BlueprintNativeEvent :
   - BlueprintCallable 과 BlueprintImplementableEvent 의 조합형으로 C++ 로 작성되었지만, 블루프린트에서 보조 또는 대체 가능합니다.
   - BlueprintNativeEvent 를 사용할 때는 함수 마지막에 "_Implementation" 을 붙여야 합니다.
     ![image](https://github.com/user-attachments/assets/cd7720a0-b428-43c8-92e6-a17a47808a90)

   </details>

<br><br>

### 데이터 에셋을 활용
#### CWeaponStructures.h
![image](https://github.com/user-attachments/assets/759f1a4d-3a63-4971-848f-f031a4f6f682)<br>
각 무기마다 데이터 구조체를 사용하여 저장합니다.
- 하드코딩 없이 구조체를 통해 무기 데이터를 효율적으로 관리
- 이 구조체를 기반으로 여러 개의 무기 데이터를 설정 가능

#### UCWeaponAsset.h
![image](https://github.com/user-attachments/assets/9826cdde-0542-40d3-a524-b7cc3d6aceed)<br>
UDataAsset을 활용한 무기 데이터를 저장합니다.
- UCWeaponAsset 클래스는 UDataAsset을 상속받아 무기 데이터를 하나의 데이터 에셋으로 저장
- FWeaponData 구조체를 포함하여 무기별 설정(공격력, 범위, 애니메이션 등)을 데이터로 관리
- 데이터 에셋을 활용하여 무기 밸런스 수정 시 코드 수정없이 데이터 에셋 조정으로 변경 가능

#### Data Asset(DA)
![image](https://github.com/user-attachments/assets/f3ef49ea-c5b3-4774-8858-357ec79cb2f6)<br>
각 무기별로 데이터 에셋을 생성합니다.



<br><br>

## 📝 개발 관점에서의 느낀 점
Win32 API와 C++을 활용하여 게임 엔진을 직접 구현하면서 `저수준 프로그래밍`의 중요성을 체감할 수 있었습니다.

단순한 비트맵 파일을 로드하는 과정조차도 많은 양의 코드가 필요했으며, 윈도우 핸들, 디바이스 컨텍스트 등의 시스템 객체를 다루면서 `하드웨어와`의 `인터페이스`에 대해 이해하게 되었습니다. 
이러한 경험을 통해 시스템 아키텍처와 그래픽 렌더링의 원리를 파악할 수 있었습니다.

이러한 저수준 프로그래밍 경험은 향후 Unity, Unreal Engine과 같은 상용 엔진을 다룰 때 엔진의 내부 동작을 깊이 이해하는 데 도움이 될 것이라 생각합니다. 
또한, 엔진의 기본 구조를 직접 구현해 본 경험이 최적화와 커스텀 렌더링 파이프라인 설계 등의 고급 기술을 익히는 데 중요한 밑바탕이 될 것이라 기대됩니다.

#### 플레이 영상 : [https://www.youtube.com/watch?v=XatDEKotysU](https://www.youtube.com/watch?v=XatDEKotysU)
![Image](https://github.com/user-attachments/assets/dc7bb543-bf0f-438f-9ed1-de4550a6c23a)
