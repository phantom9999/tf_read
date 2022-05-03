

for filename in `find . -name '*_test.cc' -o -name '*_benchmark.cc'`
do
    echo ${filename};
    origin_dir=`dirname ${filename}`;
    target_dir="test_dir/${origin_dir}";
    echo ${target_dir};
    mkdir -p ${target_dir};
    cp ${filename} ${target_dir};
done


