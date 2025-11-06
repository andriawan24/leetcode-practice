-- Write your PostgreSQL query statement below
SELECT tweet_id FROM Tweets t WHERE LENGTH(content) > 15;