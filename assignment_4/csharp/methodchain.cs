using System;

class Calculator
{
    private double result = 0;

    public Calculator Add(double value)
    {
        result += value;
        return this;  // 자기 자신 반환
    }

    public Calculator Subtract(double value)
    {
        result -= value;
        return this;
    }

    public Calculator Multiply(double value)
    {
        result *= value;
        return this;
    }

    public Calculator Divide(double value)
    {
        if (value != 0)
        {
            result /= value;
        }
        return this;
    }

    public double GetResult()
    {
        return result;
    }
}

