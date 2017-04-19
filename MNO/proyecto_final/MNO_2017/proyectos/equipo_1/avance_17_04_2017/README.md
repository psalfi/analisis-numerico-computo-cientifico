# Avance_17_04_2017

## Integrantes:

** Gabriela Flores**

** Paulina Salgado**

** Guillermina Montanari**

## Trabajo:
### Individual

**Paulina**: Lectura de las referencias de Word Embeddings, Word2Vec y Redes Neuronales.

**Gabriela**: Revisó la implementación del programa en python para identificar que partes de código se pueden paralelizar.

**Guillermina**: plataforma CUDA

  - Instalacion del driver y toolkit de CUDA: 
      -- http://docs.nvidia.com/cuda/cuda-installation-guide-linux/#axzz4eMvndrn1
      
 - Prueba de un programa CUDA en entorno UBUNTU:
 
      -- Hardware para el proyecto:https://drive.google.com/open?id=0ByF7NuX9EW1IZU1XaWdodVJSXzQ
      
      -- Tarjeta grafica: https://drive.google.com/open?id=0ByF7NuX9EW1IZnRudEJoWlNWVUk
          
      -- Codigos compilados y ejecutados como primera prueba de la instalacion de CUDA:  https://drive.google.com/open?id=0ByF7NuX9EW1IS1M3aWJBMnhGRGs
          
     -- La compilacion de los programas en CUDA se realiza con: nvcc <archivo.cu> -o <archivo.out>
     
     -- La ejecucion se hace con: ./<archivo.out> 

  - Versiones instaladas:
  
    -- gcc: https://drive.google.com/open?id=0ByF7NuX9EW1ISVhPd0JhMmVsWEE
    
    -- nvcc: https://drive.google.com/open?id=0ByF7NuX9EW1IYTJETHFQSWpRRlU
    
### Equipo

##Redefinición del alcance del proyecto.

Redefinimos el objetivo del proyecto: Paralelizar word2vect con el modelo continuos bag of words (CBOW), mediante Cuda C.

