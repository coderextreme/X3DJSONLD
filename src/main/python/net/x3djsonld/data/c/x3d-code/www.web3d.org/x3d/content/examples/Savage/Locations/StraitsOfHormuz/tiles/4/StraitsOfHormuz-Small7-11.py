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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small7-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.23356479529115,56.78352733244209,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[-2,-5,-3,-2,0,-4,7,-3,-2,-2,0,1,2,6,-2,8,8,8,8,8,6,0,0,-5,-10,-3,-4,-1,-1,0,5,-3,-3,0,2,2,8,-2,8,8,8,8,8,3,2,-5,2,1,-5,4,-1,-6,-2,-10,-3,-2,0,2,0,4,0,8,8,8,7,5,12,-6,-5,0,0,-1,-3,3,-5,5,-8,-3,-1,0,2,1,-2,7,8,8,0,0,0,-5,0,5,4,-5,0,-2,11,-5,-1,-7,-3,0,2,2,8,-2,8,5,1,0,1,-7,2,-1,0,-4,-3,-2,-3,0,-4,0,-3,-3,0,2,1,8,0,9,4,2,-4,-2,-1,2,1,-2,-3,0,0,5,-6,-3,-1,-3,-1,0,1,0,0,0,7,5,0,-1,-3,-4,-2,-2,1,0,2,-2,15,-6,-1,-10,-3,0,0,0,0,0,0,8,-3,0,-9,-1,-6,0,-5,1,0,3,-2,9,-5,0,-3,5,2,0,0,0,0,0,5,0,0,1,-2,0,-4,4,0,0,0,-3,-4,-3,0,0,3,1,0,0,0,0,0,0,-1,-1,0,-8,-4,0,0,0,0,-1,12,-6,-3,0,4,2,0,0,0,0,-7,-1,0,-5,1,11,-3,-6,0,0,0,3,-2,3,-6,4,2,0,2,0,0,0,0,-7,1,0,3,3,-8,-4,-6,0,0,0,2,3,3,-5,14,0,6,2,0,0,-1,-3,-3,2,6,3,5,-8,-5,0,0,0,-5,6,12,0,-4,0,0,2,1,0,0,0,-4,-3,-17,3,2,3,-6,3,-1,-4,20,-4,5,4,-6,-2,2,2,2,1,-4,1,1,-3,44,0,3,0,-2,0,-3,9,20,8,0,4,3,-6,16,2,4,2,-2,-2,-7,1,30,6,4,-8,0,-1,2,-2,-1,20,-2,5,4,3,-3,6,0,1,-3,3,-5,-4,16,5,0,3,0,-4,15,0,-12,0,20,-6,6,12,-3,4,-2,0,1,-4,-7,-1,4,0,18,-1,-3,15,3,8,6,-10,18,18,0,2,1,0,3,-1,0,0,2,2,0,-7,3,-1,3,13,4,7,1,-8,0,3,-1,6,2,3,0,0,-2,-1,9,1,0,-1,2,2,9,1,5,1,9,1,1,-1,7,4,1,0,0,3,0,3,4,3,0,1,1,5,2,-1,-6,-15,5,4,0,2,3,3,1,0,3,0,0,2,4,2,1,1,-1,4,0,-2,-4,-21,2,0,-5,-1,2,3,0,0,2,1],
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
