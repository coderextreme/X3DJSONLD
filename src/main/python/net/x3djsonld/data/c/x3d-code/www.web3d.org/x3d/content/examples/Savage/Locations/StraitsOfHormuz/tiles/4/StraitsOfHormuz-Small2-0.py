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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small2-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.6730900978689,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[3,4,3,1,4,1,2,5,2,4,4,4,3,2,2,5,3,4,4,2,3,3,3,5,1,5,6,2,3,7,4,3,3,5,2,5,4,4,5,2,4,2,3,3,3,6,4,5,4,2,4,5,4,3,4,3,4,4,3,3,4,5,2,4,4,4,2,4,1,4,1,4,3,4,4,3,4,5,5,3,4,2,4,2,3,5,4,3,1,4,4,3,5,3,2,3,3,5,1,4,3,3,4,4,4,3,4,4,4,4,3,4,2,4,2,3,3,2,4,3,4,3,5,3,3,8,2,4,3,3,4,5,1,1,4,5,4,0,4,5,3,3,0,2,4,2,5,4,4,3,1,5,5,3,3,3,3,5,4,1,4,5,2,2,0,4,4,4,4,4,5,5,6,3,4,4,1,4,4,4,4,3,2,3,5,1,1,2,3,3,2,5,4,4,6,3,4,4,5,6,2,3,1,3,3,4,5,4,5,3,6,4,4,4,4,4,3,4,4,5,4,2,2,3,2,0,2,3,4,4,4,4,4,5,5,0,3,8,4,4,5,1,1,2,4,0,3,2,3,4,2,4,3,4,2,5,2,5,6,4,4,5,6,3,2,3,3,5,6,2,2,2,3,3,3,4,4,4,4,2,3,3,1,4,3,5,4,4,4,2,3,3,0,3,3,5,4,3,3,4,3,4,4,4,4,4,5,4,3,4,4,2,4,4,3,2,3,3,2,6,4,5,5,5,4,3,7,4,6,4,0,7,3,2,3,2,3,4,4,3,4,2,4,5,5,5,4,3,3,6,3,4,2,4,5,5,3,4,6,3,3,6,5,3,5,4,4,3,4,5,5,4,3,5,6,1,6,3,4,3,2,4,6,5,4,5,3,3,5,1,5,5,6,3,3,2,2,3,7,5,2,4,5,4,4,3,5,5,5,3,4,5,1,5,5,5,4,3,3,5,3,4,5,4,4,4,2,4,5,5,4,2,5,3,5,2,5,7,7,4,2,4,3,4,3,3,3,5,4,5,3,1,6,2,6,3,5,2,3,4,5,2,1,3,4,6,6,0,4,7,1,2,3,4,5,5,0,4,2,5,1,4,5,3,-1,3,3,7,4,0,1,5,2,2,2,5,4,5,2,4,2,4,0,4,5,3],
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
