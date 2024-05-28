import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class KMeans {
    private List<Point> data;
    private int k;
    private List<Point> centroids;
    private List<List<Point>> clusters;

    public KMeans(List<Point> data, int k) {
        this.data = data;
        this.k = k;
        this.centroids = initializeCentroids();
    }

    private List<Point> initializeCentroids() {
        List<Point> centroids = new ArrayList<>();
        Random random = new Random();

        // Chọn ngẫu nhiên k điểm từ dữ liệu làm các điểm centroids ban đầu
        for (int i = 0; i < k; i++) {
            int index = random.nextInt(data.size());
            centroids.add(data.get(index));
        }

        return centroids;
    }

    private void assignToClusters() {
        clusters = new ArrayList<>();
        for (int i = 0; i < k; i++) {
            clusters.add(new ArrayList<>());
        }

        // Gán mỗi điểm dữ liệu vào cluster gần nhất
        for (Point point : data) {
            double minDistance = Double.MAX_VALUE;
            int closestCentroidIndex = 0;
            for (int i = 0; i < centroids.size(); i++) {
                double distance = point.distanceTo(centroids.get(i));
                if (distance < minDistance) {
                    minDistance = distance;
                    closestCentroidIndex = i;
                }
            }
            clusters.get(closestCentroidIndex).add(point);
        }
    }

    private void updateCentroids() {
        for (int i = 0; i < k; i++) {
            List<Point> cluster = clusters.get(i);
            if (!cluster.isEmpty()) {
                Point centroid = Point.mean(cluster);
                centroids.set(i, centroid);
            }
        }
    }

    public void fit(int maxIterations) {
        for (int iter = 0; iter < maxIterations; iter++) {
            List<Point> oldCentroids = new ArrayList<>(centroids);
            assignToClusters();
            updateCentroids();

            // Nếu centroids không thay đổi đáng kể, thoát vòng lặp
            boolean isConverged = true;
            for (int i = 0; i < k; i++) {
                if (!oldCentroids.get(i).equals(centroids.get(i))) {
                    isConverged = false;
                    break;
                }
            }
            if (isConverged) {
                break;
            }
        }
    }

    public List<Point> getCentroids() {
        return centroids;
    }

    public List<List<Point>> getClusters() {
        return clusters;
    }

    public static void main(String[] args) {
        // Example Usage:
        List<Point> data = new ArrayList<>();
        data.add(new Point(1, 2));
        data.add(new Point(1, 4));
        data.add(new Point(1, 0));
        data.add(new Point(10, 2));
        data.add(new Point(10, 4));
        data.add(new Point(10, 0));

        int k = 2;
        KMeans kmeans = new KMeans(data, k);
        kmeans.fit(100);
        List<Point> centroids = kmeans.getCentroids();
        List<List<Point>> clusters = kmeans.getClusters();

        System.out.println("Centroids:");
        for (Point centroid : centroids) {
            System.out.println(centroid);
        }
        System.out.println("Clusters:");
        for (List<Point> cluster : clusters) {
            System.out.println(cluster);
        }
    }
}

class Point {
    private double x;
    private double y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double distanceTo(Point other) {
        double dx = x - other.x;
        double dy = y - other.y;
        return Math.sqrt(dx * dx + dy * dy);
    }

    public static Point mean(List<Point> points) {
        double sumX = 0;
        double sumY = 0;
        for (Point point : points) {
            sumX += point.x;
            sumY += point.y;
        }
        double meanX = sumX / points.size();
        double meanY = sumY / points.size();
        return new Point(meanX, meanY);
    }

    @Override
    public String toString() {
        return "(" + x + ", " + y + ")";
    }
}
