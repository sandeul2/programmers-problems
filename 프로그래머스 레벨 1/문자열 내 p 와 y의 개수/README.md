# Coding-test solved in 문자열 내 p 와 y의 개수

<p data-ke-size="size16">&nbsp;</p>
출처 : https://school.programmers.co.kr/learn/courses/30/lessons/12916
<p data-ke-size="size16">&nbsp;</p>
<h3 id="%EB%AC%B-%EC%A-%-C%--%EC%--%A-%EB%AA%--" data-ke-size="size23"><b>문제 설명</b></h3>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">대문자와 소문자가 섞여있는 문자열 s가 주어집니다. s에 'p'의 개수와 'y'의 개수를 비교해 같으면 True,</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">다르면 False를 return 하는 solution를 완성하세요. 'p', 'y' 모두 하나도 없는 경우는 항상 True를 리턴합니다.</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">단, 개수를 비교할 때 대문자와 소문자는 구별하지 않습니다. 예를 들어 s가 "pPoooyY"면 true를 return하고</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">"Pyy"라면 false를 return합니다.</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<h3 id="%EB%AC%B-%EC%A-%-C%--%EC%--%A-%EB%AA%--" data-ke-size="size23"><b>제한 조건</b></h3>
<p data-ke-size="size16">&nbsp;</p>
<ul style="list-style-type: disc;" data-ke-list-type="disc">
<li>문자열 s의 길이 : 50 이하의 자연수</li>
</ul>
<p data-ke-size="size16">&nbsp;</p>
<ul style="list-style-type: disc;" data-ke-list-type="disc">
<li>문자열 s는 알파벳으로만 이루어져 있습니다.</li>
</ul>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<h3 id="%EB%AC%B-%EC%A-%-C%--%EC%--%A-%EB%AA%--" data-ke-size="size23"><b>입출력 예</b></h3>
<p data-ke-size="size16">&nbsp;</p>
<table style="border-collapse: collapse; width: 100%;" border="1" data-ke-align="alignLeft" data-ke-style="style12">
<tbody>
<tr>
<td style="width: 50%;">s</td>
<td style="width: 50%;">answer</td>
</tr>
<tr>
<td style="width: 50%;">"pPoooyY"</td>
<td style="width: 50%;">true</td>
</tr>
<tr>
<td style="width: 50%;">"Pyy"</td>
<td style="width: 50%;">false</td>
</tr>
</tbody>
</table>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size18"><b>입출력 예 설명</b></p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">입출력 예 #1<br />'p'의 개수 2개, 'y'의 개수 2개로 같으므로 true를 return 합니다.</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">입출력 예 #2<br />'p'의 개수 1개, 'y'의 개수 2개로 다르므로 false를 return 합니다.</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">※ 공지 - 2021년 8월 23일 테스트케이스가 추가되었습니다.</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
