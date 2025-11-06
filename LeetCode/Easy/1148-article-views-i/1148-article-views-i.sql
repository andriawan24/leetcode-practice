-- Write your PostgreSQL query statement below
SELECT DISTINCT(author_id) id FROM Views v WHERE author_id = viewer_id;