import requests
from bs4 import BeautifulSoup

def get_latest_product_price(url):
    try:
        # Send a GET request to the URL
        response = requests.get(url)
        response.raise_for_status()  # Check for any errors in the request

        # Parse the HTML content using Beautiful Soup
        soup = BeautifulSoup(response.content, 'html.parser')

        # Locate and extract the product price element
        price_element = soup.find('span', class_='product-price')  # Update with the correct class or HTML element
        if price_element:
            return price_element.text.strip()
        else:
            return "Price not found."

    except requests.exceptions.RequestException as e:
        print("Error:", e)
        return None

if __name__ == "__main__":
    # Replace this URL with the actual ecommerce product page URL
    product_url = "https://www.daraz.com.np/products/sony-playstation-5-ps5-disc-edition-i105950955-s1027888051.html?spm=a2a0e.searchlist.sku.1.82e7572aLyiWCZ&search=1"

    latest_price = get_latest_product_price(product_url)

    if latest_price:
        print("Latest product price:", latest_price)
    else:
        print("Failed to retrieve the latest product price.")
