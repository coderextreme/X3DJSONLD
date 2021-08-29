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
        texture=ImageTexture(url=['../../images/4/Malacca1-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[27,27,30,24,15,14,33,30,31,31,32,27,27,32,10,9,12,36,38,24,14,13,26,28,15,12,10,15,37,30,32,32,30,29,27,24,10,33,35,38,28,16,17,12,26,28,31,20,6,18,18,31,25,23,22,24,21,21,19,34,35,36,17,11,12,9,23,24,28,21,9,20,36,20,23,13,14,16,20,13,25,35,35,30,10,15,9,8,26,25,26,13,7,9,15,7,16,12,7,10,9,12,26,36,35,24,15,13,0,4,29,19,11,13,9,4,10,7,5,5,6,4,6,16,19,34,27,22,13,14,8,22,19,10,27,9,11,7,9,5,6,6,10,9,5,16,27,30,23,21,10,0,7,25,6,6,9,8,6,4,6,10,4,4,7,9,12,12,24,16,21,7,4,8,13,13,5,5,14,15,10,5,9,6,7,2,10,18,10,11,12,5,1,9,7,11,14,14,12,6,8,10,10,4,9,8,4,5,6,7,6,6,1,10,10,8,9,11,14,7,18,10,5,6,9,2,4,5,8,7,6,6,8,-2,6,5,17,11,23,21,20,22,10,14,15,4,10,10,5,-4,4,7,9,5,0,7,8,6,16,20,22,29,24,22,18,12,5,4,3,0,6,7,2,3,-2,-25,7,10,6,11,11,21,24,26,19,19,10,18,12,3,2,5,5,15,11,14,1,11,11,5,2,7,4,5,9,24,21,23,6,16,16,6,5,1,4,12,14,11,12,14,9,8,5,6,5,6,12,24,24,26,10,18,11,4,4,5,3,7,4,11,11,10,13,8,7,6,6,7,18,24,25,17,11,11,2,2,2,4,3,5,6,7,8,20,11,15,7,5,5,9,26,31,26,13,8,7,0,2,3,2,2,8,10,4,5,10,11,10,9,13,8,10,15,18,10,11,5,3,5,2,6,4,5,0,2,3,4,8,23,13,13,9,20,12,11,7,5,7,1,2,3,6,2,2,4,2,1,6,7,7,8,8,12,11,10,7,4,2,4,3,3,3,4,5,5,3,5,2,3,2,6,9,9,12,7,2,0,3,3,2,3,1,3,4,2,2,4,2,3,4,4,3,0,4,-1,5,3,5,5,6,0,1,0,2,2,4,2,2,4,4,3,4,4,4,5,0,1,7,0,4,1,6,0,1,1,2],
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
