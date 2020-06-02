## BOJ10610 - 30
문제: (https://www.acmicpc.net/problem/10610)

이 문제에서 가장 먼저 고려할 것은 "N이 최대 10^5개로 구성되어 있다"이다. 이 말은 최댓값이 10만이란 소리가 아니라 자릿수가 10만 개란 소리다. 숫자가 이렇게 클 경우 정수형, 실수형이 아니라 문자형으로 처리해주어야 한다.  

<b>문자열으로 받아 내부요소 정렬(내림차순)</b>
```cpp
string szData;
cin >> szData;
sort(szData.begin(), szData.end(), greater<char>());
```

<br>

<b>두번째, 30의 배수인걸 확인하는 법</b>
1. 0이 존재하는가
2. 다 더했을 때 3의 배수인가
```cpp
int sum(0);
for (auto i : szData) {
	sum += atoi(&i);
}
if (szData.back() == '0' && sum % 3 == 0) {
	cout << szData << endl;
}
else {
	cout << -1 << endl;
}
```

<br>

#### 실수
최댓값이 10^5자리인걸 까먹고, 30의 배수를 확인하기 위해 N을 stoi로 한번에 int로 바꾸려 했다. 런타임에러 났음.