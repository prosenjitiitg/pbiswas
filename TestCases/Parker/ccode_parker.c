#include<stdio.h>
int main(){

int in1;
int in2;
int in3;
int in4;
int in5;
int in6;
int out1;

  scanf("%d",in1);
  scanf("%d",in2);
  scanf("%d",in3);
  scanf("%d",in4);
  scanf("%d",in5);
  scanf("%d",in6);

  unsigned long long int ap_clk=0;
  unsigned long long int ap_done=0;
  unsigned long long int ap_idle=0;
  unsigned long long int ap_ready=1;
  unsigned long long int ap_return=0;
  unsigned long long int ap_rst=0;
  unsigned long long int ap_start=1;

   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_done__temp=0;
   unsigned long long int ap_idle__temp=0;
   unsigned long long int ap_ready__temp=0;
   unsigned long long int ap_return__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int in1__temp=0;
   unsigned long long int in2__temp=0;
   unsigned long long int in3__temp=0;
   unsigned long long int in4__temp=0;
   unsigned long long int in5__temp=0;
   unsigned long long int in6__temp=0;
   unsigned long long int out1_1_fu_197_p2=0;
   unsigned long long int out1_1_fu_197_p2__temp=0;
   unsigned long long int out1_fu_192_p2=0;
   unsigned long long int out1_fu_192_p2__temp=0;
   unsigned long long int t2_fu_66_p2=0;
   unsigned long long int t2_fu_66_p2__temp=0;
   unsigned long long int t4_1_fu_136_p3=0;
   unsigned long long int t4_1_fu_136_p3__temp=0;
   unsigned long long int t4_2_fu_116_p2=0;
   unsigned long long int t4_2_fu_116_p2__temp=0;
   unsigned long long int t4_3_fu_122_p2=0;
   unsigned long long int t4_3_fu_122_p2__temp=0;
   unsigned long long int t4_4_fu_128_p3=0;
   unsigned long long int t4_4_fu_128_p3__temp=0;
   unsigned long long int t4_fu_104_p2=0;
   unsigned long long int t4_fu_104_p2__temp=0;
   unsigned long long int t6_1_fu_171_p3=0;
   unsigned long long int t6_1_fu_171_p3__temp=0;
   unsigned long long int t6_2_fu_179_p3=0;
   unsigned long long int t6_2_fu_179_p3__temp=0;
   unsigned long long int t6_3_fu_166_p2=0;
   unsigned long long int t6_3_fu_166_p2__temp=0;
   unsigned long long int t6_4_fu_84_p2=0;
   unsigned long long int t6_4_fu_84_p2__temp=0;
   unsigned long long int t6_5_fu_90_p2=0;
   unsigned long long int t6_5_fu_90_p2__temp=0;
   unsigned long long int t6_6_fu_96_p3=0;
   unsigned long long int t6_6_fu_96_p3__temp=0;
   unsigned long long int t6_7_fu_144_p2=0;
   unsigned long long int t6_7_fu_144_p2__temp=0;
   unsigned long long int t6_7_reg_231=0;
   unsigned long long int t6_7_reg_231__temp=0;
   unsigned long long int t6_fu_161_p2=0;
   unsigned long long int t6_fu_161_p2__temp=0;
   unsigned long long int tmp_1_fu_155_p2=0;
   unsigned long long int tmp_1_fu_155_p2__temp=0;
   unsigned long long int tmp_1_fu_155_p2_temp_3=0;
   unsigned long long int tmp_1_fu_155_p2_temp_3__temp=0;
   unsigned long long int tmp_4_fu_72_p2=0;
   unsigned long long int tmp_4_fu_72_p2__temp=0;
   unsigned long long int tmp_4_fu_72_p2_temp_1=0;
   unsigned long long int tmp_4_fu_72_p2_temp_1__temp=0;
   unsigned long long int tmp_5_fu_78_p2=0;
   unsigned long long int tmp_5_fu_78_p2__temp=0;
   unsigned long long int tmp_5_fu_78_p2_temp_5=0;
   unsigned long long int tmp_5_fu_78_p2_temp_5__temp=0;
   unsigned long long int tmp_9_fu_110_p2=0;
   unsigned long long int tmp_9_fu_110_p2__temp=0;
   unsigned long long int tmp_9_fu_110_p2_temp_2=0;
   unsigned long long int tmp_9_fu_110_p2_temp_2__temp=0;
   unsigned long long int tmp_fu_150_p2=0;
   unsigned long long int tmp_fu_150_p2__temp=0;
   unsigned long long int tmp_fu_150_p2_temp_4=0;
   unsigned long long int tmp_fu_150_p2_temp_4__temp=0;
   unsigned long long int tmp_s_fu_186_p2=0;
   unsigned long long int tmp_s_fu_186_p2__temp=0;
   unsigned long long int tmp_s_fu_186_p2_temp_0=0;
   unsigned long long int tmp_s_fu_186_p2_temp_0__temp=0;
  ap_done=0;
  ap_start=1;

   ap_ST_fsm_state1:

  ap_CS_fsm_state1 = 1;
  ap_CS_fsm_state2 = 0;
   ap_clk__temp = ap_clk ;
   in4__temp = in4 ;
   tmp_9_fu_110_p2_temp_2__temp = tmp_9_fu_110_p2_temp_2 ;
   tmp_s_fu_186_p2_temp_0__temp = tmp_s_fu_186_p2_temp_0 ;
   ap_rst__temp = ap_rst ;
   ap_idle__temp = ap_idle ;
   tmp_fu_150_p2__temp = tmp_fu_150_p2 ;
   in5__temp = in5 ;
   in6__temp = in6 ;
   t4_2_fu_116_p2__temp = t4_2_fu_116_p2 ;
   t4_1_fu_136_p3__temp = t4_1_fu_136_p3 ;
   t6_2_fu_179_p3__temp = t6_2_fu_179_p3 ;
   tmp_s_fu_186_p2__temp = tmp_s_fu_186_p2 ;
   in2__temp = in2 ;
   tmp_1_fu_155_p2_temp_3__temp = tmp_1_fu_155_p2_temp_3 ;
   in1__temp = in1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   t4_4_fu_128_p3__temp = t4_4_fu_128_p3 ;
   t4_fu_104_p2__temp = t4_fu_104_p2 ;
   ap_ready__temp = ap_ready ;
   tmp_1_fu_155_p2__temp = tmp_1_fu_155_p2 ;
   t6_6_fu_96_p3__temp = t6_6_fu_96_p3 ;
   t6_7_reg_231__temp = t6_7_reg_231 ;
   tmp_4_fu_72_p2__temp = tmp_4_fu_72_p2 ;
   tmp_fu_150_p2_temp_4__temp = tmp_fu_150_p2_temp_4 ;
   t6_7_fu_144_p2__temp = t6_7_fu_144_p2 ;
   tmp_9_fu_110_p2__temp = tmp_9_fu_110_p2 ;
   out1_fu_192_p2__temp = out1_fu_192_p2 ;
   t6_4_fu_84_p2__temp = t6_4_fu_84_p2 ;
   tmp_4_fu_72_p2_temp_1__temp = tmp_4_fu_72_p2_temp_1 ;
   t6_5_fu_90_p2__temp = t6_5_fu_90_p2 ;
   t6_fu_161_p2__temp = t6_fu_161_p2 ;
   ap_start__temp = ap_start ;
   out1_1_fu_197_p2__temp = out1_1_fu_197_p2 ;
   t6_3_fu_166_p2__temp = t6_3_fu_166_p2 ;
   tmp_5_fu_78_p2__temp = tmp_5_fu_78_p2 ;
   t6_1_fu_171_p3__temp = t6_1_fu_171_p3 ;
   tmp_5_fu_78_p2_temp_5__temp = tmp_5_fu_78_p2_temp_5 ;
   t4_3_fu_122_p2__temp = t4_3_fu_122_p2 ;
   ap_done__temp = ap_done ;
   ap_return__temp = ap_return ;
   in3__temp = in3 ;
   t2_fu_66_p2__temp = t2_fu_66_p2 ;

       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) == 1){
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           t6_7_reg_231 =   ( (  (  ( (  ( ( in2__temp  & 4294967295 )  ==  ( ( 0 - ( in3__temp  & 4294967295 )  ) & 4294967295 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( (  (  ( (  ( ( in4__temp  & 4294967295 )  == 0 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( 0 - ( in2__temp  & 4294967295 )  ) & 4294967295 )  :   ( ( ( in2__temp  & 4294967295 )  + ( in1__temp  & 4294967295 )  ) & 4294967295 )  )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  :   (  ( (  ( ( in1__temp  & 4294967295 )  == 4 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( ( in3__temp  & 4294967295 )  - ( in5__temp  & 4294967295 )  ) & 4294967295 )  :   ( ( ( in2__temp  & 4294967295 )  + 4 ) & 4294967295 )  )  )  + ( in4__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) == 0){
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               t6_7_reg_231 =   ( (  (  ( (  ( ( in2__temp  & 4294967295 )  ==  ( ( 0 - ( in3__temp  & 4294967295 )  ) & 4294967295 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( (  (  ( (  ( ( in4__temp  & 4294967295 )  == 0 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( 0 - ( in2__temp  & 4294967295 )  ) & 4294967295 )  :   ( ( ( in2__temp  & 4294967295 )  + ( in1__temp  & 4294967295 )  ) & 4294967295 )  )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  :   (  ( (  ( ( in1__temp  & 4294967295 )  == 4 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( ( in3__temp  & 4294967295 )  - ( in5__temp  & 4294967295 )  ) & 4294967295 )  :   ( ( ( in2__temp  & 4294967295 )  + 4 ) & 4294967295 )  )  )  + ( in4__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

  ap_CS_fsm_state1 = 0;
  ap_CS_fsm_state2 = 1;
   ap_clk__temp = ap_clk ;
   in4__temp = in4 ;
   tmp_9_fu_110_p2_temp_2__temp = tmp_9_fu_110_p2_temp_2 ;
   tmp_s_fu_186_p2_temp_0__temp = tmp_s_fu_186_p2_temp_0 ;
   ap_rst__temp = ap_rst ;
   ap_idle__temp = ap_idle ;
   tmp_fu_150_p2__temp = tmp_fu_150_p2 ;
   in5__temp = in5 ;
   in6__temp = in6 ;
   t4_2_fu_116_p2__temp = t4_2_fu_116_p2 ;
   t4_1_fu_136_p3__temp = t4_1_fu_136_p3 ;
   t6_2_fu_179_p3__temp = t6_2_fu_179_p3 ;
   tmp_s_fu_186_p2__temp = tmp_s_fu_186_p2 ;
   in2__temp = in2 ;
   tmp_1_fu_155_p2_temp_3__temp = tmp_1_fu_155_p2_temp_3 ;
   in1__temp = in1 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   t4_4_fu_128_p3__temp = t4_4_fu_128_p3 ;
   t4_fu_104_p2__temp = t4_fu_104_p2 ;
   ap_ready__temp = ap_ready ;
   tmp_1_fu_155_p2__temp = tmp_1_fu_155_p2 ;
   t6_6_fu_96_p3__temp = t6_6_fu_96_p3 ;
   t6_7_reg_231__temp = t6_7_reg_231 ;
   tmp_4_fu_72_p2__temp = tmp_4_fu_72_p2 ;
   tmp_fu_150_p2_temp_4__temp = tmp_fu_150_p2_temp_4 ;
   t6_7_fu_144_p2__temp = t6_7_fu_144_p2 ;
   tmp_9_fu_110_p2__temp = tmp_9_fu_110_p2 ;
   out1_fu_192_p2__temp = out1_fu_192_p2 ;
   t6_4_fu_84_p2__temp = t6_4_fu_84_p2 ;
   tmp_4_fu_72_p2_temp_1__temp = tmp_4_fu_72_p2_temp_1 ;
   t6_5_fu_90_p2__temp = t6_5_fu_90_p2 ;
   t6_fu_161_p2__temp = t6_fu_161_p2 ;
   ap_start__temp = ap_start ;
   out1_1_fu_197_p2__temp = out1_1_fu_197_p2 ;
   t6_3_fu_166_p2__temp = t6_3_fu_166_p2 ;
   tmp_5_fu_78_p2__temp = tmp_5_fu_78_p2 ;
   t6_1_fu_171_p3__temp = t6_1_fu_171_p3 ;
   tmp_5_fu_78_p2_temp_5__temp = tmp_5_fu_78_p2_temp_5 ;
   t4_3_fu_122_p2__temp = t4_3_fu_122_p2 ;
   ap_done__temp = ap_done ;
   ap_return__temp = ap_return ;
   in3__temp = in3 ;
   t2_fu_66_p2__temp = t2_fu_66_p2 ;

       if(1 == ap_CS_fsm_state2)
       {
           ap_done =  1;
      if(ap_done==1){
          ap_return =  (  ( (  (  (  ( (  ( ( in5 & 4294967295 )  == 0 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  (  ( (  ( ( in6 & 4294967295 )  == 0 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( 8 - ( in4 & 4294967295 )  ) & 4294967295 )  :   ( ( ( in2 & 4294967295 )  + 5 ) & 4294967295 )  )  :  t6_7_reg_231 )  == 0 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( ( in5 & 4294967295 )  + 8 ) & 4294967295 )  :   ( ( (in1 & 4294967295)  - 5  ) & 4294967295 )  ) ;
      }
       }
       if(1 == ap_CS_fsm_state2)
       {
           ap_ready =  1;
       }
       if(ap_done==1){
        goto end;
       }
       goto ap_ST_fsm_state1;
   end:
    out1 = ap_return;
    
       return 0;
}
