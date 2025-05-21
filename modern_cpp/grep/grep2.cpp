#include <iostream>
#include <string>
#include <fstream>
#include <regex>
#include <vector>

using namespace std;

/*
Patron de iteracion
    Ojo a este patron para iterar por listas
for(int i=0;i!=list_of_files.size();i++){
    cout << list_of_files[i] << endl;
}

for (const auto& file : list_of_files) {
    cout << file << endl;
}
*/
/*
    cout << "pattern: " << pattern << endl;
    for (const auto& file : list_of_files) {
        cout << "path_to_file: " << file << endl;
    }
    cout << "show number lines: " << (show_line_number ? "yes" : "no") << endl;
*/


void look_for_pattern_in_file(string path_to_file, regex re_pattern, bool show_line_number, bool show_file_name){
        
        // abrir el archivo
        ifstream file(path_to_file);
        if(!file.is_open()){
            cout << "File:" << path_to_file << "not found";
            return;
        }
        // buscar el patron

        string line;
        size_t line_number = 0;
        while(getline(file, line)){
            if(regex_search(line, re_pattern)){        
                if(show_file_name) cout << path_to_file << ": ";
                if(show_line_number) cout << line_number << ": ";
                cout << line << endl;
            }
            ++line_number;
        }
    }

int main(int argc, char* argv[]){

    // verificar numero de parametros
    if (argc<3){
        cout << "Failed. The pattern of the command is: " << argv[0] << "<pattern> <path_to_file>" << endl;
        return -1;
    }

    // asignacion de parametros
    // si pasamos el parametro "-n" entonces queremos que muestre el número de la linea
    // el argumento "-n" puede venir en cualquier orden. Lo que is sabemos es que pattern viene antes que la direccion del fichero

    bool is_pattern_readed = false, show_line_number = false;
    vector<string> list_of_files;
    string pattern, path_to_file;
    for (int i = 1; i!=argc; i++){
        string argument = argv[i];
        if (argument == "-n"){
            show_line_number = true;
        }
        else if(!is_pattern_readed){
            pattern = argument;
            is_pattern_readed = true;
        }else{
            list_of_files.push_back(argument);
        }
    }

    // mostramos el nombre del archivo donde estamos buscando? Si hay varios si, si solo hay uno no
    bool show_file_name = list_of_files.size() > 1;
    
    regex re_pattern(pattern, regex_constants::icase); // regex_constants::icase -> case sensitive


    for(const auto& path_to_file : list_of_files){
        look_for_pattern_in_file(path_to_file, re_pattern, show_line_number, show_file_name);
    }

}


