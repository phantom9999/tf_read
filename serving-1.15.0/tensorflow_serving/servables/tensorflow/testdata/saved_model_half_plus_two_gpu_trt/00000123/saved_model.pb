?i
??
8
Const
output"dtype"
valuetensor"
dtypetype
.
Identity

input"T
output"T"	
Ttype
?
ParseExample

serialized	
names
sparse_keys*Nsparse

dense_keys*Ndense
dense_defaults2Tdense
sparse_indices	*Nsparse
sparse_values2sparse_types
sparse_shapes	*Nsparse
dense_values2Tdense"
Nsparseint("
Ndenseint("%
sparse_types
list(type)(:
2	"
Tdense
list(type)(:
2	"
dense_shapeslist(shape)(
C
Placeholder
output"dtype"
dtypetype"
shapeshape:
?
TRTEngineOp
	in_tensor2InT

out_tensor2OutT"
serialized_segmentstring"
input_shapeslist(shape)"
output_shapeslist(shape)"
segment_funcdef_namestring"
InT
list(type)(0:
2"
OutT
list(type)(0:
2"
static_enginebool("
fixed_input_sizebool("&
cached_engine_batches	list(int)
 "#
max_cached_engines_countint"
workspace_size_bytesint".
precision_modestring:
FP32FP16INT8"
calibration_datastring "serve*1.12.02unknown?\
\

tf_examplePlaceholder"/device:GPU:0*
shape: *
dtype0*
_output_shapes
:
d
ParseExample/ConstConst"/device:CPU:0*
_output_shapes
: *
valueB *
dtype0
p
ParseExample/ReshapeConst"/device:CPU:0*
dtype0*
_output_shapes
:*
valueB"    
q
ParseExample/ParseExample/namesConst"/device:CPU:0*
_output_shapes
: *
valueB *
dtype0
w
&ParseExample/ParseExample/dense_keys_0Const"/device:CPU:0*
value	B Bx*
dtype0*
_output_shapes
: 
x
&ParseExample/ParseExample/dense_keys_1Const"/device:CPU:0*
_output_shapes
: *
value
B Bx2*
dtype0
?
ParseExample/ParseExampleParseExample
tf_exampleParseExample/ParseExample/names&ParseExample/ParseExample/dense_keys_0&ParseExample/ParseExample/dense_keys_1ParseExample/ConstParseExample/Reshape"/device:CPU:0*
dense_shapes
::*
Nsparse *
Ndense*:
_output_shapes(
&:?????????:?????????*
sparse_types
 *
Tdense
2
i
xIdentityParseExample/ParseExample"/device:GPU:0*'
_output_shapes
:?????????*
T0
l
x2IdentityParseExample/ParseExample:1"/device:GPU:0*'
_output_shapes
:?????????*
T0
?-
TRTEngineOp_0TRTEngineOpx"/device:GPU:0*
static_engine(*
fixed_input_size(*
_output_shapes

::*6
segment_funcdef_nameTRTEngineOp_0_native_segment*%
input_shapes
:?????????*
workspace_size_bytes??(*
OutT
2*
calibration_data *
precision_modeFP32*9
output_shapes(
&:?????????:?????????*?*
serialized_segment?)?)?                               (   4   D   ?  H                       t  ?  H     ?  H  4  ?     ?  ?     ?  ?  ?	  ?  ?  ?        D???$      D   L   ?   ????H              (Unnamed Layer* 7) [ElementWise]       p       ?         P???         TensorRTOutputPH_1  ????   <         TensorRTOutputPH_1  ????                   ????         ute        H???   	   r???????   <         TensorRTOutputPH_1  ???                   (???         ute        ^???   @          (Unnamed ITensor* 7)    p???                 ????          of
       ????   0         Mul_1   ????                   ????         x- n       ????      8   8   ?   ????4      (Unnamed Layer* 6) [Constant]          ?         T???          (Unnamed ITensor* 7)    ????   @          (Unnamed ITensor* 7)    ????                 ????          of
       ????     <   ????                      ???                 n???       0       V???   @          (Unnamed ITensor* 7)    h???                 ????          of
        (             $      D   L   ?   ????H              (Unnamed Layer* 5) [ElementWise]       X  ?      ?          ???         Mul_1   R???   0         Mul_1   T???                   p???         x- n                     	   j???   ????   0         Mul_1   ????                   ????         x- n       ???   <         TensorRTInputPH_0   (???                 D???                    z???   @          (Unnamed ITensor* 5)    ????                   ????         s:
a       h???      8   8   ?   ????4      (Unnamed Layer* 4) [Constant]          ?         ???          (Unnamed ITensor* 5)    ^???   @          (Unnamed ITensor* 5)    p???                   ????         s:
a       T???     <   H???                      ????                   >???                   "???   @          (Unnamed ITensor* 5)    4???                   P???         s:
a       4???(      H   P   ?   ????L                  (Unnamed Layer* 3) [ElementWise]       x       ?         ????         TensorRTOutputPH_0  ???   <         TensorRTOutputPH_0  (???                   D???         s an       @???   	            ????   <         TensorRTOutputPH_0  ????                   ????         s an       ????   @          (Unnamed ITensor* 3)    ???                  ???         imen       V???   ,         Mul T???                   p???          the       0???      8   8   ?   ????4      (Unnamed Layer* 2) [Constant]          ?         ????          (Unnamed ITensor* 3)    &???   @          (Unnamed ITensor* 3)    8???                 T???         imen       ???     D   ???                      ????                                       ????   @          (Unnamed ITensor* 3)     ???                 ???         imen        ,             (      H   P   ?   ????L                  (Unnamed Layer* 1) [ElementWise]       T  ?      ?         ????         Mul ????   ,         Mul ????                   ???          the                     	              b???   ,         Mul `???                   |???          the       ????   <         TensorRTInputPH_0   ????                 ????                    ???   @          (Unnamed ITensor* 1)    $???                   @???                                         8   8   ?   ????4      (Unnamed Layer* 0) [Constant]                  ????          (Unnamed ITensor* 1)    
???   @          (Unnamed ITensor* 1)    ???                   8???                                  L                                ????                                              ????   @          (Unnamed ITensor* 1)    ????                   ???                    4      ?               @               ?              @@????8      L   ????                                        (Unnamed ITensor* 3)    ????                 ????8      L   n???                                        (Unnamed ITensor* 1)    8???                                D      D   4   ????                                               Mul ????                                    D      T   4   F???                                               TensorRTInputPH_0   D???                 j???L      \   <         ????                                               TensorRTOutputPH_0  ????                     
     
   8      L   ~???                                        (Unnamed ITensor* 7)    H???                   
     
   H      \                                                           (Unnamed ITensor* 5)    ????                                  L      \   <         r???                                               TensorRTOutputPH_1  p???                                T      `   D                                                                 Mul_1                             *
max_cached_engines_count*
cached_engine_batches
*
InT
2
?
TRTEngineOp_1TRTEngineOpx2"/device:GPU:0*
max_cached_engines_count*
cached_engine_batches
*
InT
2*
static_engine(*
fixed_input_size(*
_output_shapes
:*6
segment_funcdef_nameTRTEngineOp_1_native_segment*%
input_shapes
:?????????*
workspace_size_bytes??*
OutT
2*
calibration_data *
precision_modeFP32*&
output_shapes
:?????????*?
serialized_segment??@                               (   0   8      8                       L
  ?	     ?        	       ?  (     4???$      D   L   ?   ????H              (Unnamed Layer* 3) [ElementWise]       x       ?         ????         TensorRTOutputPH_0  ????   <         TensorRTOutputPH_0  $???                   @???                  8???   	            ???   <         TensorRTOutputPH_0  ????                   ????                  ~???   @          (Unnamed ITensor* 3)     ???                 ???                  ????   0         Mul_2   T???                   p???                  (???      8   8   ?   ????4      (Unnamed Layer* 2) [Constant]          ?         ????          (Unnamed ITensor* 3)    ????   @          (Unnamed ITensor* 3)    8???                 T???                  ???     D   ???                      ????                                       ~???   @          (Unnamed ITensor* 3)     ???                 ???                   (             $      D   L   ?   ????H              (Unnamed Layer* 1) [ElementWise]       `  ?      ?         ????         Mul_2   z???   0         Mul_2   ????                   ???                                	              ????   0         Mul_2   h???                   ????                  J???   <         TensorRTInputPH_0   ????                   ????                  ????   @          (Unnamed ITensor* 1)    ,???                   H???                                       8   8   ?   ????4      (Unnamed Layer* 0) [Constant]                  ????          (Unnamed ITensor* 1)    ????   @          (Unnamed ITensor* 1)    $???                   @???                                L                                ????                                              ????   @          (Unnamed ITensor* 1)    ???                    ???                        ?              @@  
     
   8      L   ~???                                        (Unnamed ITensor* 3)    ????                   
     
   H      \                                                           (Unnamed ITensor* 1)    H???                                D      H   4   ????                                               Mul_2   ????                                    D      T   4   f???                                               TensorRTInputPH_0   X???                                  \   $   t   L                                                                       TensorRTOutputPH_0                            
N
yIdentityTRTEngineOp_0"/device:GPU:0*
_output_shapes
:*
T0
Q
y2IdentityTRTEngineOp_0:1"/device:GPU:0*
T0*
_output_shapes
:
O
y3IdentityTRTEngineOp_1"/device:GPU:0*
T0*
_output_shapes
:?	
?
q
TRTEngineOp_0_native_segment
tensorrtinputph_0_arg
tensorrtoutputph_0_ret
tensorrtoutputph_1_retL
a/readConst"/device:GPU:0*
valueB
 "   ?*
dtype02
a/readL
b/readConst"/device:GPU:0*
dtype0*
valueB
 "   @2
b/readL
c/readConst"/device:GPU:0*
valueB
 "  @@*
dtype02
c/readQ
MulMula/read:output:0tensorrtinputph_0_arg"/device:GPU:0*
T02
MulC
AddAddMul:z:0b/read:output:0"/device:GPU:0*
T02
AddU
Mul_1Mula/read:output:0tensorrtinputph_0_arg"/device:GPU:0*
T02
Mul_1I
Add_1Add	Mul_1:z:0c/read:output:0"/device:GPU:0*
T02
Add_1"!
tensorrtoutputph_0_retAdd:z:0"#
tensorrtoutputph_1_ret	Add_1:z:0
?
U
TRTEngineOp_1_native_segment
tensorrtinputph_0_arg
tensorrtoutputph_0_retN
a2/readConst"/device:GPU:0*
valueB
 "   ?*
dtype02	
a2/readV
Mul_2Mula2/read:output:0tensorrtinputph_0_arg"/device:GPU:0*
T02
Mul_2N
c2/readConst"/device:GPU:0*
valueB
 "  @@*
dtype02	
c2/readJ
Add_2Add	Mul_2:z:0c2/read:output:0"/device:GPU:0*
T02
Add_2"#
tensorrtoutputph_0_ret	Add_2:z:0"*v
classify_x_to_yc

inputs
tf_example:0$
scores
y:0?????????tensorflow/serving/classify*w
regress_x_to_y2d

inputs
tf_example:0&
outputs
y2:0?????????tensorflow/serving/regress*u
regress_x_to_yc

inputs
tf_example:0%
outputs
y:0?????????tensorflow/serving/regress*
regress_x2_to_y3k
%
inputs
x2:0?????????&
outputs
y3:0?????????tensorflow/serving/regress*q
serving_default^

x
x:0?????????
y
y:0?????????tensorflow/serving/predict