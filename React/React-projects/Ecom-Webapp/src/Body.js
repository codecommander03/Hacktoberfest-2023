import React, { useState, useEffect } from "react";

const Body = () => {
  const [products, setProducts] = useState([]);
  const [productID, setProductID] = useState("");
  const [sellingPrice, setSellingPrice] = useState("");
  const [productName, setProductName] = useState("");

  // Save products to local storage whenever the products state changes
  useEffect(() => {
    localStorage.setItem("products", JSON.stringify(products));
  }, [products]);

  const handleAddToCart = () => {
    const newProduct = {
      id: productID,
      price: sellingPrice,
      name: productName,
    };

  
    setProducts([...products, newProduct]);
    setProductID("");
    setSellingPrice("");
    setProductName("");
  };

  const handleDeleteProduct = (index) => {
    const updatedProducts = [...products];
    // const deletedProductPrice = parseFloat(updatedProducts[index].price);
    updatedProducts.splice(index, 1);
    setProducts(updatedProducts);
  };

  const totalAmount = products.reduce((total, product) => total + parseFloat(product.price), 0);

  return (
    <div>
      <div>
        <h3>Product ID:</h3>
        <input
          className="input"
          value={productID}
          onChange={(e) => setProductID(e.target.value)}
        />
      </div>
      <div>
        <h3>Selling Price:</h3>
        <input
          className="price"
          value={sellingPrice}
          onChange={(e) => setSellingPrice(e.target.value)}
        />
      </div>
      <div>
        <h3>Product Name:</h3>
        <input
          className="name"
          value={productName}
          onChange={(e) => setProductName(e.target.value)}
        />
        <button className="button" onClick={handleAddToCart}>
          Add to cart
        </button>
      </div>
      <div>
        <h2>Products:</h2>
        <ul>
          {products.map((product, index) => (
            <li key={index}>
              {product.id} - {product.name} - ${product.price}
              <button className="delete" onClick={() => handleDeleteProduct(index)}>
                Delete
              </button>
            </li>
          ))}
        </ul>
        <h2>Total Amount: {totalAmount.toFixed(2)}</h2>
      </div>
    </div>
  );
};

export default Body;