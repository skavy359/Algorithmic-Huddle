import pandas as pd

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
    ans=students.dropna(subset=['name'])
    return ans