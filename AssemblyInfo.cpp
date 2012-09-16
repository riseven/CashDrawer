#include "stdafx.h"

using namespace System::Reflection;
using namespace System::Runtime::CompilerServices;

//
// La información general de un ensamblado se controla mediante el siguiente 
// conjunto de atributos. Cambie estos atributos para modificar la información
// asociada con un ensamblado.
//
[assembly:AssemblyTitleAttribute("")];
[assembly:AssemblyDescriptionAttribute("")];
[assembly:AssemblyConfigurationAttribute("")];
[assembly:AssemblyCompanyAttribute("")];
[assembly:AssemblyProductAttribute("")];
[assembly:AssemblyCopyrightAttribute("")];
[assembly:AssemblyTrademarkAttribute("")];
[assembly:AssemblyCultureAttribute("")];		

//
// La información de versión de un ensamblado consta de los siguientes cuatro valores:
//
//      Versión principal
//      Versión secundaria 
//      Versión de compilación
//      Revisión
//
// Puede especificar todos los valores o usar los valores predeterminados (número de versión de compilación y de revisión) 
// usando el símbolo '*' como se muestra a continuación:

[assembly:AssemblyVersionAttribute("1.0.*")];

//
// Si desea firmar el ensamblado, debe especificar una clave para su uso. Consulte la documentación de 
// Microsoft .NET Framework para obtener más información sobre la firma de ensamblados.
//
// // Utilice los atributos siguientes para controlar qué clave desea utilizar para firmar. 
//
// Notas: 
//   (*) Si no se especifica ninguna clave, el ensamblado no se firma.
//   (*)(*) KeyName se refiere a una clave instalada en el Proveedor de servicios 
//       de cifrado (CSP) en el equipo. KeyFile se refiere a un archivo que contiene
//       una clave.
//   (*) Si se especifican los valores KeyFile y KeyName, tendrá 
//       lugar el siguiente proceso:
//       (1) Si KeyName se puede encontrar en el CSP, se utilizará dicha clave.
//       (2) Si KeyName no existe pero KeyFile sí, se instalará 
// y utilizará la clave de KeyFile en el CSP.
//   (*) Para crear KeyFile, puede ejecutar la utilidad sn.exe (Strong Name).
//        Cuando se especifica KeyFile, la ubicación de KeyFile debe ser
//        relativa al directorio del proyecto.
//   (*)Firma retardada es una opción avanzada; consulte la documentación de Microsoft .NET Framework
// para obtener más información.
//
[assembly:AssemblyDelaySignAttribute(false)];
[assembly:AssemblyKeyFileAttribute("")];
[assembly:AssemblyKeyNameAttribute("")];

