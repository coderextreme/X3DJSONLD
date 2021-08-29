###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca3-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4806733645214747,100.04106255949056,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[91,76,82,75,52,76,56,61,67,55,58,54,48,51,60,63,59,41,30,21,18,15,71,112,90,88,83,76,79,60,79,57,64,63,51,71,54,68,58,44,36,32,17,18,67,104,95,67,98,75,87,63,67,50,66,55,81,77,67,65,59,41,43,24,22,17,65,110,87,96,91,99,57,100,88,57,81,75,86,73,48,82,65,49,52,21,16,18,50,141,102,91,119,90,71,90,86,104,79,109,90,79,61,77,62,42,39,20,21,21,65,58,130,97,112,99,84,112,79,80,107,89,59,73,74,74,62,66,25,29,33,36,34,67,67,80,116,109,102,112,110,106,91,71,81,90,106,83,67,64,32,33,46,55,38,51,57,60,69,135,133,105,114,99,92,60,103,105,80,71,55,38,37,36,65,54,26,59,64,51,49,95,112,102,94,120,79,85,115,94,94,71,50,62,31,27,35,42,31,46,51,39,49,89,112,113,101,78,65,108,120,103,75,48,38,62,55,33,38,54,33,27,56,34,53,88,111,117,108,105,92,115,117,106,91,74,57,64,66,33,42,60,30,23,46,40,46,71,97,108,112,111,120,124,93,74,75,63,62,64,63,51,55,49,37,24,27,27,46,75,84,108,109,142,92,122,107,89,82,81,67,65,53,32,64,65,50,27,20,64,48,71,72,95,93,127,104,69,99,82,75,68,44,43,49,33,63,56,51,26,23,44,63,41,69,64,75,91,109,77,84,82,56,58,75,51,53,72,47,43,48,39,27,20,57,51,46,51,76,94,106,88,86,64,65,85,63,59,52,47,62,55,39,29,22,21,53,76,49,65,78,110,101,101,67,90,98,84,58,66,42,47,37,33,35,38,28,64,36,65,83,71,110,83,80,75,84,109,85,90,82,54,52,47,57,26,33,25,23,18,70,67,56,85,110,74,105,113,108,107,98,95,76,39,40,75,39,33,17,33,21,40,58,72,59,55,86,64,104,88,78,83,63,67,46,47,30,45,37,41,24,20,22,59,65,46,54,66,64,57,78,59,56,58,45,46,37,36,34,37,28,19,21,22,69,44,62,40,43,59,73,50,54,48,57,38,33,32,32,35,40,32,26,23,19,22,64,45,54,42,45,60,71,51,48,47,56,39,31,29,30,36,35,29,25,24],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
