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
        texture=ImageTexture(url=['../../images/4/Malacca6-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[0,0,0,0,5,0,4,2,1,0,1,1,0,3,0,3,2,0,1,0,0,0,0,0,0,0,0,2,2,4,3,5,2,2,0,2,2,4,0,1,4,1,3,3,0,0,0,3,1,6,7,1,5,4,4,1,1,2,1,2,1,4,3,0,0,0,0,0,0,7,0,0,2,5,1,2,1,2,2,1,1,2,7,2,3,1,2,3,1,0,1,0,2,5,0,5,0,0,2,1,2,8,1,4,1,1,3,6,1,2,12,13,4,1,4,2,0,4,3,1,5,0,0,4,1,2,0,2,0,0,0,0,-18,5,-4,2,0,0,3,3,5,2,0,0,0,2,0,0,4,0,0,-1,1,0,5,-18,2,0,0,0,2,1,5,0,4,2,1,1,0,3,2,4,0,1,2,1,-2,2,6,5,1,2,2,2,3,3,8,3,2,4,2,3,3,2,4,1,2,2,2,4,6,-2,3,4,1,6,2,0,1,3,3,2,5,4,2,1,-1,0,2,1,1,3,-4,6,4,1,3,2,0,1,4,2,1,1,0,3,-2,2,4,2,2,3,4,0,8,3,1,2,0,0,2,2,0,-1,3,3,3,3,3,2,4,7,0,3,7,1,4,3,3,0,0,3,0,0,1,0,0,0,1,4,0,1,1,2,2,9,0,5,2,2,0,3,3,2,1,0,0,3,2,2,2,1,4,6,2,5,8,7,4,2,3,1,0,2,0,1,1,0,2,4,1,1,2,4,2,9,7,6,6,10,7,0,3,0,0,2,2,2,4,2,4,0,3,1,10,10,11,12,10,14,12,13,0,2,6,2,2,3,2,4,4,4,2,2,0,15,8,8,10,11,10,8,8,12,0,0,1,3,1,0,2,2,0,2,0,10,13,11,11,9,13,12,8,11,10,11,-1,0,0,3,10,1,0,0,4,-2,9,5,11,9,10,15,29,32,10,7,6,13,3,1,1,3,0,0,2,1,2,4,13,11,11,11,18,20,26,27,9,22,7,24,0,3,1,0,1,2,1,0,3,11,11,10,11,15,28,22,20,24,21,19,6,11,0,0,1,0,0,1,2,3,2,11,14,12,12,8,15,21,19,14,9,25,7,18,0,1,3,0,0,1,2,2,3,14,12,12,10,7,21,20,19,8,10,22,8,17],
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
