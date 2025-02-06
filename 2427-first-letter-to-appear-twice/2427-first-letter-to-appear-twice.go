func repeatedCharacter(s string) byte {
    table := make(map[byte]int)
    var char byte
    
    for _, char := range s {
        _, val := table[byte(char)]
        if val {
            return byte(char)
        }
        table[byte(char)] += 1
    }
    
    return char
}