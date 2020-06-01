## BOJ11053 - 가장 긴 증가하는 부분 수열  
(문제: https://www.acmicpc.net/problem/11053)  
(시간: 13분)  

dp문제.  

dp[n] = n번째 원소가 마지막인 수열 중 최대 길이  

O(N<sup>2</sup>) 로 해결. Segment Tree나 Binary Search 이용하면 O(NlogN)에도 풀 수 있다함.