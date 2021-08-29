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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small5-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.00937491632225,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[2,6,2,7,7,4,4,3,5,1,6,4,0,0,1,1,6,0,1,6,5,4,3,3,3,6,0,1,2,9,5,0,1,2,4,6,4,5,1,4,4,4,1,3,5,4,2,2,11,8,4,1,5,4,5,0,1,0,5,2,1,0,1,6,5,2,8,1,8,5,7,6,4,2,4,3,0,3,4,1,0,5,5,0,4,5,4,3,4,4,5,4,-1,5,2,0,2,4,6,0,5,0,3,4,2,2,8,3,2,3,3,1,1,0,7,5,-4,3,3,7,0,5,1,3,3,5,1,6,5,8,8,0,7,7,1,7,3,1,2,2,2,1,0,5,6,2,2,1,2,4,6,7,2,0,6,5,9,3,5,2,2,4,3,2,6,0,7,1,0,4,3,4,3,1,8,4,6,0,3,3,3,3,5,3,-1,3,3,3,0,6,2,8,5,5,2,2,5,6,6,1,0,0,5,4,2,2,4,3,-1,5,3,3,0,3,3,2,8,5,3,7,0,5,1,3,2,3,2,4,5,3,1,2,3,2,3,4,3,4,2,3,5,4,4,4,2,1,3,1,6,4,2,2,3,1,0,3,5,6,0,7,7,5,0,5,4,0,2,3,0,4,6,3,6,7,2,2,4,4,6,0,5,8,0,4,5,7,1,2,1,1,2,4,8,4,1,4,7,0,3,2,0,1,4,6,3,0,3,2,6,7,2,2,4,3,5,2,4,4,0,7,3,5,3,5,2,1,3,2,7,5,2,6,3,4,3,7,3,3,0,3,5,3,6,6,2,7,1,3,2,4,7,2,1,4,6,4,2,0,4,5,1,3,4,4,2,2,0,3,2,0,1,3,5,0,1,4,3,2,1,7,3,6,2,2,4,3,2,4,3,2,6,5,2,3,9,3,3,3,3,1,3,4,5,3,1,1,4,1,7,4,0,4,1,4,5,4,-1,6,4,0,4,6,2,0,2,3,4,3,6,0,-8,16,6,4,4,1,5,6,3,2,3,3,4,2,2,1,5,6,1,-2,-12,1,5,18,0,6,2,4,7,7,9,8,2,3,3,5,4,9,1,4,-1,4,10,21,20,-3,7,7,4,6,5,1,2,9,2,2,2,4,7,9,1,3,-2,5,10,23,17,-4,13,6,4,7,6,1,3,8],
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
