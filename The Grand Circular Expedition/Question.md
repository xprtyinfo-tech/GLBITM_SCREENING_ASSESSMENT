<h1>The Grand Circular Expedition</h1>

<p>
In the kingdom of Veloria, a famous circular trade route connects several cities.
Merchants travel along this route to transport goods, spices, and valuable resources between the cities.
</p>

<p>
Along the route, there are <code>n</code> fuel depots arranged in a circle. Each depot contains a certain amount of fuel that can be collected by travelers passing through it. Traveling from one depot to the next consumes fuel based on the distance and terrain between them.
</p>

<p>
A merchant caravan plans to complete one full journey around the circular route. The caravan has a special wagon with an unlimited fuel tank, but it starts its journey with an empty tank.
</p>

<p>For each depot:</p>

<ul>
    <li><code>fuel[i]</code> represents the amount of fuel available at the <code>i-th</code> depot.</li>
    <li><code>cost[i]</code> represents the amount of fuel required to travel from depot <code>i</code> to depot <code>(i + 1)</code>, where the last depot connects back to the first depot.</li>
</ul>

<p>
The caravan may choose to start from any depot. Upon arriving at a depot, it immediately collects all available fuel there before continuing its journey.
</p>

<p>
Your task is to determine the index of the depot from which the caravan can start and successfully complete an entire circuit, visiting every depot exactly once and returning to the starting point without ever running out of fuel.
</p>

<p>
If no such starting depot exists, return <code>-1</code>.
It is guaranteed that if a valid starting depot exists, it is unique.
</p>

<h3>Input Format</h3>

<ul>
    <li>The first line contains space-separated integers representing the fuel available at each depot.</li>
    <li>The second line contains space-separated integers representing the fuel required to travel to the next depot.</li>
</ul>

<p>Both arrays have the same length.</p>

<h3>Output Format</h3>

<p>
Print the index of the depot from which the caravan should start. If completing the circuit is impossible, print <code>-1</code>.
</p>

<h3>Example 1</h3>

<pre><code>Input : fuel = [1, 2, 3, 4, 5], cost = [3, 4, 5, 1, 2]
Output : 3
</code></pre>

<p><strong>Explanation:</strong></p>

<p>Starting from depot 3:</p>

<ul>
    <li>Collect 4 units of fuel, spend 1 to reach depot 4.</li>
    <li>Collect 5 units, spend 2 to reach depot 0.</li>
    <li>Collect 1 unit, spend 3 to reach depot 1.</li>
    <li>Collect 2 units, spend 4 to reach depot 2.</li>
    <li>Collect 3 units, spend 5 to return to depot 3.</li>
</ul>

<p>
The caravan successfully completes the entire circuit.
</p>
