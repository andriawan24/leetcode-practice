SELECT e.name, b.bonus FROM employee e LEFT OUTER JOIN bonus b ON e.empId = b.empId WHERE b.bonus < 1000 OR b.bonus is null

UNION ALL

SELECT e.name, b.bonus FROM employee e RIGHT OUTER JOIN bonus b ON e.empId = b.empId WHERE b.bonus is null AND b.bonus < 1000 OR b.bonus is null;