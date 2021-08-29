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
        texture=ImageTexture(url=['../../images/4/Malacca6-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,100.04106255949056,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[10,3,2,2,7,7,4,4,6,0,6,17,25,26,17,9,-2,-1,2,0,3,0,9,2,3,2,8,9,6,7,8,1,8,10,9,22,6,10,-1,-1,1,2,0,2,5,1,4,1,1,10,5,5,3,2,6,7,6,17,8,8,-1,-1,-1,0,0,0,1,2,0,1,0,9,2,2,2,5,7,11,23,4,6,2,-1,-2,0,0,5,0,2,2,1,2,1,3,0,2,4,9,6,11,23,7,9,2,0,0,-1,0,0,-1,3,2,2,2,-2,1,6,1,5,20,6,15,24,18,5,-13,-2,1,-6,2,-1,-3,2,3,1,2,1,0,3,5,7,23,16,23,21,17,8,-1,0,0,0,1,0,0,2,2,1,2,2,0,3,14,6,23,20,19,20,17,2,0,-2,0,-6,-4,0,0,2,2,1,0,1,9,5,6,9,23,19,19,12,14,10,-2,-1,-2,0,-1,-4,0,2,1,1,2,4,3,7,10,25,20,22,18,10,9,0,-1,-2,0,0,-2,0,-7,0,3,2,4,5,1,4,18,15,16,25,19,7,-1,-4,-4,1,-2,-3,-4,3,-3,2,1,1,3,6,5,7,7,16,21,23,18,-1,-1,0,0,0,1,-2,-1,-2,-1,6,1,7,-1,0,4,4,9,17,21,16,13,0,1,-1,0,0,0,-1,-6,-2,-2,-7,2,2,2,0,5,8,8,14,9,3,11,5,0,0,-3,-1,0,-1,0,-11,-1,1,1,2,0,2,9,6,15,19,3,7,-2,0,1,2,1,1,0,-1,1,3,0,1,0,1,1,3,3,9,17,14,2,-3,1,2,0,0,1,2,1,0,1,-5,0,0,1,1,-1,1,3,2,14,14,12,0,0,4,0,0,0,0,1,-2,-1,0,-2,0,0,2,-1,0,8,2,2,11,2,0,0,0,1,0,0,0,1,2,0,0,0,1,0,2,-7,0,3,7,3,1,3,3,0,1,1,0,6,0,2,3,-4,0,0,2,1,10,0,0,0,-5,8,8,4,0,0,0,0,1,2,2,1,1,0,0,1,2,6,-1,0,-2,0,-1,0,1,1,1,1,1,0,-1,4,3,3,2,0,0,0,7,0,1,0,-1,0,0,0,1,1,0,3,2,3,0,1,3,4,0,0,-1,1,10,0,0,0,-1,0,0,0,0,1,0,2,2,5,0,0,2,5,1,1,0,1],
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
