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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small9-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.457754674260052,55.27711712740383,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,0,1,-1,1,0,5,3,-1,3,6,7,0,-6,9,7,4,3,10,12,19,-17,0,2,3,5,9,8,0,0,7,10,1,-8,-1,4,3,3,-3,0,0,0,11,0,2,3,0,11,0,0,0,4,0,-2,2,5,0,0,6,3,0,-2,-2,5,10,0,5,0,-11,8,3,3,4,0,0,4,4,2,-5,3,8,3,-12,0,6,5,0,0,0,0,7,3,1,3,4,-2,8,4,0,16,1,1,-3,3,8,-4,-7,2,18,-5,5,0,2,1,7,9,8,8,-2,1,-1,14,8,1,4,7,-2,6,-1,2,2,0,1,0,0,0,3,7,7,4,7,-7,0,-1,6,12,0,0,2,-3,0,1,9,0,9,-2,4,3,5,4,4,7,-5,-4,0,0,2,2,1,4,-2,0,3,0,-17,-7,11,-1,9,14,1,6,7,6,-7,-2,0,1,-1,1,0,5,-2,9,3,0,0,1,0,17,0,7,0,11,10,-8,-4,0,0,0,0,2,3,1,-8,5,18,2,9,10,3,-3,4,0,12,10,9,-4,0,0,0,0,0,5,10,-6,5,5,4,0,1,5,1,7,-1,0,2,10,1,-1,0,0,0,0,3,9,-3,1,5,5,3,-3,0,3,0,-4,0,-3,3,1,-2,0,0,0,0,1,2,-1,-4,5,5,5,-3,0,0,0,2,0,0,2,7,-1,0,0,0,0,0,4,6,-7,5,5,5,0,-1,0,0,0,0,-1,0,2,0,0,0,0,0,-3,-1,0,-5,3,5,5,0,-3,0,0,0,0,-1,0,2,-1,5,6,-1,0,-1,0,0,0,0,5,5,4,-4,0,0,0,0,0,-1,0,-2,1,1,-4,-1,0,1,0,0,0,0,0,0,0,9,0,4,0,0,0,2,0,5,7,0,-5,0,-2,-1,0,0,0,0,0,0,6,0,3,-3,0,6,-12,0,3,4,0,2,2,1,-1,0,0,0,0,0,0,1,0,2,3,-8,1,-12,-9,2,10,4,1,0,5,5,0,0,9,0,0,0,0,7,1,6,-8,0,-8,-4,5,4,17,7,8,26,21,-6,0,-7,9,7,0,0,8,0,6,-7,0,6,-12,6,3,13,10,5,4,15,16,3,-7,3,8,4,1,4,-2,2,1,-2,4,-13,0,4,-6,13,11,7,6,18,10,5,-7,2,8,2,1,5,-2,3,-1,0,5,-13,1,5,-7],
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
