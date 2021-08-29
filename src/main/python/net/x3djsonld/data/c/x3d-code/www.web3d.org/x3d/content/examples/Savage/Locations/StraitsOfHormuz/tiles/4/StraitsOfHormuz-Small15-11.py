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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small15-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.130324311166753,56.78352733244209,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[4,1,5,2,2,2,3,3,2,4,5,4,5,5,3,6,8,5,6,7,7,10,3,3,-1,5,3,4,3,4,3,3,3,4,4,0,15,8,7,9,5,8,7,7,3,4,2,3,5,1,5,4,2,5,4,5,2,5,3,6,5,8,6,8,9,7,5,2,3,3,3,2,4,4,3,4,4,5,4,5,6,5,7,4,7,7,6,6,5,4,4,4,3,4,4,3,4,-1,5,4,3,5,7,5,8,1,3,7,8,11,4,3,1,5,5,3,5,3,4,3,2,5,5,5,3,5,5,2,6,7,8,10,4,5,6,4,4,3,1,2,3,6,0,5,6,5,7,4,4,4,2,7,8,7,6,5,8,6,5,4,4,4,3,4,5,5,4,6,7,6,3,6,6,6,6,6,3,5,8,10,4,7,5,6,5,4,4,5,5,7,8,8,4,4,1,3,9,12,6,7,7,1,3,5,4,5,4,4,2,3,5,6,7,5,7,3,5,5,5,8,4,7,6,6,3,5,5,4,5,5,6,5,7,5,8,6,7,7,7,7,12,10,6,9,4,3,4,0,8,4,5,4,6,6,6,11,7,8,6,7,8,10,9,13,6,5,5,6,6,5,6,6,7,8,6,4,5,6,6,6,10,7,8,8,11,11,5,6,4,7,6,8,5,5,4,8,7,4,7,4,8,7,9,9,9,10,7,10,6,7,1,7,5,5,6,4,8,6,14,5,5,7,7,9,6,7,9,10,10,10,5,6,6,8,7,6,6,6,7,7,8,7,7,6,7,9,9,8,9,8,8,9,6,4,6,6,6,7,5,7,6,6,7,7,9,8,9,5,8,8,9,9,9,8,5,6,6,6,7,5,6,6,6,7,8,8,10,7,9,9,9,9,10,9,9,10,5,6,6,8,5,6,5,7,6,7,7,9,9,10,7,10,9,9,8,9,10,9,7,6,5,4,5,8,6,6,6,7,7,9,10,10,9,9,9,11,10,10,12,11,6,7,5,5,5,6,6,7,7,7,9,9,8,7,9,9,10,10,10,11,11,10,4,6,8,6,7,6,8,8,7,7,8,10,8,8,9,9,11,13,14,13,13,12,5,6,7,7,8,6,9,7,8,7,9,10,9,9,10,10,10,12,14,14,13,13],
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
