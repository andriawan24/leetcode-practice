-- Write your PostgreSQL query statement below
SELECT 
    date_id, 
    make_name, 
    COUNT(DISTINCT lead_id) as unique_leads,
    COUNT(DISTINCT partner_id) as unique_partners 
    FROM dailysales
    GROUP BY date_id, make_name 
    ORDER BY date_id, make_name;