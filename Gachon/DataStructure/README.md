# Data Structure

## 강의 정보

* 교수님: 오상엽 교수님.
* 교재: 데이터 구조 오상엽 저.
* 학기: 2학년 1학기. 2021년도 1학기 수강.

## 일자별 필기

### 3월 9일

#### Data

* 현실 세계에서 관측된 값.
* 사실 그 자체.
* 컴퓨터에 의해서 처리되어 사용자에게 보다 유용한 결과를 제공할 때 정보(information)이라 함.

#### Structure / Architecture

Structure : SW
Architecture : HW.

#### Data Structure

* Linear Structure
    * Array-based
        * Stack
        * Queue
        * Deque
* Non-Linear Structure
    * Pointer-based.
        * tree
        * graph
        * linked-list(according to this sorting method)

#### 데이터의 표현

1. bit
    * binary digit
    * 1bit : 0 or 1.
    * 정보 표현의 최소 단위.
1. byte
    * 8bit.
    * 문자 표현의 최소 단위.
    * 문자 코드
        * ASCII
            * Americal Standard Code for Information Interchange
            * 7 + 1bit.
            * 생략.
        * EBCDIC
            * Extended Bin Coded Dec Interchange Code
            * 8bit.
            * IBM 대형 컴퓨터에서 사용.
        * Unicode
            * 16bit.
            * 2 ^ 16 = 65536개 표현 가능.
            * 한글 표현 가능.
                * 초성 19개
                * 중성 21개
                * 종성 27개
                * 19 * 21 * (27 + 1) = 11,172
1. field (=item)
    * 문자가 모여 의미있는 정보의 한 단위.
1. Record
    * ***연관된*** 항목의 모임.
1. file
    * 두 가지 정의 존재.
    
    1. ***연관된*** 레코드의 모임.
    1. 기억장치에 저장된 문자열들의 모임으로, 보조기억장치에 저장된 데이터의 한 단위.

bit -> byte -> field -> record -> file -> Database

##### 데이터의 크기

* Kilo
    * 1024
* Mega
    * 2 ^ 20
    * 1,048,576
* Giga
    * 2 ^ 30
    * 1,073,741,824
* Terra
    * 2 ^ 40
* Peta
    * 2 ^ 50
* Exa
    * 2 ^ 60
* Zeta
    * 2 ^ 70
* Yotta
    * 2 ^ 80

##### 보조기억장치 저장 단위

섹터 단위로 저장.

##### 데이터의 단위

* 1byte에서 첫 4비트를 zone, 다음 4비트를 digit 비트라 함.
* 4bit: nibble.
* word
    * 2byte : Half word
    * 4byte : Full word
    * 8byte : Double word.

### 3월 10일

#### 데이터의 표현

1. Database
    * file vs DB
        * file: 사용자 관리
        * DB: 소프트웨어가 관리
    * 어느 특정 조직의 응용 업무에 공동 사용하기 위해 ***여러 파일들***의 중복성(redundancy)을 최소화하여 하나의 파일로 구성해놓은 것.
    * DBMS(DB Management System)에 의해 관리되는 데이터의 단위.
        * DBMS의 역할
            1. 정의
            1. 조작
            1. 제어
1. Block단위
    * 주기억장치와 보조기억장치간 전송 단위.
    * DMA(Direct Memory Access)에서 사용.

#### 컴퓨터 내에서 데이터의 표현

##### 조직도

* 데이터
    * 수
        * 정수
            * 이진 정수 표현법
                * signed magnitude(부호와 절댓값)
                * 1's complement
                * 2's complement
            * 십진 정수 표현법
                * pack format
                * zone format
        * 실수
            * 64 bias
            * 128 bias
            * 127 bias
    * 문자
        * ASCII
        * EBCDIC
        * Unicode

##### 각각의 설명

