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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small5-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.00937491632225,55.27711712740383,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[4,4,4,4,4,1,2,4,3,5,4,5,3,2,1,2,0,4,4,5,5,5,3,2,6,5,5,5,4,6,1,3,5,3,5,2,3,1,2,2,3,4,2,3,2,3,11,4,4,3,6,2,3,5,6,2,3,4,4,2,2,2,3,3,3,4,3,2,2,7,3,6,2,5,6,2,3,7,4,2,3,4,6,1,2,1,4,6,3,6,4,4,6,2,2,3,2,3,3,2,3,3,3,4,1,5,3,4,1,3,0,4,6,3,2,3,2,1,3,5,1,5,5,4,3,3,1,4,2,3,2,4,0,0,0,4,1,5,4,0,1,6,3,3,2,1,4,4,4,6,5,2,4,0,4,7,2,2,5,3,1,3,3,3,5,4,4,3,3,4,5,1,2,4,2,4,6,5,6,9,4,8,4,3,5,5,7,2,3,5,6,0,3,2,3,1,0,2,7,2,2,5,0,1,0,1,5,2,3,1,2,1,1,1,2,2,1,3,4,1,4,2,2,4,3,5,4,3,3,3,3,4,2,4,1,4,4,0,4,0,4,-2,5,5,1,1,3,3,2,2,5,5,4,1,4,4,1,4,5,0,2,3,1,8,7,4,3,0,3,3,1,1,2,4,6,7,4,2,2,3,3,0,3,0,1,2,2,4,0,4,2,4,1,3,4,5,1,5,3,4,1,3,0,2,1,0,4,2,5,2,7,3,5,3,2,1,2,3,6,3,0,2,1,2,6,3,4,4,1,3,2,1,4,2,2,4,1,7,4,5,4,1,2,4,4,1,3,2,0,0,2,0,0,4,1,4,6,3,3,4,3,4,2,-1,4,3,2,2,1,2,1,3,3,3,3,3,3,0,0,5,4,2,4,3,5,3,0,1,0,0,3,2,2,3,5,2,6,7,0,1,0,5,1,5,1,1,1,3,0,4,1,1,0,1,1,1,2,-1,2,1,3,6,2,3,3,3,2,1,3,2,0,5,1,4,2,2,4,4,2,6,8,4,2,6,5,1,0,3,3,2,0,4,2,0,-1,0,3,4,2,7,2,0,9,3,1,4,4,5,3,4,0,5,5,2,2,0,0,1,3,0,4,0,6,2,8,3,2,4,3,5,3,3,0,4,5,1,2,1,1,0,3,0,3,0,5,2],
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
