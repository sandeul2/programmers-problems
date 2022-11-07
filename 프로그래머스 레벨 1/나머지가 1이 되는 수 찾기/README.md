# Coding-test solved in 나머지가 1이 되는 수 찾기

<p data-ke-size="size16">&nbsp;</p>
출처 : https://school.programmers.co.kr/learn/courses/30/lessons/87389
<p data-ke-size="size16">&nbsp;</p>
<h3 id="%EB%AC%B-%EC%A-%-C%--%EC%--%A-%EB%AA%--" data-ke-size="size23"><b>문제 설명</b></h3>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">자연수&nbsp;n이&nbsp;매개변수로&nbsp;주어집니다.&nbsp;n을&nbsp;x로&nbsp;나눈&nbsp;나머지가&nbsp;1이&nbsp;되도록&nbsp;하는&nbsp;가장&nbsp;작은&nbsp;자연수&nbsp;x를&nbsp;return&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">하도록&nbsp;solution&nbsp;함수를&nbsp;완성해주세요.&nbsp;답이&nbsp;항상&nbsp;존재함은&nbsp;증명될&nbsp;수&nbsp;있습니다.</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<h3 id="%EB%AC%B-%EC%A-%-C%--%EC%--%A-%EB%AA%--" data-ke-size="size23"><b>제한 조건</b></h3>
<p data-ke-size="size16">&nbsp;</p>
<ul style="list-style-type: disc;" data-ke-list-type="disc">
<li>3&nbsp;&le;&nbsp;n&nbsp;&le;&nbsp;1,000,000</li>
</ul>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<h3 id="%EB%AC%B-%EC%A-%-C%--%EC%--%A-%EB%AA%--" data-ke-size="size23"><b>입출력 예</b></h3>
<table style="border-collapse: collapse; width: 100%; height: 51px;" border="1" data-ke-align="alignLeft" data-ke-style="style12">
<tbody>
<tr style="height: 17px;">
<td style="width: 50%; height: 17px;">n</td>
<td style="width: 50%; height: 17px;">result</td>
</tr>
<tr style="height: 17px;">
<td style="width: 50%; height: 17px;">10</td>
<td style="width: 50%; height: 17px;">3</td>
</tr>
<tr style="height: 17px;">
<td style="width: 50%; height: 17px;">12</td>
<td style="width: 50%; height: 17px;">11</td>
</tr>
</tbody>
</table>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size18">입출력 예 설명</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16"><b>입출력 예 #1</b></p>
<ul style="list-style-type: disc;" data-ke-list-type="disc">
<li>10을 3으로 나눈 나머지가 1이고, 3보다 작은 자연수 중에서 문제의 조건을 만족하는 수가 없으므로, 3을 return 해야</li>
</ul>
<p data-ke-size="size16">&nbsp; &nbsp; &nbsp;</p>
<p data-ke-size="size16">&nbsp; &nbsp; &nbsp; 합니다.</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16"><b>입출력 예 #2</b></p>
<ul style="list-style-type: disc;" data-ke-list-type="disc">
<li>12를 11로 나눈 나머지가 1이고, 11보다 작은 자연수 중에서 문제의 조건을 만족하는 수가 없으므로,</li>
</ul>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp; &nbsp; &nbsp; &nbsp;11을 return 해야 합니다.</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
