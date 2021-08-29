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
        texture=ImageTexture(url=['../../images/4/Malacca4-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.68233164500902,107.97275072012073,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[1,1,0,1,1,3,1,4,3,0,0,-1,0,0,0,1,0,1,2,4,5,3,2,2,2,2,1,0,3,2,3,-1,-1,-1,-1,0,0,0,0,1,2,3,3,2,2,2,2,3,4,3,0,1,0,0,0,0,0,0,0,1,1,1,2,2,1,5,3,2,3,3,2,2,0,0,-3,-4,-1,0,0,1,0,1,0,1,2,1,3,3,3,3,2,2,2,3,0,2,3,2,-1,-1,0,0,0,1,3,0,0,0,1,0,3,2,2,3,3,2,1,4,2,3,-2,0,0,1,0,1,1,0,0,1,0,3,1,1,1,3,3,3,2,2,1,1,3,1,1,0,0,0,0,0,1,1,1,1,2,3,3,1,1,2,3,0,1,2,4,-3,2,0,1,0,1,0,1,1,1,0,3,2,1,2,2,2,3,1,1,9,-5,10,4,0,1,1,2,0,1,1,0,0,2,16,2,1,2,2,3,2,7,2,-8,4,0,3,2,2,1,2,4,0,0,0,1,26,17,4,2,0,1,1,2,1,3,3,3,1,5,2,2,0,0,1,-2,1,9,8,10,10,14,1,2,1,3,0,2,2,1,3,1,2,3,2,0,-1,0,0,9,27,28,10,8,3,1,2,2,1,3,0,3,0,1,3,0,0,1,-5,0,-1,27,122,22,19,10,2,6,1,3,2,0,2,3,2,2,4,0,3,0,0,0,0,26,52,28,13,16,3,1,1,1,3,1,1,0,2,-1,1,3,3,0,1,0,0,43,29,28,29,7,7,5,0,3,2,3,2,0,1,0,0,2,4,1,0,1,0,28,18,7,5,1,13,4,2,3,2,2,1,2,2,1,1,3,1,0,1,1,0,57,34,31,26,17,25,4,4,1,1,3,3,2,3,1,-3,0,5,-1,5,1,1,30,31,52,47,27,17,8,1,1,1,2,3,2,0,2,0,4,1,5,0,1,2,24,9,9,35,25,24,29,2,1,3,3,3,2,2,5,10,1,-1,0,0,1,1,21,6,17,31,15,14,2,2,3,2,2,2,4,3,2,2,3,1,8,2,2,0,23,4,12,21,13,13,2,2,3,2,2,2,3,3,3,2,3,1,1,0,5,1],
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
