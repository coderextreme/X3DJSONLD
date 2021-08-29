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
        texture=ImageTexture(url=['../../images/5/newport26-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[70,70,67,65,66,68,67,60,56,54,46,41,34,27,18,20,20,17,19,23,23,24,75,75,72,71,70,77,73,67,63,57,49,44,36,25,21,19,20,18,16,17,19,20,87,89,82,82,83,85,77,68,64,59,53,44,35,26,22,17,14,17,19,16,17,18,90,92,91,86,83,83,78,67,63,58,51,46,37,28,20,20,14,15,15,15,20,20,91,88,85,82,79,72,68,64,60,52,50,49,39,29,17,16,13,14,15,17,18,17,93,89,85,81,75,69,65,62,57,49,49,44,37,29,22,20,16,11,13,12,12,13,94,92,88,82,78,71,70,65,54,50,46,43,39,33,25,23,19,16,11,11,10,10,94,94,90,84,80,72,65,60,58,57,50,44,44,39,33,26,20,19,13,12,13,11,94,92,88,85,80,76,70,65,63,60,56,50,49,48,44,37,24,19,16,13,12,12,92,89,84,82,80,77,71,68,66,63,59,60,56,57,57,43,33,21,17,15,16,16,89,83,79,79,78,75,70,69,66,64,63,65,62,66,61,51,41,28,20,18,17,17,83,79,78,77,76,73,72,72,67,67,67,66,67,67,64,56,49,37,24,17,14,14,80,80,80,78,75,73,74,73,69,65,67,65,67,67,66,60,51,38,28,18,16,15,82,81,81,77,74,72,69,71,68,66,65,64,64,60,56,56,52,41,26,19,17,17,84,82,79,74,74,70,67,64,66,65,64,61,57,54,50,49,43,35,26,21,17,16,81,81,78,75,71,68,65,64,60,61,60,58,55,51,46,43,39,32,28,22,18,18,83,82,78,76,71,65,58,55,57,57,55,53,51,50,48,48,44,36,28,20,17,17,84,78,73,70,65,60,55,52,54,53,52,51,50,48,46,35,35,37,31,21,17,17,87,84,77,69,62,60,59,58,55,49,49,48,46,39,36,38,42,37,25,18,16,16,91,91,87,76,69,68,69,67,58,48,45,44,41,44,48,52,51,40,25,18,19,20,96,96,91,88,84,80,75,66,56,54,53,51,55,58,58,58,57,44,26,19,19,19,97,99,98,96,93,86,73,65,61,62,60,64,66,63,58,60,61,55,33,21,20,20,100,99,101,99,93,84,73,66,67,69,68,71,67,61,57,55,54,51,39,24,21,21,100,98,101,99,93,84,71,65,68,69,69,72,67,61,57,53,50,47,37,24,22,22],
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
