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
