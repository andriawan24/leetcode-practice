use std::collections::HashMap;

impl Solution {
    pub fn decode_message(key: String, message: String) -> String {
        let mut table: HashMap<char, char> = HashMap::new();
        let mut decoded = String::from("");
        let mut mapped_char = 'a';

        for c in key.chars() {
            if (!c.is_whitespace() && !table.contains_key(&c)) {
                table.insert(c, mapped_char);
                mapped_char = ((mapped_char as u8) + 1) as char;
            }
        }

        for c in message.chars() {
            if (c.is_whitespace()) {
                decoded.push(c);
            } else {
                if let Some(&mapped_c) = table.get(&c) { 
                    decoded.push(mapped_c);
                }
            }
        }

        decoded
    }
}