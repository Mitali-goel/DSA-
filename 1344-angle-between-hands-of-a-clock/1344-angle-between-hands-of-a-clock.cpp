class Solution {
public:
    double angleClock(int hour, int minutes) {

        // just remember hr hand moves 30 deg every hr 
        // min hand moves 6 deg every min 
        // and hr hand moves 0.5 deg every min 
        hour = hour % 12;
        double hrAngle =  hour * 30 + minutes * 0.5;
        double minAngle = minutes * 6 ; 

        double angle = abs(minAngle - hrAngle);

        if (angle > 180 ) return 360 - angle ; 
        return angle ;
        
    }
};