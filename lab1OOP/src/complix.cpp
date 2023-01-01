class complix {

    private:

    public:

        float real;
        float imag;

        void setReal(float r);
        void setImag(float i);
        float getReal();
        float getImag();

        complix add(complix c){
            complix result;
            result.setReal(real+c.getReal());
            result.setImag(imag+c.getImag());
            return result;
        }

        complix sub(complix c){
            complix result;
            result.setReal(real-c.getReal());
            result.setImag(imag-c.getImag());
            return result;
        }
//      void print();

};
endl;
