DELETE person FROM person INNER JOIN (SELECT *, RANK() OVER(PARTITION by email ORDER BY id) r FROM person) t ON person.id = t.id WHERE r > 1;