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
        texture=ImageTexture(url=['../../images/4/Malacca1-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[13,8,7,10,2,6,12,13,13,9,8,8,1,4,0,5,3,1,3,4,10,12,12,8,8,4,4,14,13,15,13,10,7,7,4,9,2,5,4,4,4,4,5,9,9,0,5,-1,10,11,10,9,11,11,8,5,2,7,0,4,4,4,6,4,5,9,8,0,5,11,21,13,16,14,10,9,14,3,4,5,2,5,4,0,4,4,4,5,4,6,6,11,23,18,26,13,12,10,5,0,0,4,4,6,5,1,2,8,6,3,22,13,21,24,24,26,25,27,20,6,18,5,8,6,2,3,3,2,5,4,2,4,25,22,23,22,26,26,26,25,8,-1,7,3,7,4,3,4,3,1,3,5,3,4,13,17,24,26,26,27,26,18,12,-2,10,3,4,4,1,3,5,2,2,4,3,2,14,22,25,29,23,21,24,9,6,7,8,2,8,6,3,4,4,4,2,4,1,2,7,28,26,27,29,27,24,5,5,7,6,5,6,5,3,4,5,1,1,3,4,1,22,26,30,24,25,22,6,10,4,6,5,3,11,5,1,8,3,3,2,5,4,4,22,19,23,25,25,10,4,14,4,7,6,4,5,4,3,5,3,6,2,7,13,2,19,21,22,9,7,6,4,5,4,3,5,5,10,6,4,7,8,5,0,15,16,13,23,24,27,13,3,9,0,3,1,1,6,4,9,9,4,3,5,6,2,11,14,19,26,11,28,13,2,0,0,3,3,2,5,6,10,3,3,6,7,4,24,45,22,6,17,13,10,12,3,5,1,4,3,3,4,2,4,5,4,4,6,7,4,10,21,28,13,10,17,3,4,2,0,2,0,1,5,2,5,5,5,5,8,8,8,9,127,43,11,5,5,1,7,2,0,2,0,4,4,2,6,4,4,2,10,6,3,26,247,102,7,5,0,2,5,4,1,2,1,1,5,0,4,8,2,5,4,8,0,7,249,61,3,2,2,1,1,4,3,1,2,2,4,3,3,5,6,5,7,5,4,5,92,1,1,2,0,1,4,0,1,3,2,2,4,3,4,5,5,4,3,5,4,3,5,3,2,1,1,0,3,2,3,1,2,2,4,1,6,4,5,4,2,5,5,4,5,4,2,1,1,1,6,2,6,1,2,4,2,1,5,4,4,3,2,5,6,5,5,4],
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
