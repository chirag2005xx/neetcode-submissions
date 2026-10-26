-- Write your query below
SELECT s.seller_name
FROM orders o
RIGHT JOIN seller s
    ON o.seller_id = s.seller_id
    AND EXTRACT(YEAR FROM o.sale_date) = 2020
WHERE o.seller_id IS NULL
ORDER BY s.seller_name;