impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        let mut chars: [i32; 26] = [0; 26];

        for v in s.chars() {
            let idx = v as u32 - 'a' as u32;
            chars[idx as usize] += 1;
        }

        for v in t.chars() {
            let idx = v as u32 - 'a' as u32;
            chars[idx as usize] -= 1;
        }

        for v in chars {
            if (v != 0) {
                return false;
            }
        }

        return true;
    }
}