class Solution {
    public boolean checkStraightLine(int[][] coordinates) {
        //如果等于空或者数组长度小于3时，返回true
        if(coordinates == null || coordinates.length < 3)
        {
            return true;
        }
        else
        {
            int x = coordinates[1][0] - coordinates[0][0];
            int y = coordinates[1][1] - coordinates[0][1];
            int dx = 0;
            int dy = 0;
            //从第三个点开始计算，判断斜率是否相等
            for(int i = 2; i < coordinates.length;i++)
            {
                dx = coordinates[i][0] - coordinates[0][0];
                dy = coordinates[i][1] - coordinates[0][1];
                //不相等时，直接返回false
                if(y*dx != x*dy)
                {
                    return false;
                }
            }
            //遍历完成后，返回true
            return true;
        }
    }
}