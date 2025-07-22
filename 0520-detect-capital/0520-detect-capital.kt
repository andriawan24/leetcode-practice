class Solution {
    fun detectCapitalUse(word: String): Boolean {
        when {
            word == word.uppercase() || word == word.lowercase() -> {
                return true
            }

            word.first().isUpperCase() && word.substring(1) == word.substring(1).lowercase() -> {
                return true
            }

            else -> return false
        }

        return false
    }
}