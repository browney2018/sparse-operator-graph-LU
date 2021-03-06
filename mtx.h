/*
    This file is part of sparse-operator-graph-LU.
    Copyright (C) 2020, 2021 Lei Yan (yan_lei@hotmail.com)

    sparse-operator-graph-LU is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    sparse-operator-graph-LU is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with sparse-operator-graph-LU.  If not, see <https://www.gnu.org/licenses/>.
*/

namespace SOGLU {

    class mtx {
        public:
        static int mSize;
        static bool symmetric;
        
        static int *indexi;
        static int *indexj;
        static double *vals;
        static int valcount;
        static double *b;
 
        static int readMTX(std::string fname);

        static void sampleArray(double *a, int dim);

        static void writeArray(std::string fname, double *a, int dim);

        static int readArray(std::string fname, int dim);
      
        static double checkResult( double* nx);
    };
}
