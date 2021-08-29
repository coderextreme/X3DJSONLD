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
        texture=ImageTexture(url=['../../images/4/Malacca5-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-2.674956597161275,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[-99,-99,-99,0,0,0,9,1,0,0,0,0,4,2,-2,12,5,4,0,2,1,0,-99,-99,-99,0,0,0,10,0,4,2,2,-16,3,0,2,-2,8,6,2,0,0,1,-99,-99,-99,0,0,10,6,4,2,2,7,0,0,2,0,1,6,7,6,4,2,-1,-99,-99,-99,0,10,6,4,0,-1,0,5,7,0,0,3,6,1,5,6,4,6,4,-99,-99,-99,10,6,4,0,-1,0,0,0,6,7,0,3,8,6,1,5,3,2,2,-99,-99,-99,6,4,0,-1,0,0,0,0,0,5,8,4,3,8,3,4,5,4,2,-99,-99,-99,4,0,-1,0,0,0,0,0,-9,-18,-14,8,3,3,4,3,9,8,3,-99,-99,-99,0,-1,0,0,0,0,-1,16,4,-9,-18,-14,8,4,4,-13,18,3,2,-99,-99,-99,-1,0,0,0,5,3,2,-11,17,5,-9,-18,-14,2,115,127,6,2,3,-99,-99,-99,0,0,0,7,3,5,3,2,-11,17,4,-9,11,159,125,84,4,6,3,-99,-99,-99,0,0,7,7,7,3,5,3,2,-11,17,73,58,196,124,3,2,2,4,-99,-99,-99,0,7,7,7,7,7,3,5,3,2,-11,2,149,63,8,1,2,1,3,-99,-99,-99,7,7,7,7,7,7,7,3,5,3,3,83,74,214,3,4,4,2,4,-99,-99,-99,7,7,7,7,7,7,7,7,3,5,3,41,71,5,3,2,3,2,2,-80,-80,-80,6,6,6,7,5,6,8,6,6,4,3,13,3,2,2,3,2,2,3,2,2,2,5,5,5,5,8,0,4,9,4,3,4,3,4,2,4,1,3,3,2,2,2,2,10,5,5,5,19,8,0,4,3,5,3,3,2,4,2,3,3,1,1,15,2,2,8,10,5,19,19,18,9,0,2,4,4,2,4,4,2,3,3,3,3,-2,15,2,21,9,45,23,11,13,6,1,7,0,2,2,2,1,2,2,2,1,0,11,-2,15,120,52,28,34,52,28,6,0,1,5,4,3,2,2,2,1,1,2,1,9,7,66,48,65,56,41,59,111,0,0,3,2,4,2,3,3,0,2,1,2,4,11,12,54,57,75,59,41,46,108,0,2,7,1,2,1,2,3,1,2,2,3,3],
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