* fixed point number(정수) 이진 표기.
    * 양수는 모두 공통.
    * signed magnitude(부호와 절댓값)
        * 0번 비트 sign bit.
        * sign bit 제외 양수와 동일.
        * +0, -0 존재.
        * n bit 표현시 -(2^(n-1) - 1) ~ 2^(n-1) - 1
        * 예
            * +14: 0000 1110, -14: 1000 1110
            * +0: 0000 0000, -0: 1000 0000
    * 1's complement
        * +0, -0 존재.
        * 음수는 1의 보수로 표현.
        * 사인비트 오버플로우시 1을 더해야 함.
        * n bit 표현시 -(2^(n-1) - 1) ~ 2^(n-1) - 1
        * 예
            * +14: 0000 1110, -14: 1111 0001
            * +0: 0000 0000, -0: 1111 1111
    * 2's complement
        * 음수는 2의 보수로 표현.
* 10진 정수
    * IBM 대형 기종 사용.
    * EBCDIC코드 지원.
    * pack format
        * 연산 가능, 출력 불가.
        * 1byte에 10진 정수 2자리를 표현.
        * 최우측 바이트의 digit 부분에는 부호가 표현.
            * 양수: 0xA, **0xC**, 0xE, **0xF**
            * 음수: 0xB, 0xD
    * zone format
        * 연산 불가, 출력 가능.
        * 1바이트에 10진 정수 1자리를 표현.
        * 최우측 바이트의 zone 부분에는 부호가 표현.
        * 최우측 바이트 제외 나머지의 zone 영역에는 0xF가 들어감.

### 3월 16일

#### 컴퓨터 내에서 데이터의 표현

* floating point number(부동소수점) 이진표기.
    * 4바이트 기준 설명.
    * sign-exponent-mantissa
    * 부호-지수-가수
    * 64bias
        * 16진수 기준 정규화(normalisation)
        * 소수점 바로 뒤에 유효숫자.
        * 지수 7비트, 가수 24비트.
        * 예
            * -27.75 -> -11011.11 -> -1B.C -> -0.1BC * 16^2
            * 1 100 0010 0001 1011 1100 0000 0000 0000
    * **128bias**(가장 많이 사용)
        * 2진수 기준 정규화.
        * 소수점 바로 뒤에 유효숫자.
        * 지수 8비트, 가수 23비트(1비트 생략해서 총 24비트 숫자.)
        * 예
            * -240.625 -> -11110000.101 -> -0.11110000101 * 2^8
            * 1 100 0100 0 111 0000 1010 0000 0000 0000
            * 0xC470A000
            * 유효숫자중 첫 1 생략(hidden bit)
    * 127bias
        * 소수점 바로 앞에 1개로 정규화.
        * 128bias와 지수만 다름.
        * 예
            * -1.1110000101 * 2^6
            * 1 100 0011 0 111 0000 1010 0000 0000 0000
            * 0xC370A000

* 포인터는 C에서 %p로 출력.

### 3월 17일

#### 알고리즘.

* 문제를 해결하기 위한 단계적인 절차와 과정을 의사코드로 표현.
* 알고리즘의 5대 조건
    * 입력
    * 출력
    * 명확성
    * 유한성
    * 실제성
* 알고리즘 분석을 위해 time complexity, space complexity를 사용.
* 시간 복잡도는 특정 문제 해결을 위한 알고리즘 수행시 사용되는 연산의 빈도수를 차수(degree)로 표현.
    * 분석을 위해 O-notation, Ω-notation, Θ-notation
    * O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(2^n) < O(n!) < O(n^m)
        * O(n^2)까지를 다항시간(polinomial time), O(2^n) 이후를 지수시간(exponential time)이라 한다.
    * O-notaion: 연산차수가 가장 높은 것을 계산 차수로 표현.
    * Ω-notation: 연산 차수가 가장 낮은 것을 계산 차수로 표현.
    * Θ-notation: O-notation과 Ω-notation과의 교집합. 최적 알고리즘.

-----

* 순서도, NS차트, Hipo, Unified Modeling Language, mnemonic language

