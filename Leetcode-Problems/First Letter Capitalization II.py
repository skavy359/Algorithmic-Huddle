import pandas as pd

def smart_capitalize(text: str) -> str:
    words = text.split(" ")
    result = []
    for word in words:
        if "-" in word:
            parts = word.split("-")
            parts = [p.capitalize() for p in parts]
            result.append("-".join(parts))
        else:
            result.append(word.capitalize())
    return " ".join(result)

def capitalize_content(user_content: pd.DataFrame) -> pd.DataFrame:
    user_content = user_content.rename(columns={"content_text": "original_text"})
    user_content["converted_text"] = user_content["original_text"].apply(smart_capitalize)
    return user_content[["content_id", "original_text", "converted_text"]]
