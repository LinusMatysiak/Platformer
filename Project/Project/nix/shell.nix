{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
buildInputs = [
    pkgs.gcc          
    pkgs.cmake        
    pkgs.pkg-config   
    pkgs.sfml      
];
shellHook = ''echo "SFML development environment loaded."'';
}
