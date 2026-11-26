#include <iostream>
#include <vector>
#include <iomanip>
#include <filesystem>
#define MATRIX 4
int main()
{
    std::cout << "C++ Test Success!" << std::endl;
    // std::vector<int> v = {1,2,3,4,5};
    // for(const auto val :v){
    //     std::cout <<val<<" ";
    // }
    std::filesystem::path source_file = __FILE__; 
    std::filesystem::path source_dir = source_file.parent_path(); 
    std::cout << "Source file path: " << source_file << std::endl;
    std::cout << "Source path     : " << source_dir << std::endl;
    std::string file_name = "my_model.pte";
    std::cout << "test path       : " << (source_dir / file_name).string() << std::endl;

    std::filesystem::path exe_dir = std::filesystem::current_path(); //  실행파일 위치
    std::cout << exe_dir << std::endl;

    const int total_elements = 1 * 3 * MATRIX * MATRIX;
    std::vector<float> input_data(total_elements);
        for (int i = 0; i < total_elements; ++i) {
        input_data[i] = static_cast<float>(i % 100) / 100.0f; // 0.0 ~ 0.99 임의 데이터
    }

    for(int i = 0; i < total_elements; i++)
    {
        if(!(i % (MATRIX * MATRIX))) std::cout << std::endl;
        std::cout << std::setw(5) << input_data[i] << " ";
    }

    // for(const auto val :input_data){
    //     std::cout << val << " ";
    // }
    // test for second commit
    std::cout << std::endl << " Test End " << std::endl;

    return 0;
}

