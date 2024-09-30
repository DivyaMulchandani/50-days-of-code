import requests
from bs4 import BeautifulSoup
import pandas as pd

# URL of the page to scrape
url = 'https://www.myinsuranceclub.com/articles/list-of-all-lic-policies-launched-from-1956-till-date'

# Fetch the web page
response = requests.get(url)
response.raise_for_status()  # Check if the request was successful

# Parse the HTML content
soup = BeautifulSoup(response.content, 'html.parser')

# Find the table containing the policy data
table = soup.find('table')  # Assuming the data is in a table

# Check if the table is found
if table:
    # Extract headers (if any)
    header_row = table.find_all('tr')[0]
    headers = [th.text.strip() for th in header_row.find_all(['th', 'td'])]

    # Extract rows
    data = []
    for row in table.find_all('tr')[1:]:  # Skip header row if headers exist
        cols = row.find_all('td')
        data.append([col.text.strip() for col in cols])

    # If headers are empty, let pandas infer them
    if not headers:
        df = pd.DataFrame(data)
    else:
        df = pd.DataFrame(data, columns=headers)
    
    # Save to Excel
    df.to_excel('lic_policies.xlsx', index=False)
    print("Data has been saved to 'lic_policies.xlsx'")
else:
    print("No table found on the page.")
