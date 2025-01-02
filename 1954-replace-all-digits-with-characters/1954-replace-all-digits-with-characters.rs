impl Solution {
    pub fn replace_digits(s: String) -> String {
        let mut res = vec![];

        for chunk in s.as_bytes().chunks(2) {
            res.push(chunk[0]);
            if chunk.len() == 2 {
                res.push(chunk[0] + (chunk[1] - b'0'));
            }
        }

        String::from_utf8(res).unwrap_or_default()
    }
}