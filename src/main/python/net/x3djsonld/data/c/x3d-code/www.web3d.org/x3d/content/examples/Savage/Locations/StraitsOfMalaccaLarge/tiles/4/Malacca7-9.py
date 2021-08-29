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
        texture=ImageTexture(url=['../../images/4/Malacca7-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-0.6602065014657854,101.90825043207244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[80,86,107,88,95,93,87,40,49,145,268,82,64,28,24,17,19,17,5,9,6,7,47,82,70,70,75,88,68,51,43,59,146,41,28,11,13,24,6,10,4,6,7,9,58,54,77,34,67,68,71,56,42,31,33,27,19,27,32,23,25,5,15,19,6,4,62,27,27,29,35,55,49,48,58,25,20,13,40,15,31,30,29,26,5,7,10,8,53,53,54,48,46,21,32,27,23,23,51,67,19,8,6,27,27,23,7,5,7,6,51,70,78,65,53,70,31,22,20,27,77,41,23,25,5,10,14,9,23,17,10,13,118,115,114,77,47,39,22,22,24,13,57,30,9,9,7,8,32,35,29,21,20,22,100,116,79,90,40,36,65,62,36,27,18,14,9,16,7,27,37,29,25,25,26,28,70,105,65,56,42,72,71,61,30,29,33,33,38,24,31,35,37,25,26,28,19,16,82,90,58,54,70,58,66,38,32,38,36,42,37,37,37,33,34,32,22,23,29,28,88,42,38,40,79,49,36,18,24,34,29,37,30,39,36,35,32,20,25,28,24,22,76,73,33,29,31,52,24,15,34,31,35,37,35,31,31,35,8,25,30,26,26,28,55,34,27,13,18,30,26,18,27,14,18,33,34,35,25,25,6,25,24,15,15,17,44,22,20,14,14,34,29,23,30,29,27,29,33,31,26,29,27,28,25,29,30,29,21,24,23,11,35,35,23,21,26,30,32,17,31,34,32,28,29,29,30,25,30,27,31,12,33,31,53,43,36,61,35,21,32,21,36,32,29,30,27,31,32,25,13,22,27,25,39,35,46,27,56,40,32,31,28,30,32,33,30,32,23,20,25,29,23,22,15,14,13,32,70,65,27,19,31,30,30,29,27,19,9,26,25,26,25,10,23,26,22,15,19,46,72,33,29,47,34,23,18,29,22,18,9,20,26,22,12,12,10,10,6,46,54,81,38,28,47,26,26,18,25,9,16,25,23,23,-5,5,8,3,12,11,6,39,43,44,27,13,24,19,20,25,21,25,29,30,29,24,26,28,6,2,0,11,5,34,43,45,35,14,23,19,21,26,22,27,29,25,30,24,25,24,6,1,0,7],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
