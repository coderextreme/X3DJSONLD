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
        texture=ImageTexture(url=['../../images/5/newport14-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[65,64,63,60,57,54,52,51,48,45,46,46,44,41,39,37,33,27,26,26,22,22,64,64,63,57,54,53,52,51,47,47,48,47,46,41,39,38,32,28,30,29,28,28,65,64,60,56,55,50,51,53,48,47,46,44,45,40,36,35,30,33,36,34,37,37,68,65,58,54,53,50,49,48,49,52,49,47,44,39,34,34,34,38,43,44,44,43,64,61,55,51,49,49,46,47,50,50,50,49,48,45,40,40,41,44,51,52,49,48,61,55,52,51,50,51,50,49,45,49,54,56,54,46,42,46,49,50,53,56,51,49,60,56,51,50,50,53,56,58,54,59,61,60,57,46,45,52,57,55,54,55,52,51,59,58,55,55,53,56,59,63,65,69,71,69,65,59,55,54,58,57,55,54,50,49,62,58,57,59,58,62,66,69,72,75,76,71,66,61,58,56,56,57,56,52,47,46,65,61,60,60,63,69,73,74,77,78,77,69,63,58,55,55,55,56,54,51,47,46,66,65,66,67,71,78,82,83,82,79,78,71,65,60,57,58,57,55,53,49,47,47,69,70,71,76,83,86,88,87,85,81,79,73,69,63,59,59,57,55,53,49,45,45,75,75,76,83,92,94,93,90,88,86,81,73,70,65,59,57,55,56,49,46,39,38,79,80,86,93,96,97,97,92,90,85,78,70,66,65,60,57,55,57,49,43,32,30,79,84,91,96,99,101,98,96,93,84,77,70,68,65,61,59,55,54,49,41,30,28,79,84,92,97,101,99,97,95,92,83,77,72,70,67,60,56,54,50,42,39,34,33,78,82,90,100,102,97,93,90,84,80,77,72,69,64,58,56,53,45,36,33,30,29,77,84,92,100,100,94,89,84,79,76,73,69,65,59,56,56,47,36,30,23,23,23,76,83,92,99,99,91,86,81,75,72,69,66,60,55,53,48,39,29,24,20,23,23,79,83,90,97,95,89,84,80,75,69,64,58,54,51,48,36,28,24,21,24,26,26,82,86,91,97,92,87,81,73,70,66,58,49,42,42,36,27,23,21,24,29,26,26,83,88,93,94,89,84,78,71,67,63,51,40,32,27,25,24,21,21,26,27,26,26,81,89,93,93,89,82,75,66,63,55,45,35,27,25,26,26,20,18,26,27,27,27,81,89,93,93,89,82,75,65,62,54,44,35,26,25,26,26,20,18,26,27,27,28],
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
