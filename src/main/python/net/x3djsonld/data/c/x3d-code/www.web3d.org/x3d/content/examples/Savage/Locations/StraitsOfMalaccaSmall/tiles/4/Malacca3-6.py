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
        texture=ImageTexture(url=['../../images/4/Malacca3-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4806733645214747,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[15,25,11,23,22,13,22,23,27,24,12,28,18,34,39,37,39,42,42,41,45,39,21,27,12,25,19,14,24,15,12,13,10,12,23,40,42,30,40,41,44,42,41,36,23,27,12,26,24,13,23,21,15,14,15,15,29,38,41,33,39,44,42,44,40,38,27,30,14,24,20,13,18,22,28,22,8,15,6,37,38,35,37,37,39,42,39,39,12,10,11,13,8,40,20,17,12,7,8,14,32,36,34,37,29,11,34,33,36,40,18,13,18,26,15,38,18,13,18,9,8,6,8,18,30,33,20,3,31,33,23,37,25,24,21,19,9,29,14,12,25,20,6,36,33,32,27,33,11,4,31,36,38,36,16,23,13,8,21,32,12,15,33,31,23,12,27,9,16,27,25,21,33,23,24,34,8,13,8,21,13,23,22,10,28,6,22,7,5,22,8,20,17,3,34,35,32,36,8,7,15,7,16,9,13,16,17,20,6,7,3,6,0,3,1,17,15,36,35,37,28,15,7,12,8,4,7,21,2,3,15,2,4,3,10,2,8,24,5,21,28,36,35,22,16,5,9,16,14,3,16,4,3,4,4,3,0,-6,0,3,28,11,12,18,26,13,7,4,7,9,11,2,5,3,4,8,1,4,0,-2,-1,-7,3,1,14,2,27,14,26,4,6,3,4,4,5,3,6,3,0,-1,0,7,0,0,-4,-2,0,1,11,22,22,14,5,2,2,5,4,-1,1,4,10,6,5,14,3,6,-2,-34,4,-6,23,6,7,14,8,5,1,-10,-57,-62,11,4,5,7,2,6,2,0,0,0,5,0,23,15,5,5,2,7,-3,-5,15,0,5,5,2,17,15,8,8,19,6,5,-3,3,11,6,5,5,2,2,0,4,6,2,1,7,23,17,29,20,27,25,1,6,0,0,9,10,6,3,4,-1,0,0,3,7,9,9,18,33,29,31,27,24,19,7,10,8,8,13,6,5,-16,-6,7,7,4,6,9,5,28,31,27,28,28,27,25,4,4,5,8,4,5,2,1,5,0,4,6,6,8,34,32,34,31,26,22,25,28,20,23,29,7,4,5,3,1,0,-2,7,5,5,32,33,31,37,34,28,27,30,30,22,27,29,13,2,3,5,0,0,-1,7,4,5,30,34,32,37,34,28,28,29,29,22,27,28],
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
