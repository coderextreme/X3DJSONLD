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
        texture=ImageTexture(url=['../../images/4/Malacca1-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,104.21606275779241,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[31,20,13,-2,2,0,0,-2,8,0,-2,0,-7,-4,4,3,7,2,3,10,6,4,107,29,10,8,-1,1,1,-2,-3,-2,0,13,0,7,16,20,0,27,15,15,16,0,12,7,2,1,0,-2,-1,-2,-2,-3,0,-3,21,22,5,2,9,29,22,170,5,13,3,8,6,3,3,3,-2,-4,-4,-3,-4,-7,2,11,0,3,8,1,9,13,0,16,13,5,2,6,11,1,-4,-6,-5,-4,1,1,-13,3,10,27,2,20,21,18,52,1,17,9,2,0,7,1,3,-1,-2,0,-1,3,0,26,22,16,11,24,45,15,18,29,-1,6,1,6,0,-6,-3,-4,0,0,-7,22,0,0,12,1,25,37,31,38,13,31,0,0,0,-1,-4,-3,-6,-3,0,-1,-11,9,5,9,7,11,16,38,23,21,19,25,1,4,-5,-2,0,-6,-3,-6,-1,0,-1,13,58,36,1,3,2,8,15,22,6,11,0,0,1,-2,-2,0,-12,-6,-5,0,-4,9,2,4,0,4,8,18,9,20,17,5,0,0,3,6,9,10,0,-29,-2,4,4,3,5,3,9,25,9,15,24,25,21,6,0,4,-11,2,7,13,7,0,4,3,1,-2,4,5,13,10,21,27,75,23,11,3,0,0,5,4,21,18,2,3,3,5,4,6,5,0,-10,9,9,22,11,7,2,15,17,0,5,12,13,4,3,4,10,9,4,2,0,5,6,3,6,15,19,17,7,41,12,13,15,24,9,2,2,4,7,9,4,10,4,6,9,10,10,12,14,21,41,42,6,8,26,11,3,21,0,8,13,18,4,12,3,9,8,4,4,14,44,21,44,25,11,29,40,28,9,18,14,23,13,2,20,6,12,5,9,18,14,22,29,23,29,11,7,16,38,58,16,18,11,36,7,13,18,2,14,3,21,13,31,32,27,14,18,30,18,0,12,33,57,12,17,22,11,23,19,16,1,8,17,11,30,75,33,42,33,33,8,12,10,2,9,22,13,6,23,45,55,11,15,64,28,21,23,38,45,45,3,3,2,17,15,12,6,-20,2,23,17,37,15,38,39,16,18,36,15,32,20,5,1,1,10,4,11,7,12,13,8,23,20,16,15,39,19,6,4,9,21,4,7,1,1,2,10,4,11,6,6,13,4,19,19,15,18,39,15,6,4,7,23,4,6,0,1,0],
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
