class ProductOfNumbers {
    vector<int>prefixProduct;
public:
    ProductOfNumbers() {
        prefixProduct={1};
    }
    
    void add(int num) {
        if(num==0){
            prefixProduct={1};
        }
        else{
            prefixProduct.push_back(prefixProduct.back()*num);
        }
    }
    
    int getProduct(int k) {
        int size=prefixProduct.size();
        return(k<size)? prefixProduct.back()/prefixProduct[size-k-1]:0;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */