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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small12-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,55.42775814790765,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[3,6,3,0,4,7,4,13,5,1,3,3,4,2,4,8,4,-8,3,0,0,3,3,1,2,5,5,5,4,1,-9,-1,3,2,4,3,9,5,4,-9,2,0,-5,10,8,2,6,9,0,6,7,4,3,0,6,3,3,3,3,5,-14,0,4,0,8,0,4,6,5,3,3,2,5,3,0,7,0,0,6,5,4,3,0,4,0,8,2,16,4,4,7,4,4,6,5,7,5,5,-1,12,4,3,5,2,3,4,1,7,0,8,6,5,4,5,4,2,2,5,5,8,5,0,4,1,3,4,2,3,4,0,7,-5,7,7,5,5,5,6,9,5,0,10,4,1,4,3,2,3,2,2,2,10,0,5,7,6,6,4,4,6,9,6,5,1,15,6,1,3,2,2,2,2,4,5,-9,2,6,4,7,3,12,5,1,5,0,1,-1,0,-2,2,3,9,0,2,2,0,-1,0,8,8,4,7,3,10,5,7,0,0,6,4,-7,-20,0,3,3,4,4,0,0,-1,8,6,8,2,10,5,3,5,4,2,-1,4,4,0,4,1,1,3,0,3,-5,9,7,8,5,5,6,0,3,4,4,6,7,-4,3,2,2,3,3,2,4,2,1,7,5,8,5,2,6,1,6,3,4,4,0,3,8,2,2,2,3,3,3,3,8,-2,5,6,7,4,6,8,4,2,1,2,3,0,-1,3,2,2,3,1,1,3,4,5,7,7,6,6,8,10,6,1,6,2,0,3,-1,3,3,4,3,0,2,0,4,1,8,7,7,8,8,4,3,6,3,3,2,5,5,3,1,1,2,2,3,4,5,5,9,8,7,5,2,5,5,6,4,0,7,-8,0,3,3,1,2,4,3,5,2,3,8,7,6,2,5,5,4,2,5,3,15,-3,9,0,3,3,2,3,7,0,-5,0,11,9,4,5,4,5,5,4,3,2,0,11,-2,3,5,2,3,4,3,4,3,5,12,10,12,3,6,5,5,5,6,2,6,2,4,1,3,5,1,4,4,2,3,-2,15,13,11,11,11,4,4,6,4,3,5,2,3,3,3,3,3,3,2,3,5,2,17,14,14,11,12,8,6,6,2,4,5,3,1,5,3,3,4,4,4,2,5,4,17,15,13,11,12,8,5,6,2,4,5,4,4,3,3,3,4,4,4,3,4,4],
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
