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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small7-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.23356479529115,57.084809373449744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,1,1,1,0,1,3,0,3,0,0,0,1,1,1,2,1,3,5,1,5,10,3,4,0,3,3,4,2,3,0,-1,2,1,2,0,1,1,2,1,2,4,6,9,2,1,0,4,0,3,2,2,1,0,0,1,2,2,2,3,1,3,4,5,5,8,0,0,1,0,1,0,2,0,2,0,2,1,1,1,2,3,2,3,4,4,8,9,-1,2,1,0,2,2,2,2,2,0,2,1,3,2,3,3,2,3,4,4,7,9,1,2,2,3,1,1,1,1,0,0,0,4,3,1,5,5,4,5,3,5,12,12,3,0,2,2,0,3,1,2,2,3,2,3,2,5,5,8,5,6,6,6,12,11,1,1,2,1,2,1,1,0,1,1,0,3,3,4,4,7,9,6,6,5,6,9,2,2,2,1,0,2,1,1,1,3,3,2,5,6,7,8,8,8,7,6,4,6,4,1,0,2,1,0,1,1,0,1,5,6,2,5,7,8,8,7,7,7,13,13,3,3,2,1,3,1,2,1,1,2,2,3,5,5,4,6,9,9,8,8,12,15,2,2,0,2,2,1,1,1,1,2,2,4,9,12,8,5,9,7,12,10,15,14,2,1,1,2,2,0,1,1,1,2,5,4,4,5,5,7,8,9,12,11,18,12,0,3,2,1,1,0,0,1,1,1,2,5,5,7,5,8,10,14,11,12,13,16,1,3,0,1,0,3,0,1,0,4,2,3,5,5,9,11,12,15,13,14,15,15,1,3,1,2,1,2,2,2,2,2,3,5,6,8,7,11,12,17,15,16,13,16,1,3,2,1,1,2,2,1,3,3,3,6,4,7,8,10,12,16,16,16,18,12,4,1,1,2,1,2,0,0,0,5,5,6,9,7,11,12,13,16,19,19,16,19,4,1,1,3,0,1,2,0,4,2,7,5,7,8,11,12,14,13,18,22,22,20,1,1,2,0,1,0,2,1,3,3,5,7,7,10,10,16,16,15,20,18,23,21,2,2,2,2,2,2,2,1,3,1,5,6,9,9,10,15,14,18,19,21,19,19,2,2,1,2,0,2,3,4,6,3,5,5,7,8,9,14,13,19,17,19,20,25,1,2,1,2,0,2,2,2,4,3,5,5,8,8,11,13,14,19,19,20,21,24],
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
