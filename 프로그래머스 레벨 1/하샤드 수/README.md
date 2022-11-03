# Coding-test solved in 하샤드 수

출처 : https://school.programmers.co.kr/learn/courses/30/lessons/12947

<h3 id="%EB%AC%B-%EC%A-%-C%--%EC%--%A-%EB%AA%--" data-ke-size="size23"><b>문제 설명</b></h3>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">양의&nbsp;정수&nbsp;x가&nbsp;하샤드&nbsp;수이려면&nbsp;x의&nbsp;자릿수의&nbsp;합으로&nbsp;x가&nbsp;나누어져야&nbsp;합니다.&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">예를&nbsp;들어&nbsp;18의&nbsp;자릿수&nbsp;합은&nbsp;1+8=9이고,&nbsp;18은&nbsp;9로&nbsp;나누어&nbsp;떨어지므로&nbsp;18은&nbsp;하샤드&nbsp;수입니다.&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">자연수&nbsp;x를&nbsp;입력받아&nbsp;x가&nbsp;하샤드&nbsp;수인지&nbsp;아닌지&nbsp;검사하는&nbsp;함수,&nbsp;solution을&nbsp;완성해주세요.</p>
<p data-ke-size="size16">&nbsp;</p>
<h3 id="%EB%AC%B-%EC%A-%-C%--%EC%--%A-%EB%AA%--" data-ke-size="size23"><b>제한 조건</b></h3>
<p data-ke-size="size16">&nbsp;</p>
<ul style="list-style-type: disc;" data-ke-list-type="disc">
<li>x는&nbsp;1&nbsp;이상,&nbsp;10000&nbsp;이하인&nbsp;정수입니다.</li>
</ul>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<h3 id="%EB%AC%B-%EC%A-%-C%--%EC%--%A-%EB%AA%--" data-ke-size="size23"><b>입출력 예</b></h3>
<table style="border-collapse: collapse; width: 100%;" border="1" data-ke-align="alignLeft" data-ke-style="style12">
<tbody>
<tr>
<td style="width: 50%;">arr</td>
<td style="width: 50%;">return</td>
</tr>
<tr>
<td style="width: 50%;">10</td>
<td style="width: 50%;">true</td>
</tr>
<tr>
<td style="width: 50%;">12</td>
<td style="width: 50%;">true</td>
</tr>
<tr>
<td style="width: 50%;">11</td>
<td style="width: 50%;">false</td>
</tr>
<tr>
<td style="width: 50%;">13</td>
<td style="width: 50%;">false</td>
</tr>
</tbody>
</table>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16"><b>입출력 예 #1</b><br />10의 모든 자릿수의 합은 1입니다. 10은 1로 나누어 떨어지므로 10은 하샤드 수입니다.</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16"><b>입출력 예 #2</b><br />12의 모든 자릿수의 합은 3입니다. 12는 3으로 나누어 떨어지므로 12는 하샤드 수입니다.</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16"><b>입출력 예 #3</b><br />11의 모든 자릿수의 합은 2입니다. 11은 2로 나누어 떨어지지 않으므로 11는 하샤드 수가 아닙니다.</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16"><b>입출력 예 #4</b><br />13의 모든 자릿수의 합은 4입니다. 13은 4로 나누어 떨어지지 않으므로 13은 하샤드 수가 아닙니다.</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
<p data-ke-size="size16">&nbsp;</p>
