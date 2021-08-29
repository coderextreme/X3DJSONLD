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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small6-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.1214698558067,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[2,2,2,4,7,9,1,3,-2,5,10,23,17,-4,13,6,4,7,6,1,3,8,5,4,0,7,7,0,0,-9,-14,6,8,6,1,4,5,6,5,1,0,4,5,3,5,2,4,13,6,-4,-9,-4,-4,-2,7,2,8,10,-9,18,2,9,1,5,4,0,4,6,6,8,2,3,2,0,1,0,5,8,5,-7,13,18,6,4,1,1,3,1,8,5,7,12,2,7,8,0,0,1,10,-2,24,-7,12,10,3,8,7,0,1,2,3,3,2,15,0,9,8,5,5,15,2,4,11,6,-12,29,7,5,-2,0,0,2,4,10,2,10,14,4,-1,-1,8,15,3,16,4,4,-3,7,5,0,2,5,3,0,5,9,6,7,5,4,1,3,4,0,-7,9,0,-2,17,5,17,4,2,0,1,2,1,13,4,3,11,15,0,0,0,9,5,2,3,14,-9,0,14,0,1,5,0,6,2,3,2,3,7,0,1,6,11,0,-19,-1,-2,9,3,4,0,9,4,3,3,3,0,7,4,1,-2,1,2,0,11,18,10,2,9,0,17,0,11,13,6,5,0,2,3,-1,1,5,5,-2,4,9,0,0,15,2,-3,4,3,3,1,5,10,2,10,2,3,13,0,3,4,25,4,1,3,0,0,0,1,-1,7,5,2,13,0,35,20,-9,2,1,0,9,2,3,9,-2,7,10,-6,10,4,-1,-1,17,2,-7,11,4,-7,7,6,4,2,-9,4,-1,2,6,0,4,10,-9,0,12,-1,-5,10,10,3,-4,8,-7,0,6,3,0,6,2,0,8,0,-1,7,0,-3,-2,9,10,-2,3,3,8,0,6,4,4,6,7,0,3,2,0,0,6,0,0,7,7,-2,4,4,11,3,-1,2,1,3,6,0,2,5,3,-2,9,0,2,3,13,6,0,4,1,4,2,-5,4,6,2,0,2,11,0,3,1,3,1,3,7,3,0,0,-2,6,0,0,6,5,1,3,3,4,-2,0,3,6,1,1,7,4,2,0,0,5,0,1,3,3,3,0,1,6,0,5,2,5,2,2,2,6,1,2,1,4,3,3,3,4,-1,2,8,3,4,-2,7,0,1,-3,-3,1,2,0,2,0,2,1,3,4,4,3,1,8,1,0,3,6,0,0,4,-1,-1,1,2,0,4,0,1,2,1,2,4,3,0,8,3,0,0,6,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
