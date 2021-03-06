# 조건문 

우리는 일상생활에서 다음과 같은 상황에 따라 수행하여야 하는 일이 달라지는 것이 

* *만일 기말고사 성적이 좋으면 친구와 맛있는 저녁을 먹는다.*

* *만일 기말고사 성적아 나쁘면 방학 동안 열심히 복습힌다.*

* *만일 외부 온도가 높으 반바지를 입는다.*

* *만일 구두가 맞지 않으면, 환불한다.*

일상 생활에서 경우에 따라 특정한 적업을 수행는 경우가 많다. C++에서도 프로그램 문잘이 실행 중에 경우에 따라서 프로그램이 분기되어 
서로 다른 문장을 실행할 수 있다. C++ 에서는 다양한 상황을 표현하기 위해서 조건(condition) 개념을 사용하고 
**연신 결과가 참(true) 또는 거짓(false)이 되는 조건을 표현할 수 있는** 조건식을 적용한다. 
조건식은 다음과 같이 비교(관계) 연산자와 논리 연산자의 조합으로 표현된다. 

```C++
 x < 10             // x 가 10보다 작으면 true, 아니면 false
 !(x < y)           // x 가 y 보다 크거나 같으면 true, 아니면 false
 w <= 0 || h >= 80  // x 가 0보다 이하이거나 h가 80이상이면 true, 아니면 false
 x > 3 && x < 7     // x 가 3보다 크고 7 미만이면 true, 아니면 false
```
앞에서 살펴본 조건식에서 알 수 있듯이 조건식의 결과는 **참(true)** 또는 **거짓(false)** 중 하나의 값을 가져야 한다.  

조건문은 조건식을 통한 검사를 통해 프로그램 실행을 분기할 수 있도록 하는 문장으로 조건식이 사용된다. 

## if 문

```if문```의 형식은 다음과 같다.
```C++
if (condition) {문장 1; 문장 2; ... }
```
```C++
if (condition) {문장 1;
    문장 2;
    문장 3;
    ....
}                      //condition 이 참을 때 중괄호 안의 문장을 순차적으로 실행 
항상 실행되는 문장;
```

if 문의 괄호 안의 _condition_ 은 앞에서 살펴본 조건식으로 표현된다. _condition_ 주위의 괄호는 필수적이다.
condition은 특정 조건을 검사하는 부분으로 조건식이 될 것이며 하나의 문장을 적을 수 있는 중괄호({}) 내부를
if 문의 몸체라고 한다. 조건이 만족되었을 때 실행되는 프로그램 문장이 여러 개 인 경우 중괄호를 사용하고 문장이 하나이면 
중괄호를 생략을 할 수 있다. 

## if-else 문

앞에서 살펴본 ```if 문```은 _condition_ 을 만족하는 경우에 대해서만 해야할 일이 있는 경우 
```if-else 문```은 ```if 문``` 의 _condtion_ 을 만족한 경우 그애 따른 일을 처리하고 그렇지 안으면 
다른 일을 처리해야하는 경우 사용된다. ```if```는 독립적으로 사용될 수도 있고 ```else```와 짝을 맞추어 사용될 수도 있다. 


```if-else 문```의 형식은 다음과 같다.

```C++
if (condition) {   // condition이 만족하는 경우 실행되는 블록
  문장 1;
  문장 2;
  문장 3;
  ....
}
else {            // condition이 만족하지 않으면 실행되는 블록
  문장 10;
  문장 11;
  문장 12;
  ...
}
```
앞의 형식 예에서 _condtion_ 을 만족하면 "문장 1" 이 포함된 중괄호의 문장이 실행되고 _condition_ 이 만족되지
않는 경우 "문장 10"이 포함된 중괄호의 문장이 실행된다. 


## if-else-else if 문

앞의 ```if-else 문```의 ```else```의 조건을 더욱 세분한 조건으로 구분해야 할 경우 ```else if 문```을 사용하게 된다. 
```else if  문```이 사용되는 형식은 다음과 같다. 

```C++
if (condition 1) {
  문장 1;
  ...
}
else if (condition 2) {
  문장 2;
  ...
}
else {
  문장 3;
  ...
}
``` 
앞의 형식에서 ```문장 1```은 _condition 1_ 을 만족하는 경우 실행되고 ```문장 2```는 
_condition 2_ 를 만족하는 경우는 실행된다. ```문장 3```은 _condition 1_ 과 _condition 2_ 가
만족되지 않은 경우 실행된다.

##  switch-case-brea-default 문

```switch 문```은 ```if else 문```과 같이 프로그램 제어 흐름을 여러 방향으로 나누기 위해 사용된다. ```switch 문```
은  ```case```, ```break```, ```default``` 키워드와 함께 사용된다. 

```switch 문```의 형식은 다음과 같다. 

```c++
switch (expression) {
  case value1:
      문장 1;
      ....
      break;
  case value2:
      문장 2;
      ...
      break;
  ...
  defalut:
      문장 n;
      ...
}
```
```switch 문```에서  _expression_ 을 평가하여  _expression_ 의 값이 ```case 문```의 값과 
같으면 ```case 문``` 내부의 문장을 실행하고 ```break 문```을 만나면 ```switch 문```  블록의 
싱행을 멈춘다. 만약 일치된 값이 없으면 ```default 문``` 내부 문장을 실행한다. 
_expression_ 과 ```case 문``` 의 값들은 모두 정수형이어야 한다. 이 때 ```break 문``` 이
없는 경우는 case의 값의 조건이 논리 합의 결과가 되어야 한다. 

```switch 문```의 ```break 문```은 여러 ```case  문``` 중 하나의 ```case 문``` 만 실행되게
한다. 만약  ```case 문```에 ```break 문```이 없으면 다음 ```case 문```도 실행하게 된다. 

```case 문``` 은 순서대로 배열할 필요는 없다. ```default 문```도 마지막 ```case 문```일 필요가 없다. 
```default  문```이 마지막에 나타날 경우 ```break 문```은 생략할 수 있으나 ```default  문``` 이 
```case 문```  사이에 배치될 경우 ```break 문```은 필요하다. 

## ? : 조건 연산자.

조건 연산자는 ```?:``` 기호를 사용하며 3개의 인수가 필요한 유일한 연산자이다. 

조건 연산자의 형식은 다음과 같다.

```C++
relation ? trueStatement : falseStatement;
```
_relation_ 이 참이면 _trueStatement_ 를 실행하고  거짓이면 
_falseStatement_ 를 실행한다.





