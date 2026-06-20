<h1>The Grand Warehouse Expansion Project</h1>

<p>
The Kingdom of Mercatoria is home to one of the largest trading hubs in the world.
Every day, thousands of cargo containers arrive at the Royal Warehouse for storage and distribution.
</p>

<p>
To maximize storage efficiency, warehouse managers arrange containers in adjacent sections.
Each section can hold containers stacked to a specific height.
The heights of these sections are recorded in an array called <code>heights</code>, where
<code>heights[i]</code> represents the height of the <code>i-th</code> section.
</p>

<p>
The King has ordered the construction of a massive rectangular storage platform that must fit entirely within consecutive warehouse sections.
The platform's height is limited by the shortest section it covers, and its width is determined by the number of adjacent sections included.
</p>

<p>
For example, if a platform spans sections with heights:
</p>

<p><code>5 4 6</code></p>

<p>
The platform's maximum possible height is 4 (the shortest section), and its width is 3, resulting in an area of:
</p>

<p><code>4 × 3 = 12</code></p>

<p>
As the Chief Logistics Engineer, your task is to determine the largest possible rectangular area that can be formed using one or more consecutive warehouse sections.
</p>

<h3>Input Format</h3>

<p>
A single line containing space-separated integers representing the heights of the warehouse sections.
</p>

<p>
<code>heights[0] heights[1] heights[2] ... heights[n-1]</code>
</p>

<h3>Output Format</h3>

<p>
Print a single integer representing the area of the largest rectangle that can be formed.
</p>

<h2>Examples</h2>

<h3>Example 1</h3>

<pre><code>Input : 2 1 5 6 2 3
</code></pre>

<p>
<img src="https://assets.leetcode.com/uploads/2021/01/04/histogram.jpg" alt="Largest Rectangle Example 1">
</p>

<pre><code>Output : 10

Explanation :
The largest rectangle is formed using sections with heights: 5 6.
The minimum height is 5 and the width is 2.

Area = 5 × 2 = 10
</code></pre>

<h3>Example 2</h3>

<pre><code>Input : 2 4
</code></pre>

<p>
<img src="https://assets.leetcode.com/uploads/2021/01/04/histogram-1.jpg" alt="Largest Rectangle Example 2">
</p>

<pre><code>Output : 4

Explanation :
The best rectangle uses the second section alone.

Area = 4 × 1 = 4
</code></pre>

<h3>Example 3</h3>

<pre><code>Input : 2 2 2 2

Output : 8

Explanation :
All sections can be included.

Height = 2
Width = 4
Area = 8
</code></pre>

<h2>Constraints</h2>

<ul>
    <li><code>1 ≤ n ≤ 10^5</code></li>
    <li><code>0 ≤ heights[i] ≤ 10^5</code></li>
</ul>

<h2>Notes</h2>

<ul>
    <li>The rectangle must consist of consecutive sections.</li>
    <li>The rectangle's height is determined by the shortest section within the chosen range.</li>
    <li>A rectangle may consist of a single section.</li>
    <li>The goal is to maximize the area.</li>
</ul>

<p>
The future expansion of Mercatoria's warehouse depends on your calculations.
Determine the largest rectangular storage platform that can be constructed from the available warehouse sections.
</p>
