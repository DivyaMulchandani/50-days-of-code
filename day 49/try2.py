import requests
from bs4 import BeautifulSoup
import pandas as pd

# Load the existing data
file_path = 'C:/Users/divya mulchandani/OneDrive/Documents/50-days-of-code/day 48/lic_policies.xlsx'  # Update with the correct file path
df = pd.read_excel(file_path)

# Define the base URL (this should be the actual URL where the policy details are found)
base_url = 'https://www.coverfox.com/Insurance-Plans/'  # Replace with the actual URL

# Function to scrape data for a specific policy
def scrape_policy_details(policy_name):
    # Construct the URL for the specific policy
    url = base_url + policy_name.replace(' ', '-').lower()
    response = requests.get(url)
    soup = BeautifulSoup(response.content, 'html.parser')
    
    # Extract the required details (Ensure these IDs match the actual HTML structure)
    try:
        policy_type = soup.find('span', {'id': 'policy-type'}).text.strip()
    except AttributeError:
        policy_type = 'N/A'
    try:
        sum_assured = soup.find('span', {'id': 'sum-assured'}).text.strip()
    except AttributeError:
        sum_assured = 'N/A'
    try:
        premium_amount = soup.find('span', {'id': 'premium-amount'}).text.strip()
    except AttributeError:
        premium_amount = 'N/A'
    try:
        payment_frequency = soup.find('span', {'id': 'payment-frequency'}).text.strip()
    except AttributeError:
        payment_frequency = 'N/A'
    try:
        policy_term = soup.find('span', {'id': 'policy-term'}).text.strip()
    except AttributeError:
        policy_term = 'N/A'
    try:
        maturity_benefit = soup.find('span', {'id': 'maturity-benefit'}).text.strip()
    except AttributeError:
        maturity_benefit = 'N/A'
    try:
        death_benefit = soup.find('span', {'id': 'death-benefit'}).text.strip()
    except AttributeError:
        death_benefit = 'N/A'
    try:
        eligibility = soup.find('span', {'id': 'eligibility-criteria'}).text.strip()
    except AttributeError:
        eligibility = 'N/A'
    try:
        additional_benefits = soup.find('span', {'id': 'additional-benefits'}).text.strip()
    except AttributeError:
        additional_benefits = 'N/A'
    try:
        tax_benefits = soup.find('span', {'id': 'tax-benefits'}).text.strip()
    except AttributeError:
        tax_benefits = 'N/A'
    try:
        exclusions = soup.find('span', {'id': 'exclusions'}).text.strip()
    except AttributeError:
        exclusions = 'N/A'

    company = 'LIC' if 'lic' in url else 'HDFC'

    return {
        'Policy Type': policy_type,
        'Sum Assured': sum_assured,
        'Premium Amount': premium_amount,
        'Premium Payment Frequency': payment_frequency,
        'Policy Term': policy_term,
        'Maturity Benefit': maturity_benefit,
        'Death Benefit': death_benefit,
        'Eligibility Criteria': eligibility,
        'Additional Benefits/Riders': additional_benefits,
        'Tax Benefits': tax_benefits,
        'Exclusions': exclusions,
        'Company': company
    }

# Update DataFrame with scraped data
for index, row in df.iterrows():
    policy_name = row['Name of the Product']
    try:
        details = scrape_policy_details(policy_name)
        for key, value in details.items():
            df.at[index, key] = value
    except Exception as e:
        print(f"Failed to scrape data for {policy_name}: {e}")

# Save the updated DataFrame to a new file
output_file_path = 'C:/Users/divya mulchandani/OneDrive/Documents/50-days-of-code/day 48/updated_lic_hdfc_policies_with_scraped_data.xlsx'
df.to_excel(output_file_path, index=False)

print(f"Updated data with scraped details has been saved to '{output_file_path}'")
