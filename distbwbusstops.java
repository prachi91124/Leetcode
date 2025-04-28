class Solution {
    public int distanceBetweenBusStops(int[] distance, int start, int destination) {
        int d = Math.abs(destination - start);
        int n = distance.length;
        int t = n - d;
        int dist = 0;
        int dist2 = 0;
        if (start > destination) {
            int tmp = start;
            start = destination;
            destination = tmp;
        }
        for (int i = 0; i < d; i++) {
            dist += distance[(start + i) % n];
            System.out.println("Dist: " + dist);
        }

        for (int i = 0; i < t; i++) {
            if ((destination + i) == start) {
                continue;
            }
            dist2 += distance[(destination + i) % n];
            System.out.println("Dist2: " + dist2);
        }

        return Math.min(dist, dist2);
    }
}