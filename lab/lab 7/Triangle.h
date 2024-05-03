#pragma once

namespace shapes{

    class Triangle
        {
            private:
                    float base;
                    float height;
            public:
                    Triangle();
                    //overload
                    Triangle(float newBase, float newHeight);
                    //destructor
                    ~Triangle();

                    //access methods
                    void setBase(float newBase);
                    void setHeight(float newHeight);
                    float getBase();
                    float getHeight();

        };
};