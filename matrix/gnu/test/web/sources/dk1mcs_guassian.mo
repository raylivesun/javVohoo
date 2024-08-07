model dk1mcs_guassian "Description"
    
    /** 
     * He acknowledged that until that moment, he had always used
     * Gaussian elimination to solve systems of equations, yet he never had understood why
     * it worked.**/

     Real until = 512;
     Real until_max = 1024;
     Real precision = 0.0001;
     Real tolerance = 0.00001;
     Real max_iterations = 100000;
     Real max_memory = 10000000000;
     Real max_singular_values = 1000;

end dk1mcs_guassian;