# 기초 개념

## 1. 기초 입출력
- 기초 출력 키워드
```python
print("Hello World") 
```
- 기초 입력 키워드
```python
input("Enter something please: ")
```

- 특징 : 다음의 방법으로 줄을 바꿀 수 있다.
```python
print("Hello World")
print("Hello World")
print("Spam and Eggs")
```

- print 구문 내에서 따옴표를 사용하고 싶을 때는, 역슬레쉬 앞에 쓰고 따옴표를 사용함
```python
print('Brian\'s mother: He\'s not the Messiah. He\'s a very naughty boy!')
```

- 주석은 우물 정(#) 혹은 큰 따옴표 3개로 표현 가능하다.

- 한 print 구문 내에서 줄바꿈은 \n
```python
print("Hello\nWorld!") 
```
- string 구문 문장간에 + 연산을 사용하여 붙일 수 있다.
```python
print("First string" + ", " + "Second string") 
```
---
## 2. 숫자 연산

나눗셈을 하면 정수 형식 (X.xx)으로 표현됨
```python
(2 + 2) / 2 = 2.0 
```
* 0을 나누면 에러 발생

* "정수 / 정수 = 유리수" 로 표현됨

```python
2 ** 5 = 32         # 제곱 표현
20 // 6 = 3         # 나눗셈 몫만 표현
1.25 % 0.5 = 0.25   # 나눗셈 나머지만 표현
```
- 숫자의 문자화 표현
```python
print("2" + "2") # 정수를 문자화 하여 다해서 표현해낼 수 있다.
```
- 혼합 연산 오류
```python
print(1 + '2' + 3 + '4') # 따옴표가 없는 정수와 따옴표처리된 글자를 혼합연산하면 오류가 나온다.
```
- 출력 연산
```python
print("spam" * 3) # 문자에 정수 연산을 섞어서 표현을 여러번 할 수 있다.
```
- 자료형 변환 연산
```python
int("2") + int("3") # 큰따옴표안에 있는 글을 정수로 변경해서 연산 가능하다.
```
- 콘솔 입출력과 숫자 연산의 활용
```python
float(input("Enter a number: ")) + float(input("Enter another number: "))
# 결과값으로 입력한 값들의 합이 나옴.
```


## 3. 변수 활용
- 변수 선언
```python
x = 7 
```
- 변수 선언시 주의 사항
>   1. 변수 선언 할 경우, 글자, 숫자, 언더 바만 가능하고,
>   2. 변수 이름 처음에 숫자가 나올 수 없고,
>   3. 변수 이름 중간에 빈칸이 들어올 수 없다.

- 변수 선언 철폐
```python
foo = "a string"
del foo # 변수 선언 제거
```

- 변수 출력
```python
x = 2
print(x) # 출력 값 == 2
x += 3
print(x) # 출력 값 == 5

x = "spam"
print(x) # 출력 값 == spam
x += "eggs"
print(x) # 출력 값 == spameggs
```