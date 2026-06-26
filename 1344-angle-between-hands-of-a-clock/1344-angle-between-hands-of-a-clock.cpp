class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hrAngle  = 0 ; 
        double minAngle = 0 ;

        hour = hour % 12;
        hrAngle =  hour * 30 + minutes * 0.5;
        minAngle = minutes * 6 ; 

        double angle = abs(minAngle - hrAngle);

        if (angle > 180 ) return 360 - angle ; 
        return angle ;
        
    }
};