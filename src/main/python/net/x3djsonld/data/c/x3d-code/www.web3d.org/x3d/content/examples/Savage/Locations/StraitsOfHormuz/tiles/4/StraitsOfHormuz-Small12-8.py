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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small12-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[2,2,4,2,2,2,2,2,4,1,3,2,1,4,3,6,3,3,5,3,1,3,2,5,5,1,1,1,3,2,1,3,3,1,1,5,2,2,5,5,3,3,2,5,3,2,3,3,4,3,3,2,2,3,5,4,3,3,3,3,4,0,3,3,4,4,2,2,3,1,5,3,1,2,3,5,4,2,4,3,4,1,4,1,4,2,3,5,2,3,1,2,2,2,2,1,5,2,4,2,4,1,1,3,3,4,2,6,2,3,3,0,2,3,2,2,5,5,3,3,2,3,3,2,2,2,3,4,2,4,3,2,4,2,3,1,2,5,3,4,1,2,3,2,1,3,1,1,5,2,3,3,3,2,2,1,4,2,1,3,3,-2,1,2,3,4,2,5,3,1,4,3,2,1,3,1,26,1,9,0,1,3,3,1,4,4,2,2,3,3,3,3,3,4,2,3,4,3,36,40,40,44,36,5,3,2,1,2,3,3,5,4,6,1,3,3,4,1,4,2,48,53,57,58,38,42,17,0,0,4,4,3,0,4,3,5,5,3,4,2,2,4,53,70,68,63,36,22,17,7,4,5,4,4,4,2,3,4,4,4,5,4,1,1,76,58,67,55,39,32,21,14,10,4,5,4,3,3,5,2,4,3,0,3,2,3,72,56,69,56,49,48,32,24,21,13,3,2,3,5,3,3,4,3,1,3,4,1,40,66,52,65,61,61,47,36,33,22,10,3,2,4,2,2,2,3,1,3,1,2,31,28,49,74,88,104,67,51,59,19,19,5,2,1,4,3,1,0,4,3,5,4,5,10,23,58,102,82,72,58,35,12,20,11,2,2,2,3,1,2,2,4,1,2,4,5,9,38,81,35,49,60,17,12,11,17,1,3,0,5,2,4,4,6,4,6,3,4,7,27,64,16,25,21,4,20,21,6,2,0,3,4,1,2,1,4,2,3,0,7,3,36,40,22,8,12,5,15,10,4,2,2,3,1,2,4,4,4,2,1,2,3,3,2,3,4,4,6,1,1,-1,1,2,5,0,2,2,3,4,2,4,3,2,7,3,2,8,0,3,2,0,1,4,2,3,3,2,2,3,3,1,5,2,1,2,7,3,2,6,0,3,1,0,1,5,2,3,3,1,3,2,3,2,4,3,1],
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
