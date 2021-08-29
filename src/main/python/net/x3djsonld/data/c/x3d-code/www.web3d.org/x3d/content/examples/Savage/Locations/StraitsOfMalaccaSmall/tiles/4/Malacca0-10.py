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
        texture=ImageTexture(url=['../../images/4/Malacca0-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[26,30,23,20,20,15,2,6,3,12,9,10,9,9,8,9,15,11,6,9,15,15,28,25,26,24,24,6,4,6,5,5,21,11,11,11,8,11,10,7,8,10,8,6,30,27,24,17,12,5,6,4,4,-1,10,27,22,18,11,11,14,8,9,7,1,5,25,23,24,23,3,7,9,11,3,2,6,26,30,23,22,9,11,13,8,6,3,5,21,18,22,20,8,8,12,3,10,5,6,12,25,23,23,10,9,6,8,6,6,7,22,23,12,1,4,7,7,3,6,6,8,10,17,29,28,9,9,7,4,5,6,5,26,18,12,1,6,8,1,5,11,7,7,10,12,35,32,15,14,7,5,7,4,0,22,20,3,4,5,8,4,8,8,13,16,9,10,17,13,9,6,6,5,4,5,5,25,2,2,5,6,7,3,5,7,7,9,6,8,11,10,6,19,6,3,5,3,7,17,2,4,4,0,2,5,3,6,-4,14,5,6,6,4,14,6,4,6,3,3,2,5,2,0,0,3,5,5,4,7,3,3,4,7,6,10,14,7,5,6,7,5,6,5,6,4,4,0,4,6,3,4,4,9,9,16,10,9,5,8,7,6,2,5,7,1,-4,8,10,8,5,5,-3,7,5,8,4,0,0,5,5,6,6,5,7,5,5,6,7,7,8,16,1,-2,3,5,4,2,4,6,4,4,6,4,6,5,2,11,12,12,11,13,23,20,3,7,12,6,4,8,2,2,4,4,4,4,5,4,6,2,17,13,10,8,9,7,2,6,9,5,2,5,5,6,2,5,5,8,3,9,5,11,8,12,9,9,10,20,8,2,8,7,7,8,6,3,4,6,2,6,0,4,4,12,22,10,10,10,21,20,10,11,9,3,9,5,8,3,3,4,3,3,3,5,6,10,22,9,20,22,22,16,10,2,6,4,13,7,2,4,2,0,0,1,2,4,4,11,18,26,27,13,22,12,0,1,8,4,2,2,5,6,6,2,2,3,1,6,6,16,10,11,14,14,9,7,8,6,5,7,3,7,7,0,0,2,4,5,4,2,7,9,11,17,10,7,10,0,6,12,14,12,9,4,6,2,0,2,5,4,4,3,4,12,14,13,8,7,10,2,6,12,13,13,9,8,8,1,4,0,5,3,1,3,4,10,12],
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
