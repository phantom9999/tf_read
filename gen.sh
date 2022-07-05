WORKSPACE=`pwd`

cd serving-2.9.0;

for file in `find . -name '*.proto'`;
do
    echo $file
    protoc --grpc_out=../pb_out --cpp_out=../pb_out \
     --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` $file
done

cd ${WORKSPACE};

cd tensorflow-2.9.0;
for file in `find . -name '*.proto'`;
do
    echo $file
    protoc --grpc_out=../pb_out --cpp_out=../pb_out \
     --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` $file
done