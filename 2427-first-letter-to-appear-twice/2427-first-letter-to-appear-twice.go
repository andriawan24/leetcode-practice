func repeatedCharacter(s string) byte {
    table := make(map[rune]int)
    
    for _, char := range s {
        table[char] += 1
        if (table[char] == 2) {
            return byte(char)
        }
    }
    
    return byte('a')
}