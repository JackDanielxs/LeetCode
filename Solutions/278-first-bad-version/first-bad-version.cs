/* The isBadVersion API is defined in the parent class VersionControl.
      bool IsBadVersion(int version); */

public class Solution : VersionControl {
    public int FirstBadVersion(int n) {
        return BinarySearch(1, n);
    }

    private int BinarySearch(int bot, int top) {
        if (bot >= top) return bot;

        int meio = bot + (top - bot) / 2;

        return IsBadVersion(meio)
            ? BinarySearch(bot, meio) // <= meio
            : BinarySearch(meio + 1, top); // > meio
    }
}
