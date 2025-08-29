SELECT
    p.product_id,
    p.product_name
FROM
    Product p
WHERE
    p.product_id IN (
        SELECT
            s.product_id
        FROM
            Sales s
        GROUP BY
            s.product_id
        HAVING
            MIN(s.sale_date) >= '2019-01-01'
            AND MAX(s.sale_date) <= '2019-03-31'
    );