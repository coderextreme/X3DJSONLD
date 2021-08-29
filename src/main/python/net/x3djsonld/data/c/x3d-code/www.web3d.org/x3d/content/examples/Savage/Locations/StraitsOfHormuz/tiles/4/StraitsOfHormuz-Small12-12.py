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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small12-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[1,0,1,0,3,0,2,0,0,1,1,2,0,2,5,13,7,14,26,44,31,27,0,3,0,3,0,2,1,0,2,1,1,1,1,-1,3,10,9,11,24,23,24,22,2,1,1,0,0,1,1,0,1,0,0,0,3,2,11,8,4,10,21,17,17,18,1,0,2,0,1,1,1,1,2,3,2,0,3,2,3,12,6,10,14,14,17,19,0,1,1,2,0,1,1,2,1,0,3,3,2,4,7,6,11,9,12,15,16,18,1,2,0,1,0,2,0,1,0,1,1,3,0,6,7,12,14,11,13,14,18,18,2,2,1,1,0,0,0,2,2,2,0,1,1,6,10,12,15,18,14,14,15,18,2,0,0,2,1,2,0,1,2,0,0,0,4,5,12,10,18,15,11,14,16,18,2,2,1,2,2,0,1,0,1,0,1,0,4,10,9,12,17,13,10,14,18,19,0,0,3,0,2,1,2,0,1,0,0,2,6,7,12,9,13,10,9,8,15,16,1,1,3,1,0,0,2,1,0,1,1,4,6,10,8,7,12,10,8,11,16,16,2,3,3,5,0,0,0,2,1,-1,2,5,6,7,7,13,10,8,5,9,13,15,0,1,2,3,2,0,1,1,0,0,4,4,8,9,7,16,9,7,10,10,15,14,2,0,3,0,1,1,0,1,2,0,4,5,8,6,8,6,7,7,8,9,12,16,0,0,0,1,0,2,1,0,2,3,5,6,5,4,6,7,8,7,6,11,16,16,0,1,1,3,0,2,2,-1,4,6,3,7,7,6,9,6,13,7,6,13,17,17,2,0,2,1,1,1,1,4,5,4,5,8,6,6,9,6,6,6,6,14,15,15,0,2,1,2,0,2,2,4,6,5,6,4,5,6,8,10,6,5,5,10,7,12,0,2,1,0,4,1,3,5,3,5,9,8,7,9,4,7,7,5,7,9,12,14,1,1,2,1,4,2,6,5,2,5,7,3,6,7,6,6,7,9,6,8,12,13,0,0,1,2,2,6,1,5,2,6,2,3,6,6,7,6,9,9,10,8,10,15,0,0,1,3,7,5,3,4,3,5,4,5,3,7,4,5,6,7,8,10,15,15,0,1,0,3,6,5,3,5,3,5,4,5,3,7,4,5,6,7,8,10,14,14],
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
