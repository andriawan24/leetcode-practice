impl Solution {
    pub fn get_ascii(s: &String, index: usize) -> Option<u8> {
        s.chars().nth(index).map(|c| c as u8)
    }

    pub fn replace_digits(s: String) -> String {
        let mut chars: Vec<char> = s.chars().collect();
    
        for i in (1..s.len()).step_by(2) {
            let mut converted_char = 'a';
            let prev_char = Solution::get_ascii(&s, i - 1);
            let current_char = chars[i].to_digit(10);

            if let Some(prev_char_value) = prev_char {
                if let Some(current_char_value) = current_char {
                    if current_char_value <= u8::MAX as u32 {
                        converted_char = (current_char_value as u8 + prev_char_value) as char
                    }
                }
            }
            
            chars[i] = converted_char;
        }

        return chars.iter().collect()
    }
}