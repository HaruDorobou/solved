# [Bronze II] 펭귄추락대책위원회 - 18228 

[문제 링크](https://www.acmicpc.net/problem/18228) 

### 성능 요약

메모리: 2804 KB, 시간: 32 ms

### 분류

구현

### 제출 일자

2025년 4월 22일 14:35:59

### 문제 설명

<p>일우는 친구들과 펭귄 얼음깨기 게임을 하고 있다. 계속 떨어지는 펭귄이 불쌍했던 일우는 INU 송년 코드페스티벌 참가자들을 펭귄추락대책위원회로 초대했다. 이 펭귄 얼음깨기는 리메이크 된 버전으로, <em>N</em>개의 얼음이 1부터 <em>N</em>까지 번호가 매겨져 있다. 게임은 얼음 1부터 <em>N</em>까지 순서대로 일렬로 나열된 공간에서 진행된다. 게임 시작 시, 펭귄 한 마리가 임의의 얼음 <em>K</em>위에 위치한다. 참가자는 몇 개의 얼음을 깨뜨려서 펭귄을 떨어뜨리는 것이 목적이다. 단, 펭귄이 밟고 있는 얼음은 깨뜨릴 수 없다. 각 얼음은 서로 다른 강도를 가지고 있어서 얼음 <em>i</em>(1 ≤ <em>i</em> ≤ <em>N</em>)를 깨뜨리는 데에 <em>A<sub>i</sub></em>만큼의 힘이 필요하다. 양옆으로 인접해 있는 얼음들을 하나의 그룹으로 봤을 때, 그룹의 끝이 얼음1 또는 <em>N</em>을 포함하지 않는다면 이 얼음 그룹은 아래로 추락하게 된다. 아래 예시를 보자.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/48844864-9015-4169-a707-b64598361e6f/-/preview/" style="height: 596px; width: 800px; margin-left: -50px; margin-right: -50px;"></p>

<p>얼음4와 얼음1을 각각 2와 7의 힘을 가해 깨뜨릴 수 있다. 이때, 펭귄이 위치한 얼음2와 얼음3으로 구성된 그룹은 얼음1 또는 얼음5를 포함하지 않으므로 아래로 추락하게 된다. 위 예시에서 펭귄을 떨어뜨릴 수 있는 최소 힘은 2+7=9가 된다.</p>

<p>펭귄추락대책위원회인 우리는 게임의 참가자가 펭귄을 떨어뜨릴 수 있는 최소 힘을 구해서 이를 보완하려고 한다. 펭귄을 떨어뜨릴 수 있는 최소 힘은 얼마일까?</p>

### 입력 

 <p>첫째 줄에 얼음의 개수를 의미하는 <em>N</em>(3 ≤ <em>N</em> ≤ 200,000)이 주어진다.</p>

<p>그다음 줄에는 <em>i</em>번째 얼음을 깨뜨리는 데에 드는 힘을 의미하는 정수 <em>A<sub>i</sub></em>(1 ≤ <em>A<sub>i</sub></em> ≤ 1,000,000,000)가 순서대로 주어진다.</p>

<p>예외적으로 펭귄이 위치한 곳은 <code>-1</code>로 표시되며, 펭귄이 얼음1 또는 <em>N</em>에 위치하는 경우는 존재하지 않는다.</p>

### 출력 

 <p>참가자가 펭귄을 떨어뜨릴 수 있는 최소 힘을 나타내는 정수를 출력하시오.</p>

