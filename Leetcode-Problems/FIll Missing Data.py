import pandas as pd

def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
    ans=products.fillna({'quantity':0})
    return ans