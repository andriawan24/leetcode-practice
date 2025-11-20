SELECT e.name as "Employee" 
FROM Employee e 
WHERE e.managerId IS NOT NULL
AND e.salary > (SELECT e2.salary FROM Employee e2 WHERE e2.id = e.managerId);