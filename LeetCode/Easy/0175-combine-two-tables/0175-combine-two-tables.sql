-- Write your PostgreSQL query statement below
SELECT 
    p.firstName as firstname, p.lastName as lastname, a.city, a.state 
FROM Person p 
LEFT JOIN Address a 
ON p.personId = a.personId;