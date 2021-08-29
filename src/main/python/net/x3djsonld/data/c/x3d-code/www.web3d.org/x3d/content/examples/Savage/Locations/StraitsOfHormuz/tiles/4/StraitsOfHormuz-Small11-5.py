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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small11-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.681944553228952,55.87968120941913,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[12,87,32,7,4,2,0,1,2,0,0,0,0,1,1,2,0,1,0,2,0,1,8,12,8,2,0,0,0,1,1,0,1,0,1,0,0,1,0,0,1,0,1,1,4,27,18,0,2,0,-2,1,4,0,2,2,0,0,1,1,3,0,0,2,1,0,0,5,2,0,1,1,0,0,0,0,1,0,0,2,0,2,-1,1,0,1,1,2,1,1,0,0,-4,-4,9,8,2,8,0,1,0,0,0,1,0,1,0,2,1,0,2,2,1,0,3,3,17,14,10,19,6,3,0,2,0,0,0,1,0,0,1,-1,1,1,0,1,0,8,26,25,26,27,20,12,-1,3,0,2,1,0,0,0,0,1,0,3,0,0,0,8,23,22,26,19,31,26,13,0,1,0,0,0,0,-1,0,1,3,1,1,1,5,2,8,12,38,19,9,26,22,13,1,3,0,3,-1,-1,0,2,0,0,4,0,3,1,11,10,14,19,10,6,12,18,2,4,0,0,0,3,0,1,7,3,1,1,5,2,7,6,9,43,11,5,3,4,1,1,0,3,1,1,0,4,0,0,1,6,2,2,5,20,11,11,13,9,5,1,5,0,2,0,0,1,3,0,-1,3,2,1,4,1,9,11,26,15,36,20,5,5,4,5,3,1,2,0,1,3,2,3,3,3,3,2,6,7,19,24,24,44,23,11,5,35,12,6,4,0,3,4,0,2,3,4,3,3,7,7,16,32,20,42,18,52,9,9,18,6,4,4,2,2,2,2,3,0,5,5,7,6,11,24,40,18,13,11,8,8,9,4,3,10,5,2,3,4,3,6,6,7,11,6,10,16,22,16,12,11,6,9,8,2,3,7,18,9,5,6,7,9,7,9,10,10,8,13,21,15,13,10,11,9,8,5,8,45,37,7,9,10,8,10,16,12,9,8,8,14,21,16,14,17,11,9,7,7,6,11,13,8,8,14,15,13,13,12,14,10,13,15,17,17,19,17,11,40,13,7,10,9,22,11,21,19,24,23,16,16,12,14,14,16,19,18,21,13,17,19,23,15,14,27,101,20,27,32,33,37,33,25,17,24,20,19,22,30,25,16,18,21,27,24,27,23,23,52,27,32,34,36,35,25,17,25,20,20,22,31,25,15,18,22,26,26,32,23,26,60],
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
