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
        texture=ImageTexture(url=['../../images/4/Malacca9-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3545435942297044,101.90825043207244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[34,26,34,34,28,10,2,24,28,23,9,9,10,3,2,3,2,4,2,2,1,2,34,24,7,35,34,6,2,27,12,8,9,20,8,5,5,2,2,3,2,1,2,1,25,25,32,18,3,2,2,7,4,17,22,11,6,4,2,2,2,3,4,1,1,3,34,16,6,4,1,7,11,13,8,17,6,6,8,3,3,4,3,3,3,4,2,1,36,3,1,2,12,23,11,9,10,10,22,9,5,3,3,2,3,0,2,1,1,1,2,2,2,12,30,25,10,6,0,4,2,2,3,3,3,4,2,1,2,4,4,6,1,2,2,11,2,3,3,4,3,3,3,4,2,2,3,3,2,0,1,4,6,5,3,2,2,2,4,3,3,3,3,4,4,2,2,3,2,0,0,1,4,3,4,5,2,2,3,2,4,3,3,3,4,3,3,3,3,1,2,3,4,2,2,4,4,3,2,2,2,4,3,3,3,3,2,3,4,4,4,4,4,3,0,3,3,3,4,4,1,3,2,4,3,4,4,2,4,4,3,3,4,4,2,1,1,4,3,2,6,8,3,3,3,4,4,3,4,5,4,2,5,4,6,2,5,2,3,2,6,9,7,6,4,2,3,3,2,2,3,4,4,4,4,4,5,4,1,6,9,11,13,9,9,8,5,4,4,2,2,3,3,3,5,4,4,3,5,4,4,6,9,12,12,13,11,26,4,3,4,6,4,3,3,3,4,6,5,7,4,4,11,12,31,11,17,13,17,185,3,5,5,5,4,3,5,2,3,4,3,7,4,10,7,8,18,15,35,24,29,16,2,5,4,6,4,5,4,3,5,5,4,3,12,8,5,19,61,29,12,35,286,418,4,4,5,4,5,5,4,4,2,3,28,19,12,9,14,8,15,12,23,40,225,403,5,4,4,5,5,5,4,7,10,14,21,23,10,32,14,9,16,15,29,120,179,302,2,2,4,4,4,25,8,7,28,34,46,38,9,17,21,23,12,16,13,13,36,52,5,3,4,4,22,112,38,20,44,52,53,17,27,41,38,49,23,53,11,17,30,219,3,3,4,4,28,113,42,23,43,51,49,17,29,57,40,51,21,49,12,19,35,244],
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
