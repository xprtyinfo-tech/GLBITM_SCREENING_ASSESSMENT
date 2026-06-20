<h1>The Treasure Hunt in the Spiral Temple</h1>

<p>
Deep within an ancient jungle lies the legendary Spiral Temple, a structure built by a long-lost civilization.
Archaeologists have recently discovered a large stone floor composed of rectangular tiles arranged in rows and columns.
</p>

<p>
Each tile contains a unique symbol represented by an integer. According to ancient manuscripts, the symbols must be read in a specific order to reveal the location of a hidden treasure.
</p>

<p>
The temple's inscription describes a special traversal pattern:
</p>

<ul>
    <li>Start at the top-left corner of the stone floor.</li>
    <li>Move from left to right across the top row.</li>
    <li>Then move from top to bottom along the rightmost column.</li>
    <li>Next, move from right to left across the bottom row.</li>
    <li>Then move from bottom to top along the leftmost column.</li>
    <li>Continue this process, moving inward layer by layer, until every tile has been visited exactly once.</li>
</ul>

<p>
This traversal forms a spiral path through the temple.
</p>

<p>
As the lead explorer, your task is to determine the sequence of symbols encountered while following the spiral path.
</p>

<h3>Input Format</h3>

<p>
The input consists of a matrix of integers. Each row is represented on a separate line. Integers within a row are separated by spaces.
</p>

<h3>Output Format</h3>

<p>
Print all elements of the matrix in the order they are visited during the spiral traversal.
</p>

<h2>Examples</h2>

<h3>Example 1</h3>

<pre><code>Input : matrix = [[1,2,3],[4,5,6],[7,8,9]]
</code></pre>

<p>
<img src="https://assets.leetcode.com/uploads/2020/11/13/spiral1.jpg" alt="Spiral Traversal Example 1">
</p>

<pre><code>Output : [1,2,3,6,9,8,7,4,5]
</code></pre>

<h3>Example 2</h3>

<pre><code>Input : matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
</code></pre>

<p>
<img src="https://assets.leetcode.com/uploads/2020/11/13/spiral.jpg" alt="Spiral Traversal Example 2">
</p>

<pre><code>Output : [1,2,3,4,8,12,11,10,9,5,6,7]
</code></pre>

<h2>Constraints</h2>

<ul>
    <li><code>1 ≤ rows ≤ 100</code></li>
    <li><code>1 ≤ cols ≤ 100</code></li>
    <li><code>-1000 ≤ matrix[i][j] ≤ 1000</code></li>
</ul>

<h2>Notes</h2>

<ul>
    <li>Every element must appear exactly once in the output.</li>
    <li>The matrix may be square or rectangular.</li>
    <li>Single-row and single-column matrices are valid inputs.</li>
    <li>Continue traversing inward until all elements have been visited.</li>
</ul>

<p>
The fate of the expedition depends on correctly decoding the ancient symbols. Follow the spiral path through the temple and reveal the hidden message left behind by the civilization.
</p>
