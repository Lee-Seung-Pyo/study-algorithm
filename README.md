# study-algorithm
for preparing 'coding test'  
환경: C++14, Visual Studio 2019 version 16.4 ~  

### 완전 탐색 - BFS, DFS
[BOJ1260 DFS와 BFS](/src/BOJ1260)  
[BOJ2667 단지번호붙이기](/src/BOJ2667)  
[BOJ2178 미로 탐색](/src/BOJ2178)  
[BOJ1926 그림](/src/BOJ1926)  
[BOJ4179 불!](/src/BOJ4179)  
[BOJ1697 숨바꼭질](/src/BOJ1697)  

### 재귀  
[BOJ1629 곱셈](/src/BOJ1629)  
[BOJ11729 하노이 탑 이동 순서](/src/BOJ11729)  
[BOJ1074 Z](/src/BOJ1074)  
[BOJ2447 별 찍기 - 10](/src/BOJ2447)  
[BOJ2448 별 찍기 - 11](/src/BOJ2448)  
[BOJ1992 쿼드트리](/src/BOJ1992)  

### 백트래킹  
[BOJ15649 N과 M (1)](/src/BOJ15649)  
[BOJ15652 N과 M (4)](/src/BOJ15652)  
[BOJ9663 N-Queen](/src/BOJ9663)  

### 동적 계획법(DP)
[BOJ1003 피보나치 수열](/src/BOJ1003)  
[BOJ2579 계단 오르기](/src/BOJ2579)  
[BOJ1463 1로 만들기](/src/BOJ1463)  

### 그리디
[BOJ10610 30](/src/BOJ10610)  

### 다익스트라 알고리즘
[BOJ1753 최단경로](/src/BOJ1753)  

### 구현
[BOJ10871 X보다 작은 수](/src/BOJ10871)  
[BOJ2504 괄호의 값](/src/BOJ2504)  


## 자료구조
#### 배열
[BOJ10808 알파벳 개수](/src/BOJ10808)  
[BOJ10807 개수 세기](/src/BOJ10807)  
[BOJ11328 Strfry](/src/BOJ11328)  
[BOJ13300 방 배정](/src/BOJ13300)  
[BOJ1475 방 번호](/src/BOJ1475)  
[BOJ1919 애너그램 만들기](/src/BOJ1919)  

#### 연결 리스트  
[BOJ1406 에디터](/src/BOJ1406)  
[BOJ5397 키로거](/src/BOJ5397)  
[BOJ1158 요세푸스 문제](/src/BOJ1158)  

#### 스택  
[BOJ10828 스택](/src/BOJ10828)  
[BOJ10773 제로](/src/BOJ10773)  
[BOJ1874 스택 수열](/src/BOJ1874)  
[BOJ2493 탑](/src/BOJ2493)  
[BOJ6198 옥상 정원 꾸미기](/src/BOJ6198)  
[BOJ4949 균형잡힌 세상](/src/BOJ4949)  
[BOJ10799 쇠막대기](/src/BOJ10799)  
[BOJ2504 괄호의 값](/src/BOJ2504)  
[BOJ9012 괄호](/src/BOJ9012)  
[BOJ4889 안정적인 문자열](/src/BOJ4889)  

#### 큐  
[BOJ10845 큐](/src/BOJ10845)  
[BOJ18258 큐2](/src/BOJ18258)  
[BOJ2164 카드](/src/BOJ2164)  

#### 덱
[BOJ10866 덱](/src/BOJ10866)  
[BOJ1021 회전하는 큐](/src/BOJ1021)  
[BOJ5430 AC](/src/BOJ5430)  


## C++ STL 컨테이너  
자주 쓰이는 컨테이너들  
#### \<string>  
기존의 char[] 문자배열과 같지만 마지막이 '\0'으로 끝나지 않음. 생성자에서 동적할당하고 소멸자에서 해제한다.  
begin(), end() 는 포인터 반환 / front(), back() 은 값 반환  

#### \<vector>  
자동으로 메모리가 할당되는 배열.  
활용: 그래프 구현할 때 간선이 많으면 행렬, 적으면 vector로 구현  

#### \<queue>  
queue  
활용: BFS  
priory_queue  
활용: 다익스트라  

#### \<algorithm>  
sort, max/min, fill 등 유용한 함수들 다수 존재  

#### \<climits> (\<limits.h>)  
기본 자료형의 최댓/최솟값 존재  
ex) INT_MAX, INT_MIN  

#### \<list>  
이중연결리스트  

#### \<stack>  
스택  
활용: 수식의 괄호 쌍, 전위/중위/후위 표기법, DFS, Flood Fill

#### \<sstream>  
문자열 다룰 때 유용  
stringstream: 문자열에서 내가 원하는 자료형의 데이터를 추출할 때  


## 기타  
코딩테스트와 개발은 다르다. 코딩테스트를 위한 팁.  

#### 기본 세팅  
```cpp
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	return 0;
}
```

#### 입출력 속도 빠르게 하기
(https://blog.encrypted.gg/923 표준입출력 참고)
```cpp
#define endl '\n'  // endl은 '개행+출력버퍼 비우기' 이므로 사용x
...
ios::sync_with_stdio(0);  // stdio출력버퍼와 싱크 해제, 원형은 (false)
cin.tie(0);  // cin명령을 수행하기 전에 cout버퍼를 비우지 않음, 원형은 (nullptr)
```

#### N의 한계값에 따른 대략적인 허용 시간복잡도 유추  
컴퓨터는 1초에 대략 3~5억개 정도의 연산을 처리할 수 있다.  
N≤11 ⇒ O(N!)  
<b>N≤25 ⇒ O(2^N^)</b>  
N≤100 ⇒ O(N^4^)  
N≤500 ⇒ O(N^3^)  
N≤3,000 ⇒ O(N^2^logN)  
<b>N≤5,000 ⇒ O(N^2^)</b>  
<b>N≤1,000,000 ⇒ O(NlogN)</b>  
<b>N≤10,000,000 ⇒ O(N)</b>  
(어디까지나 참고만 할 것)  
\+공간복잡도: 512MB ⇒ 1.2억개의 int  

#### 실수 사용시 주의사항
1. 오차가 발생할 수 밖에 없다.
2. double에 long long 범위의 정수를 함부로 담으면 안된다.  
\*double 유효숫자 15자리, long long 유효숫자 최대 19자리
3. 등호를 사용하면 안된다.  
\*`abs(a-b) < 1e-12` 와 같이 사용(`1e-12`: 10^-12^)  

#### 공백을 포함한 문자열 입력  
```cpp
string s;
getline(cin, s);  //std::getline()
```