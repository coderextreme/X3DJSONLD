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
        texture=ImageTexture(url=['../../images/5/newport17-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[69,70,64,66,64,68,71,74,78,73,76,74,74,66,56,47,39,34,32,35,31,32,67,65,62,57,58,65,64,69,74,74,73,69,61,53,49,49,39,34,36,28,28,28,66,63,59,56,57,60,63,67,66,67,72,64,54,50,48,39,39,34,29,31,43,44,66,61,58,57,57,59,64,63,63,57,56,52,56,54,50,45,46,41,35,40,42,43,63,62,64,57,64,64,55,61,68,60,49,53,55,46,43,41,46,37,40,38,41,42,70,65,70,70,67,70,73,57,50,49,46,50,41,35,45,45,38,40,42,43,45,45,73,72,69,68,68,69,70,62,48,43,41,40,36,37,32,31,35,44,45,52,44,44,74,73,72,75,72,62,57,56,57,49,40,43,42,35,33,35,41,44,42,44,48,47,79,75,75,69,59,49,47,48,45,41,39,38,41,39,42,41,38,46,53,50,48,46,73,69,64,59,51,50,49,47,48,50,46,48,47,47,47,52,51,52,51,49,49,50,70,64,60,56,46,50,50,47,49,55,62,58,53,55,56,57,60,67,58,53,55,57,67,67,55,46,46,50,51,56,54,61,64,60,60,64,63,61,68,61,61,64,69,68,58,55,47,48,51,54,57,59,61,66,64,68,70,70,68,68,68,69,69,71,76,75,52,51,53,54,58,52,53,59,63,65,68,75,80,78,75,78,73,68,74,78,81,81,52,53,53,58,56,59,58,59,61,68,75,83,87,87,84,81,70,74,77,84,87,88,54,56,57,59,64,64,62,62,68,72,83,85,89,91,92,85,79,80,84,85,96,98,54,58,63,68,65,67,65,67,74,83,86,92,96,101,99,99,88,85,88,91,101,101,60,67,72,73,76,72,72,80,81,89,99,104,105,105,104,101,93,89,86,94,103,106,66,69,74,76,82,78,81,78,87,90,104,111,119,119,111,98,91,89,92,98,102,102,71,74,78,82,82,82,85,91,95,101,112,118,121,115,105,92,92,92,96,102,107,107,76,78,82,88,90,89,90,99,105,108,119,121,121,116,105,100,98,89,91,99,107,108,81,81,82,86,98,104,107,112,117,118,122,120,122,113,104,97,95,90,93,101,105,105,83,84,87,93,106,111,119,120,122,124,123,122,119,110,103,98,90,92,96,102,105,105,83,85,88,92,105,113,120,122,123,125,123,122,119,111,102,97,90,92,96,102,105,105],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
