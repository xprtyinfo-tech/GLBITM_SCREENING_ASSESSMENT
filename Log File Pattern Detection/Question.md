<h1>Log File Pattern Detection</h1>

<p>
A software company maintains large application log files to monitor system activity and troubleshoot issues.
Engineers often need to search these logs for specific error messages, warning codes, or text patterns.
</p>

<p>
You are given two strings:
</p>

<ul>
    <li><code>text</code> — representing the contents of a log file.</li>
    <li><code>pattern</code> — representing the message or pattern that needs to be located.</li>
</ul>

<p>
Your task is to determine the starting position of the first occurrence of the pattern within the text.
</p>

<p>
If the pattern appears multiple times, return the index of its first occurrence.
If the pattern does not appear anywhere in the text, return <code>-1</code>.
</p>

<p>
The indexing is zero-based, meaning the first character of the text is located at index <code>0</code>.
</p>

<h3>Input Format</h3>

<p>
The input consists of two lines:
</p>

<ul>
    <li>The first line contains the string <code>text</code>.</li>
    <li>The second line contains the string <code>pattern</code>.</li>
</ul>

<h3>Output Format</h3>

<p>
Print a single integer representing the starting index of the first occurrence of <code>pattern</code> in <code>text</code>.
If the pattern is not found, print <code>-1</code>.
</p>

<h2>Examples</h2>

<h3>Example 1</h3>

<pre><code>Input : text = sadbutsad, pattern = sad

Output : 0

Explanation :
"sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
</code></pre>

<h3>Example 2</h3>

<pre><code>Input : text = leetcode, pattern = leeto

Output : -1

Explanation :
"leeto" did not occur in "leetcode", so we return -1.
</code></pre>

<h2>Constraints</h2>

<ul>
    <li><code>1 ≤ text.length ≤ 10^4</code></li>
    <li><code>1 ≤ pattern.length ≤ 10^4</code></li>
    <li>Both strings consist of English letters, digits, and common symbols.</li>
</ul>

<h2>Notes</h2>

<ul>
    <li>Return the index of the first occurrence only.</li>
    <li>String comparison is case-sensitive.</li>
    <li>If the pattern is longer than the text, the answer is always <code>-1</code>.</li>
    <li>The solution should correctly handle repeated and overlapping patterns.</li>
</ul>

<p>
Given the log file contents and the target pattern, determine where the pattern first appears.
</p>
