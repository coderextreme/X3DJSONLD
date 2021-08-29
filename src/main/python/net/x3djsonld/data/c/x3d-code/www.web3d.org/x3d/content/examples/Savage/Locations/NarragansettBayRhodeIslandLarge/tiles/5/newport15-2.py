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
        texture=ImageTexture(url=['../../images/5/newport15-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[81,89,93,93,89,82,75,65,62,54,44,35,26,25,26,26,20,18,26,27,27,28,81,86,89,89,85,77,68,61,55,46,39,29,23,23,24,25,22,20,27,25,28,29,73,82,86,84,77,71,60,52,45,37,28,23,25,26,27,28,24,18,25,27,28,29,65,74,77,74,67,57,48,44,35,27,22,21,21,24,24,24,27,18,20,22,26,27,53,52,63,58,52,47,37,34,29,24,22,22,22,22,20,20,21,19,19,20,25,26,43,41,43,41,35,34,28,25,23,23,20,20,22,21,19,19,19,20,23,24,29,29,32,36,35,31,26,26,22,22,28,27,23,23,22,21,21,20,20,21,21,24,29,29,29,31,26,24,27,27,27,29,29,27,27,25,27,22,22,22,22,20,20,22,26,27,28,26,20,21,24,26,28,30,31,33,31,29,30,26,23,21,19,22,23,27,29,29,28,23,22,23,25,27,29,33,34,34,31,30,29,27,23,22,26,28,30,32,35,36,29,23,28,30,32,32,32,35,37,37,35,34,34,32,28,27,31,35,36,39,40,40,27,23,28,29,32,35,38,38,38,38,34,33,35,40,41,35,36,38,39,43,44,44,29,25,27,29,30,32,39,40,40,37,37,37,39,40,40,40,40,47,51,50,46,45,31,27,26,31,35,35,38,37,40,41,41,39,43,43,42,46,49,53,55,54,49,48,29,26,27,34,36,34,39,43,45,47,47,47,46,45,43,51,55,56,54,52,47,47,27,28,29,32,28,37,45,49,52,53,52,49,48,51,54,59,63,59,57,52,44,44,28,29,32,35,36,41,48,55,59,58,56,53,52,55,61,65,65,61,56,53,48,47,32,34,33,43,49,49,51,55,62,61,57,55,59,64,65,66,65,61,57,53,46,45,35,39,42,45,46,48,54,59,67,65,63,63,63,71,72,72,68,66,62,54,47,45,37,38,45,50,51,56,63,69,72,69,68,69,71,76,75,75,73,71,64,56,50,49,37,43,51,57,59,65,70,74,76,75,75,76,75,75,82,80,76,74,67,60,54,53,40,48,55,57,66,74,78,81,81,80,81,83,84,85,89,85,79,77,70,63,56,55,43,49,58,61,73,80,85,88,86,81,82,87,91,93,93,88,87,80,72,64,57,57,44,50,58,63,74,81,85,88,86,83,85,88,91,92,93,90,88,80,73,64,58,57],
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
