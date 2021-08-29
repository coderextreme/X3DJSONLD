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
        texture=ImageTexture(url=['../../images/4/Malacca2-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[4,115,6,4,5,0,0,1,1,-1,1,2,2,4,1,3,1,0,2,1,1,3,3,3,3,3,1,4,1,2,0,2,3,1,1,4,0,0,0,6,8,4,0,7,2,1,6,0,2,2,2,1,4,2,1,5,2,0,0,2,0,3,9,2,1,4,4,1,3,4,0,0,1,3,2,0,2,2,0,0,0,5,1,6,4,0,4,5,4,2,3,3,6,2,8,0,-1,1,7,-1,5,3,0,0,8,-1,7,73,20,2,3,0,4,5,3,0,2,3,-2,5,13,7,4,3,3,0,2,9,7,14,6,0,3,4,5,5,5,9,0,2,3,9,1,2,0,22,1,1,0,20,12,0,-6,9,1,2,4,2,6,7,6,6,2,3,4,1,4,-2,0,0,6,0,4,11,18,18,2,5,4,4,5,3,-9,6,3,3,0,5,0,3,4,14,10,18,4,2,11,13,5,4,4,4,6,-5,13,8,8,6,3,2,1,8,11,8,13,1,19,6,29,35,4,4,5,9,16,8,10,13,5,5,3,6,3,12,8,12,9,8,9,2,29,16,2,4,3,15,7,12,11,7,6,3,10,8,2,8,9,14,16,18,5,12,35,29,3,9,11,4,9,11,18,11,16,2,0,3,14,0,0,39,20,10,17,16,34,25,2,7,0,3,14,12,15,11,19,0,12,13,8,5,42,17,34,8,11,41,59,53,5,3,1,7,11,11,17,10,15,0,12,18,44,9,-4,12,13,12,20,27,40,57,4,4,10,9,13,15,10,17,15,13,10,16,10,9,9,7,24,10,16,33,37,43,6,6,0,7,15,12,15,12,20,11,9,48,6,15,8,32,34,15,8,28,47,42,1,7,6,10,8,13,10,11,10,17,12,35,17,29,16,9,32,8,8,8,30,53,4,8,1,11,14,16,12,9,17,7,14,25,15,17,15,4,16,20,6,8,29,26,7,2,10,14,10,15,9,11,12,11,3,5,31,16,25,15,16,7,10,34,21,31,4,3,12,18,13,15,8,8,10,9,8,24,33,26,42,20,12,0,10,31,19,5,0,0,10,13,15,17,19,9,8,7,15,23,23,67,27,18,13,9,49,35,22,11,0,2,11,10,18,17,20,13,8,8,16,31,25,58,30,18,11,6,45,36,28,11],
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
