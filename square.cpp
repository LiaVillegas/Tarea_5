namespace square{

    struct parameters {

    double ladoc1;
    double ladoc2;
    double ladoc3;
    double ladoc4;
     };

    double compute_perimeter(double ladoc1, double ladoc2, double ladoc3, double ladoc4){
         double p = ladoc1 + ladoc2 + ladoc3 + ladoc4;

         return p;
    }
 }
