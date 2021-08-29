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
        texture=ImageTexture(url=['../../images/4/Malacca15-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(5.297423545807372,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[6,6,4,5,7,6,9,7,7,5,8,2,7,6,6,7,5,6,5,6,3,5,5,6,8,5,4,6,6,6,7,7,7,5,6,6,6,4,4,7,8,5,4,4,7,5,5,5,4,7,9,6,7,9,6,8,4,6,5,6,6,5,7,8,6,3,6,7,6,7,3,7,6,8,6,7,5,7,8,5,5,4,7,6,4,7,5,6,5,7,4,6,4,7,6,6,4,5,5,6,9,5,7,7,7,5,3,7,5,6,2,4,4,6,7,9,6,7,7,7,8,6,9,8,7,8,7,4,5,6,6,4,4,7,4,4,8,5,5,7,3,7,4,5,7,10,7,5,5,5,6,3,7,8,4,4,7,5,3,4,7,7,6,6,7,6,6,6,7,6,6,7,7,7,5,6,5,4,7,6,8,3,5,5,6,3,6,7,5,6,7,5,8,10,5,5,5,5,2,4,8,6,6,6,3,5,5,4,6,8,5,4,5,7,7,4,6,9,8,6,6,6,9,5,1,5,7,7,7,4,7,8,5,5,5,6,6,5,6,7,7,5,8,5,8,6,7,5,4,5,3,6,1,5,9,4,5,3,5,8,9,6,7,7,5,5,4,4,5,4,5,4,5,4,6,7,5,6,4,5,5,2,6,5,7,6,4,7,8,6,6,4,7,3,5,4,1,4,6,5,4,5,6,5,7,5,9,4,4,3,5,7,8,5,4,3,4,3,3,6,3,5,4,5,6,6,6,6,4,6,2,3,4,4,6,5,5,5,5,5,6,4,5,5,6,5,6,7,6,6,6,5,4,5,3,3,3,4,6,6,6,5,4,5,2,4,3,3,5,5,5,0,4,7,4,4,4,2,5,4,5,4,5,6,3,6,4,7,5,3,4,6,4,3,5,4,4,6,6,4,3,3,3,5,7,6,2,4,2,5,5,5,5,8,3,7,8,4,5,7,3,5,4,0,5,3,7,7,4,5,6,5,4,4,4,5,6,3,2,6,4,7,2,4,5,5,5,3,2,3,2,5,7,4,2,5,4,3,3,2,4,2,3,6,5,3,4,2,4,4,4,5,3,4,6,5,5,6,3,4,4,5,6,4,3,4,3,4,3,2,6,3,4,3,2,6,6,4,5,7,5,4,5,4,6,6],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
