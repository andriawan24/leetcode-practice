# Write your MySQL query statement below
SELECT p.firstName, p.lastName, a.city, a.State FROM Person p LEFT JOIN Address a ON p.personId = a.personId;