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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small10-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.569849613744502,55.57839916841148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,2,0,0,7,-1,-2,1,4,-2,4,2,2,0,0,1,0,1,0,4,0,1,1,3,1,5,7,1,-3,0,0,0,2,3,3,3,0,3,3,-1,1,3,1,0,4,2,-3,-1,4,0,0,2,3,0,0,0,-1,1,6,1,0,0,2,2,2,0,0,1,0,8,-3,0,0,0,2,5,2,5,1,-1,0,-4,2,0,2,3,3,1,1,0,2,7,5,11,10,0,3,0,4,0,0,0,3,0,3,2,2,3,-1,3,-6,0,8,6,4,4,0,0,1,0,0,0,0,0,2,0,1,0,3,0,2,2,-3,8,7,8,-2,3,2,0,6,1,0,-1,2,3,2,0,2,4,0,1,2,1,9,7,7,8,9,0,-11,3,8,0,1,4,3,3,2,0,0,2,0,0,4,2,13,6,8,8,10,0,-13,4,5,0,1,4,3,-1,2,3,5,0,3,0,0,0,8,-1,8,10,10,-1,0,6,2,-1,2,0,3,7,3,2,2,0,3,0,2,1,0,10,10,10,1,-1,6,2,0,0,-4,2,3,0,4,0,5,0,1,0,-1,3,0,21,11,2,-1,7,5,9,2,3,0,3,0,0,2,2,0,3,3,3,1,5,16,8,0,13,14,12,2,14,0,8,3,0,3,3,7,2,4,0,0,3,1,1,18,0,10,14,14,9,12,4,0,0,0,8,3,7,0,8,5,0,0,0,-2,0,26,2,12,14,12,5,8,16,10,-2,0,3,6,2,5,4,0,7,1,0,1,1,26,19,14,8,14,8,6,13,9,-4,0,-1,7,10,0,5,4,1,0,0,1,0,24,20,85,33,3,9,14,7,7,-5,0,0,0,2,4,0,1,4,0,0,4,4,32,22,5,20,41,13,5,7,0,0,1,-1,0,0,7,0,0,5,0,0,0,3,18,11,16,9,2,37,25,23,2,1,0,-2,0,7,6,3,-5,0,0,0,6,0,41,21,10,38,23,13,58,26,9,8,6,0,0,4,3,0,7,-2,4,4,0,3,49,29,25,24,71,208,54,34,72,15,6,7,7,0,2,4,7,4,6,4,3,6,64,34,24,48,43,122,33,36,35,18,12,7,0,1,3,0,7,13,8,5,5,4,59,38,24,49,45,109,33,42,44,18,12,8,1,3,3,0,7,13,7,2,2,4],
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
