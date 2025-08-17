import pandas as pd

def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
    ans=customers.drop_duplicates(subset=['email'],keep='first')
    return ans